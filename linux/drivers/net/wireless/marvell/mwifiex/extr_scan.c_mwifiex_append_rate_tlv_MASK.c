
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct mwifiex_scan_cmd_config {int tlv_buf_len; scalar_t__ tlv_buf; } ;
struct mwifiex_private {int adapter; scalar_t__ scan_request; } ;
struct TYPE_2__ {void* len; void* type; } ;
struct mwifiex_ie_types_rates_param_set {int rates; TYPE_1__ header; } ;
typedef int rates ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ,int ,char*,int) ;
 int FUNC_4 (struct mwifiex_private*,int *,int ) ;
 int FUNC_5 (struct mwifiex_private*,int *) ;

__attribute__((used)) static int
FUNC_6(struct mwifiex_private *VAR_3,
   struct mwifiex_scan_cmd_config *VAR_4,
   u8 VAR_5)
{
 struct mwifiex_ie_types_rates_param_set *VAR_6;
 u8 VAR_7[VAR_1], *VAR_8;
 u32 VAR_9;

 FUNC_2(VAR_7, 0, sizeof(VAR_7));

 VAR_8 = (u8 *)VAR_4->tlv_buf + VAR_4->tlv_buf_len;

 if (VAR_3->scan_request)
  VAR_9 = FUNC_4(VAR_3, VAR_7,
            VAR_5);
 else
  VAR_9 = FUNC_5(VAR_3, VAR_7);

 FUNC_3(VAR_3->adapter, VAR_0,
      "info: SCAN_CMD: Rates size = %d\n",
  VAR_9);
 VAR_6 = (struct mwifiex_ie_types_rates_param_set *)VAR_8;
 VAR_6->header.type = FUNC_0(VAR_2);
 VAR_6->header.len = FUNC_0((u16) VAR_9);
 FUNC_1(VAR_6->rates, VAR_7, VAR_9);
 VAR_4->tlv_buf_len += sizeof(VAR_6->header) + VAR_9;

 return VAR_9;
}
