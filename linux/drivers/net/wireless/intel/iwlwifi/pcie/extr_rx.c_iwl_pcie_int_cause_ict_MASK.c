
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_trans_pcie {size_t ict_index; scalar_t__* ict_tbl; } ;
struct iwl_trans {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_trans*,char*,size_t,int) ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,size_t,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static u32 FUNC_5(struct iwl_trans *VAR_1)
{
 struct iwl_trans_pcie *VAR_2 = FUNC_1(VAR_1);
 u32 VAR_3;
 u32 VAR_4 = 0;
 u32 VAR_5;

 FUNC_4(VAR_1->dev);




 VAR_5 = FUNC_2(VAR_2->ict_tbl[VAR_2->ict_index]);
 FUNC_3(VAR_1->dev, VAR_2->ict_index, VAR_5);
 if (!VAR_5)
  return 0;





 do {
  VAR_4 |= VAR_5;
  FUNC_0(VAR_1, "ICT index %d value 0x%08X\n",
    VAR_2->ict_index, VAR_5);
  VAR_2->ict_tbl[VAR_2->ict_index] = 0;
  VAR_2->ict_index =
   ((VAR_2->ict_index + 1) & (VAR_0 - 1));

  VAR_5 = FUNC_2(VAR_2->ict_tbl[VAR_2->ict_index]);
  FUNC_3(VAR_1->dev, VAR_2->ict_index,
        VAR_5);
 } while (VAR_5);


 if (VAR_4 == 0xffffffff)
  VAR_4 = 0;
 if (VAR_4 & 0xC0000)
  VAR_4 |= 0x8000;

 VAR_3 = (0xff & VAR_4) | ((0xff00 & VAR_4) << 16);
 return VAR_3;
}
