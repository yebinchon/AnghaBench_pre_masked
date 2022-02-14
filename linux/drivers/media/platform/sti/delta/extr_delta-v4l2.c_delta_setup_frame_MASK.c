
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct delta_frame {size_t index; int state; } ;
struct delta_dev {int dev; } ;
struct delta_dec {int dummy; } ;
struct delta_ctx {size_t nb_of_frames; struct delta_frame** frames; int name; struct delta_dec* dec; struct delta_dev* dev; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct delta_dec const*,int ,struct delta_ctx*,struct delta_frame*) ;
 int FUNC_1 (int ,char*,int ,size_t,size_t) ;
 int FUNC_2 (int ,char*,int ,size_t,size_t) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct delta_ctx *VAR_4,
        struct delta_frame *VAR_5)
{
 struct delta_dev *VAR_6 = VAR_4->dev;
 const struct delta_dec *VAR_7 = VAR_4->dec;

 if (VAR_5->index >= VAR_1) {
  FUNC_1(VAR_6->dev,
   "%s frame index=%d exceeds output frame count (%d)\n",
   VAR_4->name, VAR_5->index, VAR_1);
  return -VAR_2;
 }

 if (VAR_4->nb_of_frames >= VAR_1) {
  FUNC_1(VAR_6->dev,
   "%s number of frames exceeds output frame count (%d > %d)\n",
   VAR_4->name, VAR_4->nb_of_frames, VAR_1);
  return -VAR_2;
 }

 if (VAR_5->index != VAR_4->nb_of_frames) {
  FUNC_2(VAR_6->dev,
    "%s frame index discontinuity detected, expected %d, got %d\n",
    VAR_4->name, VAR_4->nb_of_frames, VAR_5->index);
 }

 VAR_5->state = VAR_0;
 VAR_4->frames[VAR_4->nb_of_frames] = VAR_5;
 VAR_4->nb_of_frames++;


 return FUNC_0(VAR_7, VAR_3, VAR_4, VAR_5);
}
