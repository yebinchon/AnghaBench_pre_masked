
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar9170 {int erp_mode; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,char*,int*) ;

__attribute__((used)) static ssize_t FUNC_1(struct ar9170 *VAR_3, const char *VAR_4,
       size_t VAR_5)
{
 int VAR_6, VAR_7;

 if (VAR_5 < 1)
  return -VAR_1;

 VAR_6 = FUNC_0(VAR_4, "%d", &VAR_7);
 if (VAR_6 != 1)
  return -VAR_1;

 if (!((VAR_7 > VAR_0) &&
       (VAR_7 < VAR_2)))
  return -VAR_1;

 VAR_3->erp_mode = VAR_7;
 return VAR_5;
}
