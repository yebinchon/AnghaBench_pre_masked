
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct iscsi_tpg_attrib {scalar_t__ netif_timeout; } ;
struct iscsi_portal_group {int tpgt; struct iscsi_tpg_attrib tpg_attrib; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,scalar_t__,int ) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;

int FUNC_2(
 struct iscsi_portal_group *VAR_3,
 u32 VAR_4)
{
 struct iscsi_tpg_attrib *VAR_5 = &VAR_3->tpg_attrib;

 if (VAR_4 > VAR_1) {
  FUNC_1("Requested Network Interface Timeout %u larger"
   " than maximum %u\n", VAR_4,
    VAR_1);
  return -VAR_0;
 } else if (VAR_4 < VAR_2) {
  FUNC_1("Requested Network Interface Timeout %u smaller"
   " than minimum %u\n", VAR_4,
    VAR_2);
  return -VAR_0;
 }

 VAR_5->netif_timeout = VAR_4;
 FUNC_0("Set Network Interface Timeout to %u for"
  " Target Portal Group %hu\n", VAR_5->netif_timeout, VAR_3->tpgt);

 return 0;
}
