
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_scan_dwell {int extended; int fragmented; int passive; int active; } ;
struct iwl_mvm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct iwl_mvm *VAR_4,
        struct iwl_scan_dwell *VAR_5)
{
 VAR_5->active = VAR_0;
 VAR_5->passive = VAR_3;
 VAR_5->fragmented = VAR_2;
 VAR_5->extended = VAR_1;
}
