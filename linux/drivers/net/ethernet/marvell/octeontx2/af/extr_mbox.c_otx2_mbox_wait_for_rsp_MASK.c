
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct otx2_mbox_dev {scalar_t__ num_msgs; scalar_t__ msgs_acked; } ;
struct otx2_mbox {struct otx2_mbox_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

int FUNC_1(struct otx2_mbox *VAR_2, int VAR_3)
{
 struct otx2_mbox_dev *VAR_4 = &VAR_2->dev[VAR_3];
 int VAR_5 = 0, VAR_6 = 1;

 while (VAR_4->num_msgs != VAR_4->msgs_acked) {
  FUNC_0(VAR_6);
  VAR_5 += VAR_6;
  if (VAR_5 >= VAR_1)
   return -VAR_0;
 }
 return 0;
}
