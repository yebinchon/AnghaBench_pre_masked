
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u8 ;
struct qed_dev {int dummy; } ;
struct qed_common_ops {int (* dbg_all_data ) (struct qed_dev*,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct qed_dev*,int *) ;

int
FUNC_1(struct qed_dev *VAR_1, const struct qed_common_ops *VAR_2,
     u8 **VAR_3, uint32_t *VAR_4)
{
 if (!*VAR_3)
  return -VAR_0;

 return VAR_2->dbg_all_data(VAR_1, *VAR_3);
}
