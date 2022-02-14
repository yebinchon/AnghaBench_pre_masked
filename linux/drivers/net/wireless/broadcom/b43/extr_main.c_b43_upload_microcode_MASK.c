
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct wiphy {int hw_version; int fw_version; } ;
struct TYPE_16__ {TYPE_4__* data; } ;
struct TYPE_14__ {TYPE_2__* data; } ;
struct TYPE_18__ {int rev; int patch; scalar_t__ hdr_format; int opensource; scalar_t__ pcm_request_failed; TYPE_5__ pcm; TYPE_3__ ucode; } ;
struct b43_wldev {int qos_enabled; int hwcrypto_enabled; TYPE_8__* wl; TYPE_7__ fw; TYPE_1__* dev; } ;
struct b43_fw_header {int dummy; } ;
typedef int __be32 ;
struct TYPE_19__ {TYPE_6__* hw; } ;
struct TYPE_17__ {int queues; struct wiphy* wiphy; } ;
struct TYPE_15__ {size_t const size; scalar_t__ data; } ;
struct TYPE_13__ {size_t const size; scalar_t__ data; } ;
struct TYPE_12__ {int core_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct b43_wldev*) ;
 int FUNC_4 (struct b43_wldev*,int ,scalar_t__,scalar_t__) ;
 int FUNC_5 (TYPE_8__*,int) ;
 scalar_t__ FUNC_6 (struct b43_wldev*,int ) ;
 int FUNC_7 (struct b43_wldev*,int,int) ;
 int FUNC_8 (struct b43_wldev*,int ,int ) ;
 int FUNC_9 (struct b43_wldev*,int ,unsigned int,int ) ;
 int FUNC_10 (struct b43_wldev*,int ,int) ;
 int FUNC_11 (TYPE_8__*,char*) ;
 int FUNC_12 (TYPE_8__*,char*,...) ;
 int FUNC_13 (TYPE_8__*,char*) ;
 int FUNC_14 (int const) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int ,int,char*,int,int) ;
 int FUNC_17 (int) ;

__attribute__((used)) static int FUNC_18(struct b43_wldev *VAR_23)
{
 struct wiphy *VAR_24 = VAR_23->wl->hw->wiphy;
 const size_t VAR_25 = sizeof(struct b43_fw_header);
 const __be32 *VAR_26;
 unsigned int VAR_27, VAR_28;
 u16 VAR_29, VAR_30, VAR_31, VAR_32;
 u32 VAR_33, VAR_34;
 int VAR_35 = 0;


 VAR_34 = FUNC_6(VAR_23, VAR_10);
 FUNC_0(VAR_34 & VAR_8);
 VAR_34 |= VAR_7;
 FUNC_10(VAR_23, VAR_10, VAR_34);

 for (VAR_27 = 0; VAR_27 < 64; VAR_27++)
  FUNC_9(VAR_23, VAR_14, VAR_27, 0);
 for (VAR_27 = 0; VAR_27 < 4096; VAR_27 += 2)
  FUNC_9(VAR_23, VAR_15, VAR_27, 0);


 VAR_26 = (__be32 *) (VAR_23->fw.ucode.data->data + VAR_25);
 VAR_28 = (VAR_23->fw.ucode.data->size - VAR_25) / sizeof(__be32);
 FUNC_7(VAR_23, VAR_20 | VAR_12, 0x0000);
 for (VAR_27 = 0; VAR_27 < VAR_28; VAR_27++) {
  FUNC_10(VAR_23, VAR_11, FUNC_14(VAR_26[VAR_27]));
  FUNC_17(10);
 }

 if (VAR_23->fw.pcm.data) {

  VAR_26 = (__be32 *) (VAR_23->fw.pcm.data->data + VAR_25);
  VAR_28 = (VAR_23->fw.pcm.data->size - VAR_25) / sizeof(__be32);
  FUNC_7(VAR_23, VAR_13, 0x01EA);
  FUNC_10(VAR_23, VAR_11, 0x00004000);

  FUNC_7(VAR_23, VAR_13, 0x01EB);
  for (VAR_27 = 0; VAR_27 < VAR_28; VAR_27++) {
   FUNC_10(VAR_23, VAR_11, FUNC_14(VAR_26[VAR_27]));
   FUNC_17(10);
  }
 }

 FUNC_10(VAR_23, VAR_9, VAR_5);


 FUNC_4(VAR_23, VAR_10, ~VAR_7,
        VAR_8);


 VAR_27 = 0;
 while (1) {
  VAR_33 = FUNC_6(VAR_23, VAR_9);
  if (VAR_33 == VAR_6)
   break;
  VAR_27++;
  if (VAR_27 >= 20) {
   FUNC_11(VAR_23->wl, "Microcode not responding\n");
   FUNC_5(VAR_23->wl, 1);
   VAR_35 = -VAR_21;
   goto error;
  }
  FUNC_15(50);
 }
 FUNC_6(VAR_23, VAR_9);


 VAR_29 = FUNC_8(VAR_23, VAR_15, VAR_18);
 VAR_30 = FUNC_8(VAR_23, VAR_15, VAR_17);
 VAR_31 = FUNC_8(VAR_23, VAR_15, VAR_16);
 VAR_32 = FUNC_8(VAR_23, VAR_15, VAR_19);

 if (VAR_29 <= 0x128) {
  FUNC_11(VAR_23->wl, "YOUR FIRMWARE IS TOO OLD. Firmware from "
         "binary drivers older than version 4.x is unsupported. "
         "You must upgrade your firmware files.\n");
  FUNC_5(VAR_23->wl, 1);
  VAR_35 = -VAR_22;
  goto error;
 }
 VAR_23->fw.rev = VAR_29;
 VAR_23->fw.patch = VAR_30;
 if (VAR_23->fw.rev >= 598)
  VAR_23->fw.hdr_format = VAR_4;
 else if (VAR_23->fw.rev >= 410)
  VAR_23->fw.hdr_format = VAR_3;
 else
  VAR_23->fw.hdr_format = VAR_2;
 FUNC_2(VAR_23->fw.opensource != (VAR_31 == 0xFFFF));

 VAR_23->qos_enabled = VAR_23->wl->hw->queues > 1;

 VAR_23->hwcrypto_enabled = 1;

 if (VAR_23->fw.opensource) {
  u16 VAR_36;


  VAR_23->fw.patch = VAR_32;
  FUNC_12(VAR_23->wl, "Loading OpenSource firmware version %u.%u\n",
   VAR_23->fw.rev, VAR_23->fw.patch);

  VAR_36 = FUNC_3(VAR_23);
  if (!(VAR_36 & VAR_0) || VAR_23->fw.pcm_request_failed) {
   FUNC_12(VAR_23->wl, "Hardware crypto acceleration not supported by firmware\n");

   VAR_23->hwcrypto_enabled = 0;
  }

  FUNC_1(VAR_36 & VAR_1, "QoS in OpenFW not supported\n");
 } else {
  FUNC_12(VAR_23->wl, "Loading firmware version %u.%u "
   "(20%.2i-%.2i-%.2i %.2i:%.2i:%.2i)\n",
   VAR_29, VAR_30,
   (VAR_31 >> 12) & 0xF, (VAR_31 >> 8) & 0xF, VAR_31 & 0xFF,
   (VAR_32 >> 11) & 0x1F, (VAR_32 >> 5) & 0x3F, VAR_32 & 0x1F);
  if (VAR_23->fw.pcm_request_failed) {
   FUNC_13(VAR_23->wl, "No \"pcm5.fw\" firmware file found. "
    "Hardware accelerated cryptography is disabled.\n");
   FUNC_5(VAR_23->wl, 0);
  }
 }

 FUNC_16(VAR_24->fw_version, sizeof(VAR_24->fw_version), "%u.%u",
   VAR_23->fw.rev, VAR_23->fw.patch);
 VAR_24->hw_version = VAR_23->dev->core_id;

 if (VAR_23->fw.hdr_format == VAR_2) {


  FUNC_13(VAR_23->wl, "You are using an old firmware image. "
   "Support for old firmware will be removed soon "
   "(official deadline was July 2008).\n");
  FUNC_5(VAR_23->wl, 0);
 }

 return 0;

error:

 FUNC_4(VAR_23, VAR_10, ~VAR_8,
        VAR_7);

 return VAR_35;
}
