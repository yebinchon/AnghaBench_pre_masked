
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int ubi; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct ubifs_info const*,char*,int,int) ;

int FUNC_3(const struct ubifs_info *VAR_0, int VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0->ubi, VAR_1);
 if (VAR_2 < 0) {
  FUNC_2(VAR_0, "ubi_is_mapped failed for LEB %d, error %d",
     VAR_1, VAR_2);
  FUNC_0();
 }
 return VAR_2;
}
