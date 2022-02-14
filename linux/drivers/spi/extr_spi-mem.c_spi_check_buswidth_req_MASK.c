
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct spi_mem {TYPE_1__* spi; } ;
struct TYPE_2__ {int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_0(struct spi_mem *VAR_7, u8 VAR_8, bool VAR_9)
{
 u32 VAR_10 = VAR_7->spi->mode;

 switch (VAR_8) {
 case 1:
  return 0;

 case 2:
  if ((VAR_9 && (VAR_10 & (VAR_4 | VAR_6))) ||
      (!VAR_9 && (VAR_10 & (VAR_1 | VAR_3))))
   return 0;

  break;

 case 4:
  if ((VAR_9 && (VAR_10 & VAR_6)) ||
      (!VAR_9 && (VAR_10 & VAR_3)))
   return 0;

  break;

 case 8:
  if ((VAR_9 && (VAR_10 & VAR_5)) ||
      (!VAR_9 && (VAR_10 & VAR_2)))
   return 0;

  break;

 default:
  break;
 }

 return -VAR_0;
}
