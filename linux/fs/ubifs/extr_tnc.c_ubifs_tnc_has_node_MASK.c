
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_info {int tnc_mutex; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ubifs_info*,union ubifs_key*,int,int,int) ;
 int FUNC_2 (struct ubifs_info*,union ubifs_key*,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct ubifs_info *VAR_0, union ubifs_key *VAR_1, int VAR_2,
         int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;

 FUNC_3(&VAR_0->tnc_mutex);
 if (VAR_5) {
  VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
  if (VAR_6 < 0)
   goto out_unlock;
  if (VAR_6 == 1)

   VAR_6 = 0;
  else if (VAR_6 == 2)

   VAR_6 = 1;
  else
   FUNC_0(VAR_6 != 0);
 } else
  VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_3, VAR_4);

out_unlock:
 FUNC_4(&VAR_0->tnc_mutex);
 return VAR_6;
}
