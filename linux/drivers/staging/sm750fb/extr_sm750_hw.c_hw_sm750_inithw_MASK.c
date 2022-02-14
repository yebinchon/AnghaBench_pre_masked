
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct init_status {int chip_clk; scalar_t__ mem_clk; int master_clk; } ;
struct sm750_dev {int devid; int pnltype; int accel_off; scalar_t__ nocrt; struct init_status initParm; } ;
struct pci_dev {int dummy; } ;
struct initchip_param {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int FUNC_0 (struct initchip_param*) ;
 int FUNC_1 (struct sm750_dev*) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (char*) ;



 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int,int,int) ;

int FUNC_9(struct sm750_dev *VAR_13, struct pci_dev *VAR_14)
{
 struct init_status *VAR_15;

 VAR_15 = &VAR_13->initParm;
 if (VAR_15->chip_clk == 0)
  VAR_15->chip_clk = (FUNC_5() == VAR_7) ?
      VAR_0 :
      VAR_1;

 if (VAR_15->mem_clk == 0)
  VAR_15->mem_clk = VAR_15->chip_clk;
 if (VAR_15->master_clk == 0)
  VAR_15->master_clk = VAR_15->chip_clk / 3;

 FUNC_0((struct initchip_param *)&VAR_13->initParm);

 if (VAR_13->devid == 0x718) {
  FUNC_3(VAR_8,
         FUNC_2(VAR_8) | VAR_12);
 }

 if (FUNC_5() != VAR_7) {
  unsigned int VAR_16;

  if (VAR_13->nocrt) {
   FUNC_3(VAR_2,
          FUNC_2(VAR_2) | VAR_3);

   VAR_16 = FUNC_2(VAR_8) & ~VAR_9;
   VAR_16 |= VAR_10;
   FUNC_3(VAR_8, VAR_16);
  } else {
   FUNC_3(VAR_2,
          FUNC_2(VAR_2) & ~VAR_3);

   VAR_16 = FUNC_2(VAR_8) & ~VAR_9;
   VAR_16 |= VAR_11;
   FUNC_3(VAR_8, VAR_16);
  }

  VAR_16 = FUNC_2(VAR_4) &
   ~(VAR_6 |
     VAR_5);
  switch (VAR_13->pnltype) {
  case 130:
   break;
  case 129:
   VAR_16 |= VAR_5;
   break;
  case 128:
   VAR_16 |= VAR_6;
   break;
  }
  FUNC_3(VAR_4, VAR_16);
 } else {







  FUNC_6(0, 1);





  if (FUNC_7(0xec, 0x4a) == 0x95) {




   FUNC_4("yes,CH7301 DVI chip found\n");
   FUNC_8(0xec, 0x1d, 0x16);
   FUNC_8(0xec, 0x21, 0x9);
   FUNC_8(0xec, 0x49, 0xC0);
   FUNC_4("okay,CH7301 DVI chip setup done\n");
  }
 }


 if (!VAR_13->accel_off)
  FUNC_1(VAR_13);

 return 0;
}
