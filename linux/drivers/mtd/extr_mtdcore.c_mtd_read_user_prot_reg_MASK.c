
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct mtd_info {int (* _read_user_prot_reg ) (struct mtd_info*,int ,size_t,size_t*,int *) ;} ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct mtd_info*,int ,size_t,size_t*,int *) ;

int FUNC_1(struct mtd_info *VAR_1, loff_t VAR_2, size_t VAR_3,
      size_t *VAR_4, u_char *VAR_5)
{
 *VAR_4 = 0;
 if (!VAR_1->_read_user_prot_reg)
  return -VAR_0;
 if (!VAR_3)
  return 0;
 return VAR_1->_read_user_prot_reg(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
