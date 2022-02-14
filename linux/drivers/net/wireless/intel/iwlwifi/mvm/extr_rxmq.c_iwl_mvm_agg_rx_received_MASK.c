
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct iwl_mvm_baid_data {unsigned long timeout; unsigned long last_rx; } ;
struct iwl_mvm {int * baid_map; } ;


 int FUNC_0 (struct iwl_mvm*,char*,size_t,int ) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 unsigned long VAR_0 ;
 struct iwl_mvm_baid_data* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (scalar_t__,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct iwl_mvm *VAR_1,
        u32 VAR_2, u8 VAR_3)
{
 unsigned long VAR_4 = VAR_0;
 unsigned long VAR_5;
 struct iwl_mvm_baid_data *VAR_6;

 FUNC_3();

 VAR_6 = FUNC_2(VAR_1->baid_map[VAR_3]);
 if (!VAR_6) {
  FUNC_0(VAR_1,
        "Got valid BAID but no baid allocated, bypass the re-ordering buffer. Baid %d reorder 0x%x\n",
         VAR_3, VAR_2);
  goto out;
 }

 if (!VAR_6->timeout)
  goto out;

 VAR_5 = VAR_6->timeout;






 if (FUNC_5(VAR_6->last_rx + FUNC_1(VAR_5), VAR_4))

  VAR_6->last_rx = VAR_4;

out:
 FUNC_4();
}
