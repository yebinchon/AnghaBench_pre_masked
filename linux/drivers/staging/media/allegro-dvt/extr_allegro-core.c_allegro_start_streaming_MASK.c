
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {scalar_t__ type; } ;
struct allegro_dev {int v4l2_dev; } ;
struct allegro_channel {scalar_t__ csequence; scalar_t__ osequence; struct allegro_dev* dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct allegro_channel*,int ) ;
 int VAR_2 ;
 int FUNC_2 (int,int ,int *,char*,char*) ;
 struct allegro_channel* FUNC_3 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_4(struct vb2_queue *VAR_3, unsigned int VAR_4)
{
 struct allegro_channel *VAR_5 = FUNC_3(VAR_3);
 struct allegro_dev *VAR_6 = VAR_5->dev;

 FUNC_2(2, VAR_2, &VAR_6->v4l2_dev,
   "%s: start streaming\n",
   FUNC_0(VAR_3->type) ? "output" : "capture");

 if (FUNC_0(VAR_3->type)) {
  VAR_5->osequence = 0;
  FUNC_1(VAR_5, VAR_0);
 } else if (VAR_3->type == VAR_1) {
  VAR_5->csequence = 0;
 }

 return 0;
}
