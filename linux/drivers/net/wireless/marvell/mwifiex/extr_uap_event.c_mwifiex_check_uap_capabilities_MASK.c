
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sk_buff {int len; int * data; } ;
struct mwifiex_private {int wmm_enabled; int ap_11n_enabled; int ap_11ac_enabled; int adapter; } ;
struct TYPE_3__ {int type; int len; } ;
struct mwifiex_ie_types_data {TYPE_1__ header; } ;
struct TYPE_4__ {int element_id; int len; } ;
struct ieee_types_wmm_parameter {int qos_info_bitmap; TYPE_2__ vend_hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,char*,int) ;
 int FUNC_2 (int ,int ,char*,int *,int) ;
 int FUNC_3 (struct mwifiex_private*) ;
 int FUNC_4 (struct mwifiex_private*,struct ieee_types_wmm_parameter*) ;
 int FUNC_5 (struct sk_buff*,int ) ;
 int FUNC_6 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_7(struct mwifiex_private *VAR_4,
       struct sk_buff *VAR_5)
{
 int VAR_6;
 u8 *VAR_7;
 u16 VAR_8;
 struct mwifiex_ie_types_data *VAR_9;
 struct ieee_types_wmm_parameter *VAR_10 = ((void*)0);
 int VAR_11 = VAR_2;

 VAR_4->wmm_enabled = 0;
 FUNC_5(VAR_5, VAR_3);
 VAR_6 = VAR_5->len;
 VAR_7 = VAR_5->data;

 FUNC_2(VAR_4->adapter, VAR_1, "uap capabilities:",
    VAR_5->data, VAR_5->len);

 FUNC_6(VAR_5, VAR_3);

 while ((VAR_6 >= sizeof(VAR_9->header))) {
  VAR_9 = (struct mwifiex_ie_types_data *)VAR_7;
  VAR_8 = FUNC_0(VAR_9->header.len);

  if (VAR_6 < VAR_8 + sizeof(VAR_9->header))
   break;

  switch (FUNC_0(VAR_9->header.type)) {
  case 130:
   VAR_4->ap_11n_enabled = 1;
   break;

  case 128:
   VAR_4->ap_11ac_enabled = 1;
   break;

  case 129:



   VAR_10 = (void *)(VAR_7 + 2);
   VAR_10->vend_hdr.len = (u8)VAR_8;
   VAR_10->vend_hdr.element_id =
      129;
   FUNC_1(VAR_4->adapter, VAR_0,
        "info: check uap capabilities:\t"
        "wmm parameter set count: %d\n",
        VAR_10->qos_info_bitmap & VAR_11);

   FUNC_3(VAR_4);
   VAR_4->wmm_enabled = 1;
   FUNC_4(VAR_4, VAR_10);
   break;

  default:
   break;
  }

  VAR_7 += (VAR_8 + sizeof(VAR_9->header));
  VAR_6 -= (VAR_8 + sizeof(VAR_9->header));
 }

 return 0;
}
