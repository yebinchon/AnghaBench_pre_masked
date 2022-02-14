
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,int) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_1, u16 VAR_2,
          int VAR_3, u8 *VAR_4)
{
 FUNC_1(VAR_1);
 FUNC_2(VAR_1, VAR_0);
 FUNC_2(VAR_1, VAR_2 & 0xff);
 FUNC_2(VAR_1, (VAR_2 >> 8) & 0xff);
 while (VAR_3--)
  *VAR_4++ = FUNC_0(VAR_1);
}
