
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_trans {int dummy; } ;
struct iwl_fw_error_dump_fw_mon {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_trans*,int ) ;
 int FUNC_1 (struct iwl_trans*,unsigned long*) ;
 int FUNC_2 (struct iwl_trans*,unsigned long*) ;
 int FUNC_3 (struct iwl_trans*,int ,int) ;

__attribute__((used)) static u32
FUNC_4(struct iwl_trans *VAR_2,
     struct iwl_fw_error_dump_fw_mon *VAR_3,
     u32 VAR_4)
{
 u32 VAR_5 = (VAR_4 >> 2);
 u32 *VAR_6 = (u32 *)VAR_3->data;
 unsigned long VAR_7;
 u32 VAR_8;

 if (!FUNC_1(VAR_2, &VAR_7))
  return 0;

 FUNC_3(VAR_2, VAR_0, 0x1);
 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
  VAR_6[VAR_8] = FUNC_0(VAR_2,
             VAR_1);
 FUNC_3(VAR_2, VAR_0, 0x0);

 FUNC_2(VAR_2, &VAR_7);

 return VAR_4;
}
