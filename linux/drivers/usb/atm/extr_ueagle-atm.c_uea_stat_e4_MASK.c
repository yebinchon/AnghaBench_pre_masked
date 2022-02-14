
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int state; int flags; int mflags; int usrate; int dsrate; int dsattenuation; int usattenuation; int dsmargin; int usmargin; } ;
struct TYPE_4__ {TYPE_1__ phy; } ;
struct uea_softc {TYPE_2__ stats; int sync_q; int * dsp_firm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct uea_softc*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_8 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct uea_softc*,int,int ,int,int,int*) ;
 int FUNC_8 (struct uea_softc*,int ,int ,int ,int *) ;
 int FUNC_9 (struct uea_softc*,int) ;
 int FUNC_10 (int ,char*,int) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct uea_softc *VAR_9)
{
 u32 VAR_10;
 u32 VAR_11[2];
 int VAR_12;

 FUNC_5(FUNC_0(VAR_9));
 VAR_10 = VAR_9->stats.phy.state;


 VAR_12 = FUNC_7(VAR_9, 1, VAR_4, 0, 0, &VAR_9->stats.phy.state);
 if (VAR_12 < 0)
  return VAR_12;

 switch (VAR_9->stats.phy.state) {
 case 0x0:
 case 0x1:
 case 0x3:
 case 0x4:
  FUNC_4(FUNC_0(VAR_9), "modem not yet "
      "synchronized\n");
  return 0;
 case 0x5:
 case 0x6:
 case 0x9:
 case 0xa:
  FUNC_4(FUNC_0(VAR_9), "modem initializing\n");
  return 0;
 case 0x2:
  FUNC_6(FUNC_0(VAR_9), "modem synchronization "
    "failed (may be try other cmv/dsp)\n");
  return -VAR_5;
 case 0x7:
  break;
 default:
  FUNC_10(FUNC_0(VAR_9), "unknown state: %x\n",
      VAR_9->stats.phy.state);
  return 0;
 }

 if (VAR_10 != 7) {
  FUNC_8(VAR_9, VAR_7, VAR_6, 0, ((void*)0));
  FUNC_6(FUNC_0(VAR_9), "modem operational\n");




  FUNC_3(VAR_9->dsp_firm);
  VAR_9->dsp_firm = ((void*)0);
 }




 FUNC_1(VAR_0);


 FUNC_11(&VAR_9->sync_q);






 VAR_12 = FUNC_7(VAR_9, 1, VAR_1, 0, 0, &VAR_9->stats.phy.flags);
 if (VAR_12 < 0)
  return VAR_12;
 VAR_9->stats.phy.mflags |= VAR_9->stats.phy.flags;




 if (VAR_9->stats.phy.flags) {
  FUNC_4(FUNC_0(VAR_9), "Stat flag = 0x%x\n",
         VAR_9->stats.phy.flags);
  if (VAR_9->stats.phy.flags & 1)
   return -VAR_5;
  if (VAR_9->stats.phy.flags & 0x4000)
   return -VAR_5;
  return 0;
 }


 VAR_12 = FUNC_7(VAR_9, 4, VAR_3, 0, 0, VAR_11);
 if (VAR_12 < 0)
  return VAR_12;
 VAR_10 = (VAR_11[0]) ? VAR_11[0] : VAR_11[1];
 VAR_9->stats.phy.usrate = VAR_10 / 1000;

 VAR_12 = FUNC_7(VAR_9, 4, VAR_3, 1, 0, VAR_11);
 if (VAR_12 < 0)
  return VAR_12;
 VAR_10 = (VAR_11[0]) ? VAR_11[0] : VAR_11[1];
 FUNC_9(VAR_9, VAR_10 / 1000);
 VAR_9->stats.phy.dsrate = VAR_10 / 1000;
 FUNC_2(VAR_8, VAR_9->stats.phy.dsrate * 1000 / 424);

 VAR_12 = FUNC_7(VAR_9, 1, VAR_2, 68, 1, &VAR_10);
 if (VAR_12 < 0)
  return VAR_12;
 VAR_9->stats.phy.dsattenuation = VAR_10 / 10;

 VAR_12 = FUNC_7(VAR_9, 1, VAR_2, 69, 1, &VAR_10);
 if (VAR_12 < 0)
  return VAR_12;
 VAR_9->stats.phy.usattenuation = VAR_10 / 10;

 VAR_12 = FUNC_7(VAR_9, 1, VAR_2, 68, 3, &VAR_10);
 if (VAR_12 < 0)
  return VAR_12;
 VAR_9->stats.phy.dsmargin = VAR_10 / 2;

 VAR_12 = FUNC_7(VAR_9, 1, VAR_2, 69, 3, &VAR_10);
 if (VAR_12 < 0)
  return VAR_12;
 VAR_9->stats.phy.usmargin = VAR_10 / 10;

 return 0;
}
