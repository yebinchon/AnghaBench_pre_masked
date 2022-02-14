
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;



__attribute__((used)) static u16 FUNC_0(u16 VAR_0)
{
 u16 VAR_1 = 0;

 while (VAR_0) {
  VAR_0 = VAR_0 & (VAR_0 - 1);
  VAR_1++;
 }

 return VAR_1;
}
