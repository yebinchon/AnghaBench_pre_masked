
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_trans_pcie {int irq_lock; } ;
struct iwl_trans {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct iwl_trans*,char*,int,int ) ;
 struct iwl_trans_pcie* FUNC_3 (struct iwl_trans*) ;
 int FUNC_4 (struct iwl_trans*,int ,int ,int ,int) ;
 int FUNC_5 (struct iwl_trans*,int ) ;
 int FUNC_6 (struct iwl_trans*,unsigned long*) ;
 int FUNC_7 (struct iwl_trans*,unsigned long*) ;
 int FUNC_8 (struct iwl_trans*,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct iwl_trans *VAR_2)
{
 struct iwl_trans_pcie *VAR_3 = FUNC_3(VAR_2);
 unsigned long VAR_4;
 int VAR_5, VAR_6;
 u32 VAR_7 = 0;

 FUNC_9(&VAR_3->irq_lock);

 if (!FUNC_6(VAR_2, &VAR_4))
  goto out;


 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  FUNC_8(VAR_2, FUNC_0(VAR_5), 0x0);
  VAR_7 |= FUNC_1(VAR_5);
 }


 VAR_6 = FUNC_4(VAR_2, VAR_1, VAR_7, VAR_7, 5000);
 if (VAR_6 < 0)
  FUNC_2(VAR_2,
   "Failing on timeout while stopping DMA channel %d [0x%08x]\n",
   VAR_5, FUNC_5(VAR_2, VAR_1));

 FUNC_7(VAR_2, &VAR_4);

out:
 FUNC_10(&VAR_3->irq_lock);
}
