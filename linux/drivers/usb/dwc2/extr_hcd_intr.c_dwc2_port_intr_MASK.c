
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int port_enable_change; int port_over_current_change; } ;
struct TYPE_6__ {TYPE_2__ b; } ;
struct TYPE_4__ {int dma_desc_enable; scalar_t__ dma_desc_fs_enable; } ;
struct dwc2_hsotg {int new_connection; TYPE_3__ flags; int dev; TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct dwc2_hsotg*) ;
 int FUNC_2 (struct dwc2_hsotg*,int,int*) ;
 int FUNC_3 (struct dwc2_hsotg*,int ) ;
 int FUNC_4 (struct dwc2_hsotg*,int,int ) ;

__attribute__((used)) static void FUNC_5(struct dwc2_hsotg *VAR_7)
{
 u32 VAR_8;
 u32 VAR_9;

 FUNC_0(VAR_7->dev, "--Port Interrupt--\n");

 VAR_8 = FUNC_3(VAR_7, VAR_2);
 VAR_9 = VAR_8;





 VAR_9 &= ~(VAR_4 | VAR_3 | VAR_5 |
     VAR_6);





 if (VAR_8 & VAR_3) {
  FUNC_4(VAR_7, VAR_9 | VAR_3, VAR_2);

  FUNC_0(VAR_7->dev,
    "--Port Interrupt HPRT0=0x%08x Port Connect Detected--\n",
    VAR_8);
  FUNC_1(VAR_7);





 }





 if (VAR_8 & VAR_5) {
  FUNC_4(VAR_7, VAR_9 | VAR_5, VAR_2);
  FUNC_0(VAR_7->dev,
    "  --Port Interrupt HPRT0=0x%08x Port Enable Changed (now %d)--\n",
    VAR_8, !!(VAR_8 & VAR_4));
  if (VAR_8 & VAR_4) {
   VAR_7->new_connection = 1;
   FUNC_2(VAR_7, VAR_8, &VAR_9);
  } else {
   VAR_7->flags.b.port_enable_change = 1;
   if (VAR_7->params.dma_desc_fs_enable) {
    u32 VAR_10;

    VAR_7->params.dma_desc_enable = 0;
    VAR_7->new_connection = 0;
    VAR_10 = FUNC_3(VAR_7, VAR_0);
    VAR_10 &= ~VAR_1;
    FUNC_4(VAR_7, VAR_10, VAR_0);
   }
  }
 }


 if (VAR_8 & VAR_6) {
  FUNC_4(VAR_7, VAR_9 | VAR_6,
       VAR_2);
  FUNC_0(VAR_7->dev,
    "  --Port Interrupt HPRT0=0x%08x Port Overcurrent Changed--\n",
    VAR_8);
  VAR_7->flags.b.port_over_current_change = 1;
 }
}
