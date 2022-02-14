
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t
FUNC_1(u32 *VAR_2, const char *VAR_3, size_t VAR_4)
{
 int VAR_5;
 unsigned long VAR_6;

 VAR_5 = FUNC_0(VAR_3, 10, &VAR_6);
 if (VAR_5 || VAR_6 > VAR_1)
  return -VAR_0;

 *VAR_2 = VAR_6;

 return VAR_4;
}
