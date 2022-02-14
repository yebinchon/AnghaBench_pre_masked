
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_trans_pcie {int ucode_write_complete; int ucode_write_waitq; } ;
struct iwl_trans {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwl_trans*,char*) ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 int FUNC_2 (struct iwl_trans*,int ,int ,int ) ;
 int FUNC_3 (struct iwl_trans*,unsigned long*) ;
 int FUNC_4 (struct iwl_trans*) ;
 int FUNC_5 (struct iwl_trans*,unsigned long*) ;
 int FUNC_6 (int ,int,int) ;

__attribute__((used)) static int FUNC_7(struct iwl_trans *VAR_3,
     u32 VAR_4, dma_addr_t VAR_5,
     u32 VAR_6)
{
 struct iwl_trans_pcie *VAR_7 = FUNC_1(VAR_3);
 unsigned long VAR_8;
 int VAR_9;

 VAR_7->ucode_write_complete = 0;

 if (!FUNC_3(VAR_3, &VAR_8))
  return -VAR_0;

 FUNC_2(VAR_3, VAR_4, VAR_5,
     VAR_6);
 FUNC_5(VAR_3, &VAR_8);

 VAR_9 = FUNC_6(VAR_7->ucode_write_waitq,
     VAR_7->ucode_write_complete, 5 * VAR_2);
 if (!VAR_9) {
  FUNC_0(VAR_3, "Failed to load firmware chunk!\n");
  FUNC_4(VAR_3);
  return -VAR_1;
 }

 return 0;
}
