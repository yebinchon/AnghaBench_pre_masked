
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int rx_length_errors; int rx_errors; int rx_frame_errors; int rx_crc_errors; } ;
struct fza_private {TYPE_2__ stats; TYPE_1__* regs; } ;
struct TYPE_3__ {int control_a; } ;


 int const VAR_0 ;
 int const VAR_1 ;


 int const VAR_2 ;
 int VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int const VAR_7 ;
 int const VAR_8 ;
 int const VAR_9 ;
 int const VAR_10 ;



 int const VAR_11 ;


 int const VAR_12 ;
 int const VAR_13 ;
 int const VAR_14 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static inline int FUNC_3(struct fza_private *VAR_15,
        const u32 VAR_16, const u8 VAR_17)
{
 int VAR_18, VAR_19, VAR_20;

 VAR_18 = VAR_16 & VAR_4;

 if (FUNC_1((VAR_16 & VAR_5) != 0)) {
  VAR_15->stats.rx_errors++;


  if ((VAR_16 & (VAR_6 | VAR_11 |
       VAR_8 | VAR_14)) ==
       (VAR_6 | 131 |
        VAR_7 | VAR_12)) {
   if (VAR_18 >= 8190)
    VAR_15->stats.rx_length_errors++;
   return 1;
  }
  if ((VAR_16 & (VAR_6 | VAR_11 |
       VAR_8 | VAR_14)) ==
       (VAR_6 | 131 |
        VAR_7 | VAR_13)) {

   FUNC_2(VAR_3, &VAR_15->regs->control_a);
   FUNC_0(&VAR_15->regs->control_a);
   return 1;
  }


  switch (VAR_16 & VAR_11) {
  case 129:
   if ((VAR_16 & VAR_6) != 0)
    VAR_15->stats.rx_crc_errors++;
   else if ((VAR_16 & VAR_10) == 0 ||
     (VAR_16 & VAR_9) != 0)
    VAR_15->stats.rx_frame_errors++;
   return 1;
  case 128:
  case 131:
  case 132:

   FUNC_2(VAR_3, &VAR_15->regs->control_a);
   FUNC_0(&VAR_15->regs->control_a);
   return 1;
  case 130:
   VAR_15->stats.rx_frame_errors++;
   return 1;
  default:
   return 1;
  }
 }


 switch (VAR_17 & VAR_2) {
 case 133:
  if ((VAR_17 & VAR_1) == VAR_0)
   VAR_19 = 37;
  else
   VAR_19 = 17;
  break;
 case 134:
  VAR_19 = 20;
  break;
 default:
  VAR_19 = 17;
  break;
 }
 VAR_20 = 4495;
 if (VAR_18 < VAR_19 || VAR_18 > VAR_20) {
  VAR_15->stats.rx_errors++;
  VAR_15->stats.rx_length_errors++;
  return 1;
 }

 return 0;
}
