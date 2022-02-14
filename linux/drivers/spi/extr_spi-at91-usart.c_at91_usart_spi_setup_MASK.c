
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct spi_device {unsigned int* controller_state; int mode; int chip_select; int bits_per_word; int dev; int controller; } ;
struct at91_usart_spi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int FUNC_0 (struct at91_usart_spi*,int ) ;
 int FUNC_1 (int *,char*,int ,int,int ,unsigned int) ;
 unsigned int* FUNC_2 (int,int ) ;
 struct at91_usart_spi* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct spi_device *VAR_9)
{
 struct at91_usart_spi *VAR_10 = FUNC_3(VAR_9->controller);
 u32 *VAR_11 = VAR_9->controller_state;
 unsigned int VAR_12 = FUNC_0(VAR_10, VAR_2);

 if (VAR_9->mode & VAR_4)
  VAR_12 |= VAR_7;
 else
  VAR_12 &= ~VAR_7;

 if (VAR_9->mode & VAR_3)
  VAR_12 |= VAR_6;
 else
  VAR_12 &= ~VAR_6;

 if (VAR_9->mode & VAR_5)
  VAR_12 |= VAR_8;
 else
  VAR_12 &= ~VAR_8;

 if (!VAR_11) {
  VAR_11 = FUNC_2(sizeof(*VAR_11), VAR_1);
  if (!VAR_11)
   return -VAR_0;

  VAR_9->controller_state = VAR_11;
 }

 *VAR_11 = VAR_12;

 FUNC_1(&VAR_9->dev,
  "setup: bpw %u mode 0x%x -> mr %d %08x\n",
  VAR_9->bits_per_word, VAR_9->mode, VAR_9->chip_select, VAR_12);

 return 0;
}
