
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int dummy; } ;


 int FUNC_0 (struct ubifs_info*,void*,int) ;
 int FUNC_1 (struct ubifs_info*,void*,int,int) ;
 int FUNC_2 (struct ubifs_info*,void*,int,int) ;

int FUNC_3(struct ubifs_info *VAR_0, void *VAR_1, int VAR_2,
       int VAR_3, int VAR_4)
{
 int VAR_5;

 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_4);

 if (VAR_3 > 0) {
  VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
  if (VAR_5)
   return VAR_5;
 }

 FUNC_0(VAR_0, VAR_1, VAR_2);

 return 0;
}
