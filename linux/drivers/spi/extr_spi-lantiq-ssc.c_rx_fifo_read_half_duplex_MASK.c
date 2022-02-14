
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u32 ;
struct lantiq_ssc_spi {int rx_todo; int * rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (struct lantiq_ssc_spi*,int ) ;
 unsigned int FUNC_1 (struct lantiq_ssc_spi*) ;

__attribute__((used)) static void FUNC_2(struct lantiq_ssc_spi *VAR_4)
{
 u32 VAR_5, *VAR_6;
 u8 *VAR_7;
 unsigned int VAR_8, VAR_9;
 unsigned int VAR_10 = FUNC_1(VAR_4);
 while (VAR_10) {
  if (VAR_4->rx_todo < 4) {
   VAR_8 = (FUNC_0(VAR_4, VAR_1) &
    VAR_2) >> VAR_3;
   VAR_5 = FUNC_0(VAR_4, VAR_0);

   VAR_9 = (VAR_8 - 1) * 8;
   VAR_7 = VAR_4->rx;

   while (VAR_8) {
    *VAR_7++ = (VAR_5 >> VAR_9) & 0xFF;
    VAR_8--;
    VAR_9 -= 8;
    VAR_4->rx_todo--;
    VAR_4->rx++;
   }
  } else {
   VAR_5 = FUNC_0(VAR_4, VAR_0);
   VAR_6 = (u32 *) VAR_4->rx;

   *VAR_6++ = VAR_5;
   VAR_4->rx_todo -= 4;
   VAR_4->rx += 4;
  }
  VAR_10--;
 }
}
