
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct spi_message {struct spi_device* spi; } ;
struct spi_master {int dummy; } ;
struct spi_device {scalar_t__ bits_per_word; scalar_t__ max_speed_hz; int mode; } ;
struct pic32_spi {scalar_t__ bits_per_word; scalar_t__ speed_hz; int mode; TYPE_1__* regs; } ;
struct TYPE_2__ {int ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pic32_spi*,scalar_t__) ;
 int FUNC_1 (struct pic32_spi*,scalar_t__) ;
 int FUNC_2 (int *) ;
 struct pic32_spi* FUNC_3 (struct spi_master*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct spi_master *VAR_5,
         struct spi_message *VAR_6)
{
 struct pic32_spi *VAR_7 = FUNC_3(VAR_5);
 struct spi_device *VAR_8 = VAR_6->spi;
 u32 VAR_9;


 if (VAR_7->bits_per_word != VAR_8->bits_per_word) {
  FUNC_1(VAR_7, VAR_8->bits_per_word);
  VAR_7->bits_per_word = VAR_8->bits_per_word;
 }


 if (VAR_7->speed_hz != VAR_8->max_speed_hz) {
  FUNC_0(VAR_7, VAR_8->max_speed_hz);
  VAR_7->speed_hz = VAR_8->max_speed_hz;
 }


 if (VAR_7->mode != VAR_8->mode) {
  VAR_9 = FUNC_2(&VAR_7->regs->ctrl);

  if (VAR_8->mode & VAR_4)
   VAR_9 |= VAR_1;
  else
   VAR_9 &= ~VAR_1;

  if (VAR_8->mode & VAR_3)
   VAR_9 &= ~VAR_0;
  else
   VAR_9 |= VAR_0;


  VAR_9 |= VAR_2;
  FUNC_4(VAR_9, &VAR_7->regs->ctrl);
  VAR_7->mode = VAR_8->mode;
 }

 return 0;
}
