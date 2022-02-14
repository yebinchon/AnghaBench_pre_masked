
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct synquacer_spi {int rx_words; int bpw; int* rx_buf; scalar_t__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__,int*,int) ;
 int FUNC_1 (scalar_t__,int*,int) ;
 int FUNC_2 (scalar_t__,int*,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct synquacer_spi *VAR_5)
{
 u32 VAR_6 = FUNC_4(VAR_5->regs + VAR_3);

 VAR_6 = (VAR_6 >> VAR_2) &
        VAR_1;
 VAR_6 = FUNC_3(VAR_6, VAR_5->rx_words);

 switch (VAR_5->bpw) {
 case 8: {
  u8 *VAR_7 = VAR_5->rx_buf;

  FUNC_2(VAR_5->regs + VAR_4,
       VAR_7, VAR_6);
  VAR_5->rx_buf = VAR_7 + VAR_6;
  break;
 }
 case 16: {
  u16 *VAR_8 = VAR_5->rx_buf;

  FUNC_0(VAR_5->regs + VAR_4,
        VAR_8, VAR_6);
  VAR_5->rx_buf = VAR_8 + VAR_6;
  break;
 }
 case 24:

 case 32: {
  u32 *VAR_9 = VAR_5->rx_buf;

  FUNC_1(VAR_5->regs + VAR_4,
        VAR_9, VAR_6);
  VAR_5->rx_buf = VAR_9 + VAR_6;
  break;
 }
 default:
  return -VAR_0;
 }

 VAR_5->rx_words -= VAR_6;
 return 0;
}
