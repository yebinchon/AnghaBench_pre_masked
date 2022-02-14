
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct hinic_cmdq {int db_base; } ;
typedef enum hinic_cmdq_type { ____Placeholder_hinic_cmdq_type } hinic_cmdq_type ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct hinic_cmdq *VAR_0,
   enum hinic_cmdq_type VAR_1, u16 VAR_2)
{
 u32 VAR_3;

 FUNC_1(&VAR_3, VAR_1, VAR_2);


 VAR_3 = FUNC_2(VAR_3);

 FUNC_3();

 FUNC_4(VAR_3, FUNC_0(VAR_0->db_base, VAR_2));
}
