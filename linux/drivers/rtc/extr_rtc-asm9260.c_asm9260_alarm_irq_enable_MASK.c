
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct asm9260_rtc_priv {scalar_t__ iobase; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct asm9260_rtc_priv* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2, unsigned int VAR_3)
{
 struct asm9260_rtc_priv *VAR_4 = FUNC_0(VAR_2);

 FUNC_1(VAR_3 ? 0 : VAR_0, VAR_4->iobase + VAR_1);
 return 0;
}
