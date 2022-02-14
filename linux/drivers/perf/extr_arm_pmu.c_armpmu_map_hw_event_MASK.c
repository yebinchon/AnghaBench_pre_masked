
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static int
FUNC_0(const unsigned (*VAR_4)[VAR_3], u64 VAR_5)
{
 int VAR_6;

 if (VAR_5 >= VAR_3)
  return -VAR_0;

 if (!VAR_4)
  return -VAR_1;

 VAR_6 = (*VAR_4)[VAR_5];
 return VAR_6 == VAR_2 ? -VAR_1 : VAR_6;
}
