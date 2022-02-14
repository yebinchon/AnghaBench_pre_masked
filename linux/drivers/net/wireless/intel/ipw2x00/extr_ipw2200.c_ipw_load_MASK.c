
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char u8 ;
struct ipw_priv {int eeprom_delay; TYPE_2__* rxq; int status; TYPE_1__* ieee; } ;
struct ipw_fw {char* data; int fw_size; int ucode_size; int boot_size; } ;
struct firmware {scalar_t__ data; } ;
struct TYPE_6__ {int read; } ;
struct TYPE_5__ {int iw_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int VAR_3 ;
 int FUNC_1 (char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (char*) ;



 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (struct ipw_priv*) ;
 int FUNC_4 (struct ipw_priv*) ;
 int FUNC_5 (struct ipw_priv*,struct firmware const**,char*) ;
 int FUNC_6 (struct ipw_priv*,char*,size_t) ;
 int FUNC_7 (struct ipw_priv*,char*,size_t) ;
 int FUNC_8 (struct ipw_priv*,int ,int ,int) ;
 int FUNC_9 (struct ipw_priv*) ;
 int FUNC_10 (struct ipw_priv*,int ) ;
 int FUNC_11 (struct ipw_priv*) ;
 int FUNC_12 (struct ipw_priv*) ;
 TYPE_2__* FUNC_13 (struct ipw_priv*) ;
 int FUNC_14 (struct ipw_priv*,TYPE_2__*) ;
 int FUNC_15 (struct ipw_priv*) ;
 int FUNC_16 (struct ipw_priv*,TYPE_2__*) ;
 int FUNC_17 (struct ipw_priv*) ;
 int FUNC_18 (struct ipw_priv*) ;
 int FUNC_19 (struct ipw_priv*) ;
 int FUNC_20 (struct ipw_priv*,int ,int ) ;
 int FUNC_21 (struct ipw_priv*,scalar_t__,scalar_t__) ;
 size_t FUNC_22 (int ) ;
 int FUNC_23 (struct firmware const*) ;

__attribute__((used)) static int FUNC_24(struct ipw_priv *VAR_14)
{

 const struct firmware *VAR_15 = ((void*)0);

 struct ipw_fw *VAR_16;
 u8 *VAR_17, *VAR_18, *VAR_19;
 u8 *VAR_20 = ((void*)0);
 int VAR_21 = 0, VAR_22 = 3;

 switch (VAR_14->ieee->iw_mode) {
 case 130:
  VAR_20 = "ipw2200-ibss.fw";
  break;





 case 129:
  VAR_20 = "ipw2200-bss.fw";
  break;
 }

 if (!VAR_20) {
  VAR_21 = -VAR_0;
  goto error;
 }




  VAR_21 = FUNC_5(VAR_14, &VAR_15, VAR_20);
  if (VAR_21 < 0)
   goto error;




 VAR_16 = (void *)VAR_15->data;
 VAR_17 = &VAR_16->data[0];
 VAR_18 = &VAR_16->data[FUNC_22(VAR_16->boot_size)];
 VAR_19 = &VAR_16->data[FUNC_22(VAR_16->boot_size) +
      FUNC_22(VAR_16->ucode_size)];

 if (!VAR_14->rxq)
  VAR_14->rxq = FUNC_13(VAR_14);
 else
  FUNC_16(VAR_14, VAR_14->rxq);
 if (!VAR_14->rxq) {
  FUNC_1("Unable to initialize Rx queue\n");
  VAR_21 = -VAR_2;
  goto error;
 }

      retry:

 FUNC_20(VAR_14, VAR_7, ~VAR_6);
 VAR_14->status &= ~VAR_12;


 FUNC_20(VAR_14, VAR_8, VAR_6);

 FUNC_18(VAR_14);

 VAR_21 = FUNC_12(VAR_14);
 if (VAR_21 < 0) {
  FUNC_1("Unable to reset NIC\n");
  goto error;
 }

 FUNC_21(VAR_14, VAR_9,
   VAR_10 - VAR_9);


 VAR_21 = FUNC_6(VAR_14, VAR_17, FUNC_22(VAR_16->boot_size));
 if (VAR_21 < 0) {
  FUNC_1("Unable to load boot firmware: %d\n", VAR_21);
  goto error;
 }


 FUNC_17(VAR_14);


 VAR_21 = FUNC_8(VAR_14, VAR_8,
     VAR_4, 500);
 if (VAR_21 < 0) {
  FUNC_1("device failed to boot initial fw image\n");
  goto error;
 }
 FUNC_0("initial device response after %dms\n", VAR_21);


 FUNC_20(VAR_14, VAR_8, VAR_4);


 VAR_21 = FUNC_7(VAR_14, VAR_18, FUNC_22(VAR_16->ucode_size));
 if (VAR_21 < 0) {
  FUNC_1("Unable to load ucode: %d\n", VAR_21);
  goto error;
 }


 FUNC_18(VAR_14);


 VAR_21 = FUNC_6(VAR_14, VAR_19, FUNC_22(VAR_16->fw_size));
 if (VAR_21 < 0) {
  FUNC_1("Unable to load firmware: %d\n", VAR_21);
  goto error;
 }




 FUNC_20(VAR_14, VAR_3, 0);

 VAR_21 = FUNC_9(VAR_14);
 if (VAR_21 < 0) {
  FUNC_1("Unable to initialize queues\n");
  goto error;
 }


 FUNC_20(VAR_14, VAR_7, ~VAR_6);

 FUNC_20(VAR_14, VAR_8, VAR_6);


 FUNC_17(VAR_14);

 if (FUNC_10(VAR_14, VAR_8) & VAR_5) {
  if (VAR_22 > 0) {
   FUNC_2("Parity error.  Retrying init.\n");
   VAR_22--;
   goto retry;
  }

  FUNC_1("TODO: Handle parity error -- schedule restart?\n");
  VAR_21 = -VAR_1;
  goto error;
 }


 VAR_21 = FUNC_8(VAR_14, VAR_8,
     VAR_4, 500);
 if (VAR_21 < 0) {
  FUNC_1("device failed to start within 500ms\n");
  goto error;
 }
 FUNC_0("device response after %dms\n", VAR_21);


 FUNC_20(VAR_14, VAR_8, VAR_4);


 VAR_14->eeprom_delay = 1;
 FUNC_11(VAR_14);

 FUNC_3(VAR_14);


 FUNC_4(VAR_14);


 FUNC_15(VAR_14);

 FUNC_20(VAR_14, VAR_11, VAR_14->rxq->read);


 FUNC_20(VAR_14, VAR_8, VAR_6);


 FUNC_23(VAR_15);

 return 0;

      error:
 if (VAR_14->rxq) {
  FUNC_14(VAR_14, VAR_14->rxq);
  VAR_14->rxq = ((void*)0);
 }
 FUNC_19(VAR_14);
 FUNC_23(VAR_15);





 return VAR_21;
}
