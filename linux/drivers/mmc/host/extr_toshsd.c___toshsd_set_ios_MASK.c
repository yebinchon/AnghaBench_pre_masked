
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct toshsd_host {scalar_t__ ioaddr; int pdev; } ;
struct mmc_ios {int clock; int power_mode; int bus_width; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int) ;
 struct toshsd_host* FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct mmc_host *VAR_16, struct mmc_ios *VAR_17)
{
 struct toshsd_host *VAR_18 = FUNC_3(VAR_16);

 if (VAR_17->clock) {
  u16 VAR_19;
  int VAR_20 = 1;

  while (VAR_17->clock < VAR_0 / VAR_20)
   VAR_20 *= 2;

  VAR_19 = VAR_20 >> 2;

  if (VAR_20 == 1) {
   FUNC_4(VAR_18->pdev, VAR_9,
           VAR_10);
   VAR_19 |= VAR_1;
  } else
   FUNC_4(VAR_18->pdev, VAR_9, 0);

  VAR_19 |= VAR_2;
  FUNC_1(VAR_19, VAR_18->ioaddr + VAR_3);

  FUNC_2(10);
 } else
  FUNC_1(0, VAR_18->ioaddr + VAR_3);

 switch (VAR_17->power_mode) {
 case 130:
  FUNC_4(VAR_18->pdev, VAR_11,
     VAR_14);
  FUNC_2(1);
  break;
 case 128:
  break;
 case 129:
  FUNC_4(VAR_18->pdev, VAR_11,
     VAR_13);
  FUNC_4(VAR_18->pdev, VAR_12,
     VAR_15);
  FUNC_2(20);
  break;
 }

 switch (VAR_17->bus_width) {
 case 132:
  FUNC_1(VAR_8 | FUNC_0(14)
    | VAR_5
    | VAR_6,
    VAR_18->ioaddr + VAR_4);
  break;
 case 131:
  FUNC_1(VAR_8 | FUNC_0(14)
    | VAR_5
    | VAR_7,
    VAR_18->ioaddr + VAR_4);
  break;
 }
}
