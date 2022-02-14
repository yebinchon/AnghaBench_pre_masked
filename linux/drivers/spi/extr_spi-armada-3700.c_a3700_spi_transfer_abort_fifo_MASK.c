
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct a3700_spi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct a3700_spi*) ;
 int FUNC_1 (struct a3700_spi*,int ) ;
 int FUNC_2 (struct a3700_spi*,int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct a3700_spi *VAR_4)
{
 int VAR_5 = VAR_1;
 u32 VAR_6;

 VAR_6 = FUNC_1(VAR_4, VAR_0);
 VAR_6 |= VAR_3;
 FUNC_2(VAR_4, VAR_0, VAR_6);

 while (--VAR_5) {
  VAR_6 = FUNC_1(VAR_4, VAR_0);
  if (!(VAR_6 & VAR_2))
   break;
  FUNC_3(1);
 }

 FUNC_0(VAR_4);

 VAR_6 &= ~VAR_3;
 FUNC_2(VAR_4, VAR_0, VAR_6);
}
