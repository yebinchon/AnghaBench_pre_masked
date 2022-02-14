
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_xcomm {scalar_t__ current_speed; } ;
struct spi_transfer {int len; scalar_t__ speed_hz; } ;
struct spi_device {int mode; } ;


 unsigned int FUNC_0 (int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;

__attribute__((used)) static int FUNC_1(struct spi_xcomm *VAR_11,
 struct spi_device *VAR_12, struct spi_transfer *VAR_13, unsigned int *VAR_14)
{
 if (VAR_13->len > 62)
  return -VAR_0;

 if (VAR_13->speed_hz != VAR_11->current_speed) {
  unsigned int VAR_15;

  VAR_15 = FUNC_0(VAR_4, VAR_13->speed_hz);
  if (VAR_15 >= 64)
   *VAR_14 |= VAR_8;
  else if (VAR_15 >= 16)
   *VAR_14 |= VAR_6;
  else
   *VAR_14 |= VAR_7;

  VAR_11->current_speed = VAR_13->speed_hz;
 }

 if (VAR_12->mode & VAR_3)
  *VAR_14 |= VAR_10;
 else
  *VAR_14 &= ~VAR_10;

 if (VAR_12->mode & VAR_2)
  *VAR_14 &= ~VAR_9;
 else
  *VAR_14 |= VAR_9;

 if (VAR_12->mode & VAR_1)
  *VAR_14 |= VAR_5;
 else
  *VAR_14 &= ~VAR_5;

 return 0;
}
