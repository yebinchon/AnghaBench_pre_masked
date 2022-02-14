
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char u8 ;
struct brcmf_rev_info_le {int chiprev; int chipnum; int nvramrev; int chippkg; int anarev; int phyrev; int phytype; int bus; int ucoderev; int driverrev; int boardrev; int boardvendor; int boardid; int corerev; int radiorev; int deviceid; int vendorid; } ;
struct brcmf_rev_info {int chipname; scalar_t__ result; void* nvramrev; void* chippkg; void* anarev; void* phyrev; void* phytype; void* bus; void* ucoderev; void* driverrev; void* boardrev; void* boardvendor; void* boardid; void* corerev; void* radiorev; void* deviceid; void* vendorid; } ;
struct brcmf_pub {char* mac; char* clmver; int fwver; struct brcmf_rev_info revinfo; struct brcmf_bus* bus_if; TYPE_1__* wiphy; } ;
struct brcmf_if {char* mac_addr; struct brcmf_pub* drvr; } ;
struct brcmf_bus {void* chiprev; void* chip; } ;
typedef char s8 ;
typedef scalar_t__ s32 ;
typedef int revinfo ;
typedef int buf ;
struct TYPE_2__ {char* perm_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct brcmf_pub*,char*,...) ;
 scalar_t__ FUNC_1 (struct brcmf_if*) ;
 int FUNC_2 (struct brcmf_if*) ;
 int FUNC_3 (void*,void*,int ,int) ;
 int FUNC_4 (int ,char*,char*) ;
 scalar_t__ FUNC_5 (struct brcmf_if*,int ,struct brcmf_rev_info_le*,int) ;
 scalar_t__ FUNC_6 (struct brcmf_if*,int ,int ) ;
 scalar_t__ FUNC_7 (struct brcmf_if*,char*,char*,int) ;
 scalar_t__ FUNC_8 (struct brcmf_if*,char*,char*,int) ;
 scalar_t__ FUNC_9 (struct brcmf_if*,char*,int) ;
 int FUNC_10 (char*,int ,char*) ;
 void* FUNC_11 (int ) ;
 int FUNC_12 (char*,char*,int) ;
 int FUNC_13 (char*,int ,int) ;
 int FUNC_14 (char*,int ) ;
 int FUNC_15 (int ,char*,int) ;
 char* FUNC_16 (char*,char) ;
 int FUNC_17 (char*,char,char) ;
 int FUNC_18 (char**,char*) ;

int FUNC_19(struct brcmf_if *VAR_11)
{
 struct brcmf_pub *VAR_12 = VAR_11->drvr;
 s8 VAR_13[VAR_6];
 u8 VAR_14[VAR_3];
 struct brcmf_bus *VAR_15;
 struct brcmf_rev_info_le VAR_16;
 struct brcmf_rev_info *VAR_17;
 char *VAR_18;
 char *VAR_19;
 s32 VAR_20;


 VAR_20 = FUNC_7(VAR_11, "cur_etheraddr", VAR_11->mac_addr,
           sizeof(VAR_11->mac_addr));
 if (VAR_20 < 0) {
  FUNC_0(VAR_12, "Retrieving cur_etheraddr failed, %d\n", VAR_20);
  goto done;
 }
 FUNC_12(VAR_11->drvr->wiphy->perm_addr, VAR_11->drvr->mac, VAR_8);
 FUNC_12(VAR_11->drvr->mac, VAR_11->mac_addr, sizeof(VAR_11->drvr->mac));

 VAR_15 = VAR_11->drvr->bus_if;
 VAR_17 = &VAR_11->drvr->revinfo;

 VAR_20 = FUNC_5(VAR_11, VAR_0,
         &VAR_16, sizeof(VAR_16));
 if (VAR_20 < 0) {
  FUNC_0(VAR_12, "retrieving revision info failed, %d\n", VAR_20);
  FUNC_15(VAR_17->chipname, "UNKNOWN", sizeof(VAR_17->chipname));
 } else {
  VAR_17->vendorid = FUNC_11(VAR_16.vendorid);
  VAR_17->deviceid = FUNC_11(VAR_16.deviceid);
  VAR_17->radiorev = FUNC_11(VAR_16.radiorev);
  VAR_17->corerev = FUNC_11(VAR_16.corerev);
  VAR_17->boardid = FUNC_11(VAR_16.boardid);
  VAR_17->boardvendor = FUNC_11(VAR_16.boardvendor);
  VAR_17->boardrev = FUNC_11(VAR_16.boardrev);
  VAR_17->driverrev = FUNC_11(VAR_16.driverrev);
  VAR_17->ucoderev = FUNC_11(VAR_16.ucoderev);
  VAR_17->bus = FUNC_11(VAR_16.bus);
  VAR_17->phytype = FUNC_11(VAR_16.phytype);
  VAR_17->phyrev = FUNC_11(VAR_16.phyrev);
  VAR_17->anarev = FUNC_11(VAR_16.anarev);
  VAR_17->chippkg = FUNC_11(VAR_16.chippkg);
  VAR_17->nvramrev = FUNC_11(VAR_16.nvramrev);


  if (!VAR_15->chip) {
   VAR_15->chip = FUNC_11(VAR_16.chipnum);
   VAR_15->chiprev = FUNC_11(VAR_16.chiprev);
  }
 }
 VAR_17->result = VAR_20;

 if (VAR_15->chip)
  FUNC_3(VAR_15->chip, VAR_15->chiprev,
    VAR_17->chipname, sizeof(VAR_17->chipname));


 VAR_20 = FUNC_1(VAR_11);
 if (VAR_20 < 0) {
  FUNC_0(VAR_12, "download CLM blob file failed, %d\n", VAR_20);
  goto done;
 }


 FUNC_13(VAR_14, 0, sizeof(VAR_14));
 VAR_20 = FUNC_7(VAR_11, "ver", VAR_14, sizeof(VAR_14));
 if (VAR_20 < 0) {
  FUNC_0(VAR_12, "Retrieving version information failed, %d\n",
    VAR_20);
  goto done;
 }
 VAR_19 = (char *)VAR_14;
 FUNC_18(&VAR_19, "\n");


 FUNC_10("Firmware: %s %s\n", VAR_17->chipname, VAR_14);


 VAR_19 = FUNC_16(VAR_14, ' ') + 1;
 FUNC_15(VAR_11->drvr->fwver, VAR_19, sizeof(VAR_11->drvr->fwver));


 FUNC_13(VAR_14, 0, sizeof(VAR_14));
 VAR_20 = FUNC_7(VAR_11, "clmver", VAR_14, sizeof(VAR_14));
 if (VAR_20) {
  FUNC_4(VAR_10, "retrieving clmver failed, %d\n", VAR_20);
 } else {
  VAR_18 = (char *)VAR_14;

  FUNC_12(VAR_11->drvr->clmver, VAR_18, sizeof(VAR_11->drvr->clmver));




  FUNC_17(VAR_18, '\n', ' ');

  FUNC_4(VAR_9, "CLM version = %s\n", VAR_18);
 }


 VAR_20 = FUNC_9(VAR_11, "mpc", 1);
 if (VAR_20) {
  FUNC_0(VAR_12, "failed setting mpc\n");
  goto done;
 }

 FUNC_2(VAR_11);


 VAR_20 = FUNC_7(VAR_11, "event_msgs", VAR_13,
           VAR_6);
 if (VAR_20) {
  FUNC_0(VAR_12, "Get event_msgs error (%d)\n", VAR_20);
  goto done;
 }
 FUNC_14(VAR_13, VAR_7);
 VAR_20 = FUNC_8(VAR_11, "event_msgs", VAR_13,
           VAR_6);
 if (VAR_20) {
  FUNC_0(VAR_12, "Set event_msgs error (%d)\n", VAR_20);
  goto done;
 }


 VAR_20 = FUNC_6(VAR_11, VAR_1,
        VAR_4);
 if (VAR_20) {
  FUNC_0(VAR_12, "BRCMF_C_SET_SCAN_CHANNEL_TIME error (%d)\n",
    VAR_20);
  goto done;
 }


 VAR_20 = FUNC_6(VAR_11, VAR_2,
        VAR_5);
 if (VAR_20) {
  FUNC_0(VAR_12, "BRCMF_C_SET_SCAN_UNASSOC_TIME error (%d)\n",
    VAR_20);
  goto done;
 }


 (void)FUNC_9(VAR_11, "txbf", 1);
done:
 return VAR_20;
}
