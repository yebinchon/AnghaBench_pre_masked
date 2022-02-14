
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct usbnet {int net; int data; } ;
struct sk_buff {scalar_t__ len; } ;
struct cdc_ncm_ctx {int mtx; } ;
struct cdc_mbim_state {int flags; struct cdc_ncm_ctx* ctx; } ;
typedef int gfp_t ;
typedef int __le32 ;
struct TYPE_4__ {int h_proto; } ;
struct TYPE_3__ {int h_vlan_encapsulated_proto; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int*) ;
 struct sk_buff* FUNC_1 (struct usbnet*,struct sk_buff*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 TYPE_2__* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct usbnet*,int ,int ,char*,int) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_6 ;
 TYPE_1__* FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (struct sk_buff*,int*) ;

__attribute__((used)) static struct sk_buff *FUNC_13(struct usbnet *VAR_7, struct sk_buff *VAR_8, gfp_t VAR_9)
{
 struct sk_buff *VAR_10;
 struct cdc_mbim_state *VAR_11 = (void *)&VAR_7->data;
 struct cdc_ncm_ctx *VAR_12 = VAR_11->ctx;
 __le32 VAR_13 = FUNC_2(VAR_4);
 u16 VAR_14 = 0;
 bool VAR_15;
 u8 *VAR_16;

 if (!VAR_12)
  goto error;

 if (VAR_8) {
  if (VAR_8->len <= VAR_0)
   goto error;







  FUNC_8(VAR_8);
  if (FUNC_12(VAR_8, &VAR_14) < 0 && VAR_8->len > VAR_5 &&
      FUNC_0(VAR_8, &VAR_14) == 0) {
   VAR_15 = FUNC_5(FUNC_11(VAR_8)->h_vlan_encapsulated_proto);
   FUNC_7(VAR_8, VAR_5);
  } else {
   VAR_15 = FUNC_5(FUNC_4(VAR_8)->h_proto);
   FUNC_7(VAR_8, VAR_0);
  }


  if (VAR_11->flags & VAR_1) {

   if (!VAR_14)
    goto error;

   if (VAR_14 == VAR_2)
    VAR_14 = 0;
  }
  switch (VAR_14 & 0x0f00) {
  case 0x0000:
   if (!VAR_15)
    goto error;
   VAR_16 = (u8 *)&VAR_13;
   VAR_16[3] = VAR_14;
   break;
  case 0x0100:
   if (VAR_15)
    goto error;
   VAR_13 = FUNC_2(VAR_3);
   VAR_16 = (u8 *)&VAR_13;
   VAR_16[3] = VAR_14;
   break;
  default:
   FUNC_6(VAR_7, VAR_6, VAR_7->net,
      "unsupported tci=0x%04x\n", VAR_14);
   goto error;
  }
 }

 FUNC_9(&VAR_12->mtx);
 VAR_10 = FUNC_1(VAR_7, VAR_8, VAR_13);
 FUNC_10(&VAR_12->mtx);
 return VAR_10;

error:
 if (VAR_8)
  FUNC_3(VAR_8);

 return ((void*)0);
}
