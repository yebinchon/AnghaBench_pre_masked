
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int error_event_table_tlv_status; scalar_t__ umac_error_event_table; } ;
struct iwl_trans {TYPE_1__ dbg; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(struct iwl_trans *VAR_1,
         u32 VAR_2)
{
 if (!(VAR_1->dbg.error_event_table_tlv_status &
       VAR_0) ||
     FUNC_0(VAR_1->dbg.umac_error_event_table !=
      VAR_2))
  VAR_1->dbg.umac_error_event_table = VAR_2;
}
