
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct otx2_mbox_dev {scalar_t__ num_msgs; scalar_t__ msgs_acked; } ;
struct otx2_mbox {struct otx2_mbox_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (int,unsigned long) ;

int FUNC_2(struct otx2_mbox *VAR_3, int VAR_4)
{
 struct otx2_mbox_dev *VAR_5 = &VAR_3->dev[VAR_4];
 unsigned long VAR_6 = VAR_2 + 1 * VAR_1;

 while (!FUNC_1(VAR_2, VAR_6)) {
  if (VAR_5->num_msgs == VAR_5->msgs_acked)
   return 0;
  FUNC_0();
 }
 return -VAR_0;
}
