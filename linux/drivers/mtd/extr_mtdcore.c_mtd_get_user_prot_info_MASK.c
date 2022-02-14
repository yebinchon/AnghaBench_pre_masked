
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct otp_info {int dummy; } ;
struct mtd_info {int (* _get_user_prot_info ) (struct mtd_info*,size_t,size_t*,struct otp_info*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct mtd_info*,size_t,size_t*,struct otp_info*) ;

int FUNC_1(struct mtd_info *VAR_1, size_t VAR_2, size_t *VAR_3,
      struct otp_info *VAR_4)
{
 if (!VAR_1->_get_user_prot_info)
  return -VAR_0;
 if (!VAR_2)
  return 0;
 return VAR_1->_get_user_prot_info(VAR_1, VAR_2, VAR_3, VAR_4);
}
