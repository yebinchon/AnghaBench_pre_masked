
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct esas2r_sas_nvram {int dummy; } ;
struct esas2r_inbound_list_source_entry {int dummy; } ;
struct esas2r_adapter {int dummy; } ;
struct atto_vda_ob_rsp {int dummy; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

u32 FUNC_1(struct esas2r_adapter *VAR_6)
{
 return sizeof(struct esas2r_sas_nvram)
        + FUNC_0(VAR_0, 8)
        + FUNC_0(sizeof(u32), 8)
        + 8
        + (VAR_4 * (u16)VAR_5)
        + FUNC_0((VAR_3 + VAR_2 + 1 +
   VAR_1) *
         sizeof(struct esas2r_inbound_list_source_entry),
         8)
        + FUNC_0((VAR_3 + VAR_2 + 1 +
   VAR_1) *
         sizeof(struct atto_vda_ob_rsp), 8)
        + 256;
}
