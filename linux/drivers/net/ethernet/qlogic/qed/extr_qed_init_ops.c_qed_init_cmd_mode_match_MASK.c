
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct qed_hwfn {struct qed_dev* cdev; } ;
struct qed_dev {TYPE_1__* fw_data; } ;
struct TYPE_2__ {int* modes_tree_buf; } ;


 int FUNC_0 (int) ;



 int VAR_0 ;

__attribute__((used)) static u8 FUNC_1(struct qed_hwfn *VAR_1,
      u16 *VAR_2, int VAR_3)
{
 struct qed_dev *VAR_4 = VAR_1->cdev;
 const u8 *VAR_5;
 u8 VAR_6, VAR_7, VAR_8;

 VAR_5 = VAR_4->fw_data->modes_tree_buf;
 VAR_8 = VAR_5[(*VAR_2)++];
 switch (VAR_8) {
 case 129:
  return FUNC_1(VAR_1, VAR_2, VAR_3) ^ 1;
 case 128:
  VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3);
  VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3);
  return VAR_6 | VAR_7;
 case 130:
  VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3);
  VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3);
  return VAR_6 & VAR_7;
 default:
  VAR_8 -= VAR_0;
  return (VAR_3 & FUNC_0(VAR_8)) ? 1 : 0;
 }
}
