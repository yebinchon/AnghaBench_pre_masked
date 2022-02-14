
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ctrl {int id; int val; int name; struct camif_vp* priv; } ;
struct camif_vp {int state; int vflip; int hflip; int id; struct camif_dev* camif; } ;
struct camif_dev {int slock; } ;


 int VAR_0 ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct v4l2_ctrl *VAR_1)
{
 struct camif_vp *VAR_2 = VAR_1->priv;
 struct camif_dev *VAR_3 = VAR_2->camif;
 unsigned long VAR_4;

 FUNC_0("[vp%d] ctrl: %s, value: %d\n", VAR_2->id,
   VAR_1->name, VAR_1->val);

 FUNC_1(&VAR_3->slock, VAR_4);

 switch (VAR_1->id) {
 case 129:
  VAR_2->hflip = VAR_1->val;
  break;

 case 128:
  VAR_2->vflip = VAR_1->val;
  break;
 }

 VAR_2->state |= VAR_0;
 FUNC_2(&VAR_3->slock, VAR_4);
 return 0;
}
