
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct omap_musb_board_data {int interface_type; } ;
struct omap2430_glue {int status; int control_otghs; } ;
struct musb_hdrc_platform_data {struct omap_musb_board_data* board_data; } ;
struct musb {int mregs; struct device* controller; } ;
struct device {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (struct device*,char*) ;
 struct omap2430_glue* FUNC_2 (int ) ;
 struct musb_hdrc_platform_data* FUNC_3 (struct device*) ;
 unsigned long VAR_6 ;
 unsigned long FUNC_4 (int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct musb *VAR_7)
{
 u8 VAR_8;
 unsigned long VAR_9 = VAR_6 + FUNC_4(1000);
 struct device *VAR_10 = VAR_7->controller;
 struct omap2430_glue *VAR_11 = FUNC_2(VAR_10->parent);
 struct musb_hdrc_platform_data *VAR_12 = FUNC_3(VAR_10);
 struct omap_musb_board_data *VAR_13 = VAR_12->board_data;


 switch (VAR_11->status) {

 case 129:
  FUNC_7(VAR_11->control_otghs, VAR_5);
  if (VAR_13->interface_type != VAR_3)
   break;
  VAR_8 = FUNC_5(VAR_7->mregs, VAR_0);

  VAR_8 |= VAR_2;
  FUNC_6(VAR_7->mregs, VAR_0, VAR_8);
  while (FUNC_5(VAR_7->mregs, VAR_0) &
    VAR_1) {
   FUNC_0();

   if (FUNC_8(VAR_6, VAR_9)) {
    FUNC_1(VAR_10, "configured as A device timeout");
    break;
   }
  }
  break;

 case 128:
  FUNC_7(VAR_11->control_otghs, VAR_4);
  break;

 default:
  break;
 }
}
