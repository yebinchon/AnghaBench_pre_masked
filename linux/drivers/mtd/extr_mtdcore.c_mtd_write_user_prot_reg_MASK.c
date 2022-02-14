
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct mtd_info {int (* _write_user_prot_reg ) (struct mtd_info*,int ,size_t,size_t*,int *) ;} ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mtd_info*,int ,size_t,size_t*,int *) ;

int FUNC_1(struct mtd_info *VAR_2, loff_t VAR_3, size_t VAR_4,
       size_t *VAR_5, u_char *VAR_6)
{
 int VAR_7;

 *VAR_5 = 0;
 if (!VAR_2->_write_user_prot_reg)
  return -VAR_1;
 if (!VAR_4)
  return 0;
 VAR_7 = VAR_2->_write_user_prot_reg(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_7)
  return VAR_7;





 return (*VAR_5) ? 0 : -VAR_0;
}
