
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct spi_lp8841_rtc {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct spi_lp8841_rtc*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct spi_lp8841_rtc*,int) ;
 int FUNC_3 (struct spi_lp8841_rtc*,unsigned int) ;
 int FUNC_4 (unsigned int,unsigned int) ;

__attribute__((used)) static inline u32
FUNC_5(struct spi_lp8841_rtc *VAR_2,
  unsigned VAR_3, unsigned VAR_4, unsigned VAR_5,
  u32 VAR_6, u8 VAR_7)
{


 u32 VAR_8 = 32 - VAR_7;

 for (; FUNC_1(VAR_7); VAR_7--) {


  if ((VAR_5 & VAR_1) == 0)
   FUNC_2(VAR_2, (VAR_6 & 1));

  FUNC_4(VAR_3, VAR_3 + 1);


  VAR_6 >>= 1;
  if ((VAR_5 & VAR_0) == 0)
   VAR_6 |= (FUNC_0(VAR_2) << 31);

  FUNC_3(VAR_2, !VAR_4);
  FUNC_4(VAR_3, VAR_3 + 1);

  FUNC_3(VAR_2, VAR_4);
 }

 VAR_6 >>= VAR_8;
 return VAR_6;
}
