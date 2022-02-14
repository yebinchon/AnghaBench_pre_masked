
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int options; } ;
struct sh_flctl {int flcmncr_base; int erase_ADRCNT; int rw_ADRCNT; TYPE_1__ chip; scalar_t__ page_size; } ;
struct mtd_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sh_flctl*) ;
 int FUNC_1 (struct sh_flctl*) ;
 int FUNC_2 (struct sh_flctl*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct sh_flctl* FUNC_3 (struct mtd_info*) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static void FUNC_5(struct mtd_info *VAR_10, uint32_t VAR_11, uint32_t VAR_12)
{
 struct sh_flctl *VAR_13 = FUNC_3(VAR_10);
 uint32_t VAR_14 = VAR_13->flcmncr_base & ~VAR_8;
 uint32_t VAR_15, VAR_16 = 0;


 if (VAR_13->page_size)
  VAR_14 |= VAR_9;
 else
  VAR_14 &= ~VAR_9;


 VAR_15 = VAR_3 | VAR_2;


 switch (VAR_11) {
 case 136:
  VAR_16 = VAR_13->erase_ADRCNT;
  VAR_15 |= VAR_4;
  break;
 case 134:
 case 132:
 case 130:
  VAR_16 = VAR_13->rw_ADRCNT;
  VAR_15 |= VAR_1;
  if (VAR_13->chip.options & VAR_6)
   VAR_14 |= VAR_8;
  break;
 case 129:

  VAR_15 &= ~VAR_2;
  break;
 case 135:
  VAR_16 = VAR_13->rw_ADRCNT;
  VAR_15 |= VAR_4 | VAR_1 | VAR_7;
  if (VAR_13->chip.options & VAR_6)
   VAR_14 |= VAR_8;
  break;
 case 133:
  VAR_14 &= ~VAR_9;
  VAR_15 |= VAR_1;
  VAR_16 = VAR_0;
  break;
 case 128:
 case 131:
  VAR_14 &= ~VAR_9;
  VAR_15 &= ~(VAR_2 | VAR_5);
  break;
 default:
  break;
 }


 VAR_15 |= VAR_16;


 FUNC_4(VAR_14, FUNC_2(VAR_13));
 FUNC_4(VAR_15, FUNC_1(VAR_13));
 FUNC_4(VAR_12, FUNC_0(VAR_13));
}
