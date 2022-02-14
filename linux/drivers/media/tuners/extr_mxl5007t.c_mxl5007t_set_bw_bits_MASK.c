
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mxl5007t_state {int tab_rftune; } ;
typedef enum mxl5007t_bw_mhz { ____Placeholder_mxl5007t_bw_mhz } mxl5007t_bw_mhz ;


 int VAR_0 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct mxl5007t_state *VAR_1,
     enum mxl5007t_bw_mhz VAR_2)
{
 u8 VAR_3;

 switch (VAR_2) {
 case 130:
  VAR_3 = 0x15;

  break;
 case 129:
  VAR_3 = 0x2a;
  break;
 case 128:
  VAR_3 = 0x3f;
  break;
 default:
  FUNC_0(-VAR_0);
  return;
 }
 FUNC_1(VAR_1->tab_rftune, 0x0c, 0x3f, VAR_3);

 return;
}
