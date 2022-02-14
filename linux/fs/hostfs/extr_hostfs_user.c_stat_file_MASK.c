
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat64 {int dummy; } ;
struct hostfs_stat {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,struct stat64*) ;
 scalar_t__ FUNC_1 (char const*,struct stat64*) ;
 int FUNC_2 (struct stat64*,struct hostfs_stat*) ;

int FUNC_3(const char *VAR_1, struct hostfs_stat *VAR_2, int VAR_3)
{
 struct stat64 VAR_4;

 if (VAR_3 >= 0) {
  if (FUNC_0(VAR_3, &VAR_4) < 0)
   return -VAR_0;
 } else if (FUNC_1(VAR_1, &VAR_4) < 0) {
  return -VAR_0;
 }
 FUNC_2(&VAR_4, VAR_2);
 return 0;
}
