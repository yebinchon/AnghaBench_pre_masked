
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct mwifiex_private {int adapter; } ;
struct host_cmd_ds_802_11_snmp_mib {int value; int buf_size; int query_type; int oid; } ;
struct TYPE_2__ {struct host_cmd_ds_802_11_snmp_mib smib; } ;
struct host_cmd_ds_command {TYPE_1__ params; } ;




 scalar_t__ VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,char*,scalar_t__,...) ;

__attribute__((used)) static int FUNC_3(struct mwifiex_private *VAR_2,
           struct host_cmd_ds_command *VAR_3,
           u32 *VAR_4)
{
 struct host_cmd_ds_802_11_snmp_mib *VAR_5 = &VAR_3->params.smib;
 u16 VAR_6 = FUNC_1(VAR_5->oid);
 u16 VAR_7 = FUNC_1(VAR_5->query_type);
 u32 VAR_8;

 FUNC_2(VAR_2->adapter, VAR_1,
      "info: SNMP_RESP: oid value = %#x,\t"
      "query_type = %#x, buf size = %#x\n",
      VAR_6, VAR_7, FUNC_1(VAR_5->buf_size));
 if (VAR_7 == VAR_0) {
  VAR_8 = FUNC_0(VAR_5->value);
  if (VAR_4)
   *VAR_4 = VAR_8;
  switch (VAR_6) {
  case 130:
   FUNC_2(VAR_2->adapter, VAR_1,
        "info: SNMP_RESP: FragThsd =%u\n",
        VAR_8);
   break;
  case 129:
   FUNC_2(VAR_2->adapter, VAR_1,
        "info: SNMP_RESP: RTSThsd =%u\n",
        VAR_8);
   break;
  case 128:
   FUNC_2(VAR_2->adapter, VAR_1,
        "info: SNMP_RESP: TxRetryCount=%u\n",
        VAR_8);
   break;
  case 131:
   FUNC_2(VAR_2->adapter, VAR_1,
        "info: SNMP_RESP: DTIM period=%u\n",
        VAR_8);
  default:
   break;
  }
 }

 return 0;
}
