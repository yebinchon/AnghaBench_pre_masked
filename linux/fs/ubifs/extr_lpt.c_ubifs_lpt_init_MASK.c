
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int dummy; } ;


 int FUNC_0 (struct ubifs_info*) ;
 int FUNC_1 (struct ubifs_info*) ;
 int FUNC_2 (struct ubifs_info*,int) ;

int FUNC_3(struct ubifs_info *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3;

 if (VAR_1) {
  VAR_3 = FUNC_0(VAR_0);
  if (VAR_3)
   goto out_err;
 }

 if (VAR_2) {
  VAR_3 = FUNC_1(VAR_0);
  if (VAR_3)
   goto out_err;
 }

 return 0;

out_err:
 if (VAR_2)
  FUNC_2(VAR_0, 1);
 if (VAR_1)
  FUNC_2(VAR_0, 0);
 return VAR_3;
}
