
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;



__attribute__((used)) static unsigned long FUNC_0(unsigned long VAR_0, u16 VAR_1,
  u16 VAR_2, u16 VAR_3, u16 VAR_4, bool VAR_5)
{
 unsigned int VAR_6, VAR_7;






 if (VAR_1 > 3 * VAR_3)
  VAR_6 = 4;
 else if (VAR_1 > 2 * VAR_3)
  VAR_6 = 3;
 else if (VAR_1 > VAR_3)
  VAR_6 = 2;
 else
  VAR_6 = 1;
 if (VAR_2 > VAR_4)
  VAR_7 = 2;
 else
  VAR_7 = 1;

 return VAR_0 * VAR_7 * VAR_6;
}
