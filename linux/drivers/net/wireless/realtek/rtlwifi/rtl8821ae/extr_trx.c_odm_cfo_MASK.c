
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int s8 ;


 int FUNC_0 (int) ;

__attribute__((used)) static u16 FUNC_1(s8 VAR_0)
{
 int VAR_1;

 if (VAR_0 < 0) {
  VAR_1 = 0 - VAR_0;
  VAR_1 = (VAR_1 << 1) + (VAR_1 >> 1);

  VAR_1 = VAR_1 | FUNC_0(12);
 } else {
  VAR_1 = VAR_0;
  VAR_1 = (VAR_1 << 1) + (VAR_1 >> 1);
 }
 return VAR_1;
}
