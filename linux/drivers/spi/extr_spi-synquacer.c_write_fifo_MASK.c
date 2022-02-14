
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
typedef int u32 ;
typedef int const u16 ;
struct synquacer_spi {int tx_words; int bpw; int const* tx_buf; scalar_t__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__,int const*,int) ;
 int FUNC_1 (scalar_t__,int const*,int) ;
 int FUNC_2 (scalar_t__,int const*,int) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct synquacer_spi *VAR_6)
{
 u32 VAR_7 = FUNC_4(VAR_6->regs + VAR_4);

 VAR_7 = (VAR_7 >> VAR_2) &
        VAR_1;
 VAR_7 = FUNC_3(VAR_3 - VAR_7,
      VAR_6->tx_words);

 switch (VAR_6->bpw) {
 case 8: {
  const u8 *VAR_8 = VAR_6->tx_buf;

  FUNC_2(VAR_6->regs + VAR_5,
        VAR_8, VAR_7);
  VAR_6->tx_buf = VAR_8 + VAR_7;
  break;
 }
 case 16: {
  const u16 *VAR_9 = VAR_6->tx_buf;

  FUNC_0(VAR_6->regs + VAR_5,
         VAR_9, VAR_7);
  VAR_6->tx_buf = VAR_9 + VAR_7;
  break;
 }
 case 24:

 case 32: {
  const u32 *VAR_10 = VAR_6->tx_buf;

  FUNC_1(VAR_6->regs + VAR_5,
         VAR_10, VAR_7);
  VAR_6->tx_buf = VAR_10 + VAR_7;
  break;
 }
 default:
  return -VAR_0;
 }

 VAR_6->tx_words -= VAR_7;
 return 0;
}
