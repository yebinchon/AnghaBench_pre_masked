
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int dummy; } ;
struct device {int dummy; } ;
struct delta_streaminfo {scalar_t__ dpb; } ;
struct delta_frameinfo {unsigned int size; } ;
struct delta_dev {int dev; } ;
struct delta_ctx {scalar_t__ nb_of_frames; int name; struct delta_frameinfo frameinfo; struct delta_streaminfo streaminfo; struct delta_dev* dev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,unsigned int,unsigned int) ;
 struct delta_ctx* FUNC_1 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_2(struct vb2_queue *VAR_4,
           unsigned int *VAR_5,
           unsigned int *VAR_6,
           unsigned int VAR_7[],
           struct device *VAR_8[])
{
 struct delta_ctx *VAR_9 = FUNC_1(VAR_4);
 struct delta_dev *VAR_10 = VAR_9->dev;
 struct delta_streaminfo *VAR_11 = &VAR_9->streaminfo;
 struct delta_frameinfo *VAR_12 = &VAR_9->frameinfo;
 unsigned int VAR_13 = VAR_12->size;







 if (*VAR_5 < VAR_1) {
  FUNC_0(VAR_10->dev,
   "%s num_buffers too low (%d), increasing to %d\n",
   VAR_9->name, *VAR_5, VAR_1);
  *VAR_5 = VAR_1;
 }

 *VAR_5 += VAR_11->dpb + VAR_2;

 if (*VAR_5 > VAR_0) {
  FUNC_0(VAR_10->dev,
   "%s output frame count too high (%d), cut to %d\n",
   VAR_9->name, *VAR_5, VAR_0);
  *VAR_5 = VAR_0;
 }

 if (*VAR_6)
  return VAR_7[0] < VAR_13 ? -VAR_3 : 0;


 *VAR_6 = 1;

 VAR_7[0] = VAR_13;

 VAR_9->nb_of_frames = 0;

 return 0;
}
