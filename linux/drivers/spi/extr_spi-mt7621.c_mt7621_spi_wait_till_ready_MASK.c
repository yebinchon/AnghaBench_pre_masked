
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt7621_spi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (struct mt7621_spi*,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline int FUNC_3(struct mt7621_spi *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  u32 VAR_6;

  VAR_6 = FUNC_1(VAR_4, VAR_1);
  if ((VAR_6 & VAR_3) == 0)
   return 0;
  FUNC_0();
  FUNC_2(1);
 }

 return -VAR_0;
}
