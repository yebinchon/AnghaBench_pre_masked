
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wd33c93_regs ;
typedef int uchar ;
struct WD33C93_hostdata {int clock_freq; int default_sx_per; scalar_t__ chip; scalar_t__ fast; void* microcode; int sx_table; int regs; } ;
struct Scsi_Host {unsigned long base; int this_id; scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int,int ,int ,int ) ;
 int FUNC_1 (int const) ;
 void* FUNC_2 (int const,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int const,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct Scsi_Host *VAR_22)
{
 struct WD33C93_hostdata *VAR_23 =
     (struct WD33C93_hostdata *) VAR_22->hostdata;
 const wd33c93_regs VAR_24 = VAR_23->regs;
 uchar VAR_25;
 FUNC_4(VAR_24, VAR_17, VAR_10 | VAR_11 |
        VAR_22->this_id | VAR_23->clock_freq);
 FUNC_4(VAR_24, VAR_16, VAR_3 | VAR_2 | VAR_4);
 FUNC_4(VAR_24, VAR_20,
        FUNC_0(VAR_23->default_sx_per / 4,
         VAR_9, 0, VAR_23->sx_table));
 FUNC_4(VAR_24, VAR_15, VAR_14);






 while (!(FUNC_1(VAR_24) & VAR_1))
  ;
 VAR_25 = FUNC_2(VAR_24, VAR_19);

 VAR_23->microcode = FUNC_2(VAR_24, VAR_13);
 if (VAR_25 == 0x00)
  VAR_23->chip = VAR_6;
 else if (VAR_25 == 0x01) {
  FUNC_4(VAR_24, VAR_18, 0xa5);
  VAR_25 = FUNC_2(VAR_24, VAR_18);
  if (VAR_25 == 0xa5) {
   VAR_23->chip = VAR_8;
   FUNC_4(VAR_24, VAR_18, 0);
  } else
   VAR_23->chip = VAR_7;
 } else
  VAR_23->chip = VAR_5;

 if (VAR_23->chip != VAR_8)
  VAR_23->fast = 0;

 FUNC_4(VAR_24, VAR_21, VAR_12);
 FUNC_4(VAR_24, VAR_16, VAR_3 | VAR_2 | VAR_4);
}
