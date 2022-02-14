
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bus_type {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (char const*,char*,int*) ;

__attribute__((used)) static ssize_t FUNC_2(struct bus_type *VAR_5,
     const char *VAR_6, size_t VAR_7)
{
 int VAR_8;

 if (FUNC_1(VAR_6, "%d\n", &VAR_8) != 1 || VAR_8 < 5 || VAR_8 > 120)
  return -VAR_0;
 VAR_2 = VAR_8;
 FUNC_0(&VAR_3, VAR_4 + VAR_2 * VAR_1);
 return VAR_7;
}
