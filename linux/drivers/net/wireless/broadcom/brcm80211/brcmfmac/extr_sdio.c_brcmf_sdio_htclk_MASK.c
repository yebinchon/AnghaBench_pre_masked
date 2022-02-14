
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct brcmf_sdio {scalar_t__ clkstate; int sdiodev; int alp_only; scalar_t__ sr_enabled; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (int ,int ,int ,int*) ;
 unsigned long VAR_11 ;
 unsigned long FUNC_6 (int) ;
 scalar_t__ FUNC_7 (unsigned long,unsigned long) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static int FUNC_9(struct brcmf_sdio *VAR_12, bool VAR_13, bool VAR_14)
{
 int VAR_15;
 u8 VAR_16, VAR_17, VAR_18;
 unsigned long VAR_19;

 FUNC_2(VAR_10, "Enter\n");

 VAR_16 = 0;

 if (VAR_12->sr_enabled) {
  VAR_12->clkstate = (VAR_13 ? VAR_0 : VAR_2);
  return 0;
 }

 if (VAR_13) {

  VAR_17 =
      VAR_12->alp_only ? VAR_5 : VAR_9;

  FUNC_5(VAR_12->sdiodev, VAR_8,
       VAR_17, &VAR_15);
  if (VAR_15) {
   FUNC_3("HT Avail request error: %d\n", VAR_15);
   return -VAR_3;
  }


  VAR_16 = FUNC_4(VAR_12->sdiodev,
        VAR_8, &VAR_15);
  if (VAR_15) {
   FUNC_3("HT Avail read error: %d\n", VAR_15);
   return -VAR_3;
  }


  if (!FUNC_1(VAR_16, VAR_12->alp_only) && VAR_14) {

   VAR_18 = FUNC_4(VAR_12->sdiodev,
         VAR_7, &VAR_15);
   if (VAR_15) {
    FUNC_3("Devctl error setting CA: %d\n", VAR_15);
    return -VAR_3;
   }

   VAR_18 |= VAR_6;
   FUNC_5(VAR_12->sdiodev, VAR_7,
        VAR_18, &VAR_15);
   FUNC_2(VAR_10, "CLKCTL: set PENDING\n");
   VAR_12->clkstate = VAR_1;

   return 0;
  } else if (VAR_12->clkstate == VAR_1) {

   VAR_18 = FUNC_4(VAR_12->sdiodev,
         VAR_7, &VAR_15);
   VAR_18 &= ~VAR_6;
   FUNC_5(VAR_12->sdiodev, VAR_7,
        VAR_18, &VAR_15);
  }


  VAR_19 = VAR_11 +
     FUNC_6(VAR_4/1000);
  while (!FUNC_1(VAR_16, VAR_12->alp_only)) {
   VAR_16 = FUNC_4(VAR_12->sdiodev,
         VAR_8,
         &VAR_15);
   if (FUNC_7(VAR_11, VAR_19))
    break;
   else
    FUNC_8(5000, 10000);
  }
  if (VAR_15) {
   FUNC_3("HT Avail request error: %d\n", VAR_15);
   return -VAR_3;
  }
  if (!FUNC_1(VAR_16, VAR_12->alp_only)) {
   FUNC_3("HT Avail timeout (%d): clkctl 0x%02x\n",
      VAR_4, VAR_16);
   return -VAR_3;
  }


  VAR_12->clkstate = VAR_0;
  FUNC_2(VAR_10, "CLKCTL: turned ON\n");
 } else {
  VAR_17 = 0;

  if (VAR_12->clkstate == VAR_1) {

   VAR_18 = FUNC_4(VAR_12->sdiodev,
         VAR_7, &VAR_15);
   VAR_18 &= ~VAR_6;
   FUNC_5(VAR_12->sdiodev, VAR_7,
        VAR_18, &VAR_15);
  }

  VAR_12->clkstate = VAR_2;
  FUNC_5(VAR_12->sdiodev, VAR_8,
       VAR_17, &VAR_15);
  FUNC_2(VAR_10, "CLKCTL: turned OFF\n");
  if (VAR_15) {
   FUNC_3("Failed access turning clock off: %d\n",
      VAR_15);
   return -VAR_3;
  }
 }
 return 0;
}
