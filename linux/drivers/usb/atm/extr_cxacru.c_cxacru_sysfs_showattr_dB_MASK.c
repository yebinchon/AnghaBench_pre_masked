
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int s16 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,int ,char*,int,int) ;

__attribute__((used)) static ssize_t FUNC_2(s16 VAR_1, char *VAR_2)
{
 if (FUNC_0(VAR_1 >= 0)) {
  return FUNC_1(VAR_2, VAR_0, "%u.%02u\n",
     VAR_1 / 100, VAR_1 % 100);
 } else {
  VAR_1 = -VAR_1;
  return FUNC_1(VAR_2, VAR_0, "-%u.%02u\n",
     VAR_1 / 100, VAR_1 % 100);
 }
}
