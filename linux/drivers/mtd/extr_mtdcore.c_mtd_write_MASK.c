
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int u8 ;
struct mtd_oob_ops {size_t len; size_t retlen; int * datbuf; } ;
struct mtd_info {int dummy; } ;
typedef int loff_t ;


 int FUNC_0 (struct mtd_info*,int ,struct mtd_oob_ops*) ;

int FUNC_1(struct mtd_info *VAR_0, loff_t VAR_1, size_t VAR_2, size_t *VAR_3,
       const u_char *VAR_4)
{
 struct mtd_oob_ops VAR_5 = {
  .len = VAR_2,
  .datbuf = (u8 *)VAR_4,
 };
 int VAR_6;

 VAR_6 = FUNC_0(VAR_0, VAR_1, &VAR_5);
 *VAR_3 = VAR_5.retlen;

 return VAR_6;
}
