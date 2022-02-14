
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct sbmac_softc {int sbm_duplex; int sbm_fc; scalar_t__ sbm_state; int sbm_maccfg; } ;
typedef enum sbmac_fc { ____Placeholder_sbmac_fc } sbmac_fc ;
typedef enum sbmac_duplex { ____Placeholder_sbmac_duplex } sbmac_duplex ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;






 scalar_t__ VAR_6 ;

__attribute__((used)) static int FUNC_2(struct sbmac_softc *VAR_7, enum sbmac_duplex VAR_8,
       enum sbmac_fc VAR_9)
{
 uint64_t VAR_10;





 VAR_7->sbm_duplex = VAR_8;
 VAR_7->sbm_fc = VAR_9;

 if (VAR_7->sbm_state == VAR_6)
  return 0;





 VAR_10 = FUNC_0(VAR_7->sbm_maccfg);





 VAR_10 &= ~(VAR_1 | VAR_0 | VAR_2);


 switch (VAR_8) {
 case 132:
  switch (VAR_9) {
  case 129:
   VAR_10 |= VAR_2 | VAR_3;
   break;

  case 130:
   VAR_10 |= VAR_2 | VAR_4;
   break;

  case 131:
   VAR_10 |= VAR_2 | VAR_5;
   break;

  case 128:
  default:
   return 0;
  }
  break;

 case 133:
  switch (VAR_9) {
  case 129:
   VAR_10 |= VAR_3;
   break;

  case 128:
   VAR_10 |= VAR_4;
   break;

  case 130:
  case 131:
  default:
   return 0;
  }
  break;
 default:
  return 0;
 }





 FUNC_1(VAR_10, VAR_7->sbm_maccfg);

 return 1;
}
