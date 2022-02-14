
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
typedef scalar_t__ u32 ;
struct rdl_state_le {int bytes; int state; } ;
struct brcmf_usbdev_info {int dummy; } ;
typedef int state ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct brcmf_usbdev_info*,int ,struct rdl_state_le*,int) ;
 scalar_t__ FUNC_3 (struct brcmf_usbdev_info*,char*,unsigned int) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (unsigned int,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (char*,char*,unsigned int) ;

__attribute__((used)) static int
FUNC_8(struct brcmf_usbdev_info *VAR_10, u8 *VAR_11, int VAR_12)
{
 unsigned int VAR_13, VAR_14, VAR_15;
 char *VAR_16 = ((void*)0), *VAR_17;
 struct rdl_state_le VAR_18;
 u32 VAR_19, VAR_20;
 int VAR_21 = 0;

 FUNC_0(VAR_9, "Enter, fw %p, len %d\n", VAR_11, VAR_12);

 VAR_16 = FUNC_5(VAR_8, VAR_7);
 if (VAR_16 == ((void*)0)) {
  VAR_21 = -VAR_6;
  goto fail;
 }


 FUNC_2(VAR_10, VAR_3, &VAR_18, sizeof(VAR_18));

 VAR_19 = FUNC_6(VAR_18.state);
 VAR_20 = FUNC_6(VAR_18.bytes);


 if (VAR_19 != VAR_4) {
  FUNC_1("Failed to DL_START\n");
  VAR_21 = -VAR_5;
  goto fail;
 }
 VAR_14 = 0;
 VAR_17 = VAR_11;
 VAR_15 = VAR_12;


 while (VAR_20 != VAR_15) {


  if ((VAR_20 == VAR_14) && (VAR_20 != VAR_15)) {
   if ((VAR_15-VAR_14) < VAR_8)
    VAR_13 = VAR_15-VAR_14;
   else
    VAR_13 = VAR_8;





   if (!(VAR_13 % 64))
    VAR_13 -= 4;


   FUNC_7(VAR_16, VAR_17, VAR_13);
   if (FUNC_3(VAR_10, VAR_16,
         VAR_13)) {
    FUNC_1("send_bulk failed\n");
    VAR_21 = -VAR_5;
    goto fail;
   }

   VAR_17 += VAR_13;
   VAR_14 += VAR_13;
  }
  VAR_21 = FUNC_2(VAR_10, VAR_2, &VAR_18,
           sizeof(VAR_18));
  if (VAR_21) {
   FUNC_1("DL_GETSTATE Failed\n");
   goto fail;
  }

  VAR_19 = FUNC_6(VAR_18.state);
  VAR_20 = FUNC_6(VAR_18.bytes);


  if (VAR_19 == VAR_1 || VAR_19 == VAR_0) {
   FUNC_1("Bad Hdr or Bad CRC state %d\n",
      VAR_19);
   VAR_21 = -VAR_5;
   goto fail;
  }
 }

fail:
 FUNC_4(VAR_16);
 FUNC_0(VAR_9, "Exit, err=%d\n", VAR_21);
 return VAR_21;
}
