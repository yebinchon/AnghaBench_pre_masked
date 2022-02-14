
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct sge_qbase_reg_field {size_t** pf_data_value; size_t** vf_data_value; int * reg_data; int reg_addr; } ;
struct adapter {int dummy; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (struct adapter*,int ) ;
 int FUNC_1 (struct adapter*,int ,size_t) ;

__attribute__((used)) static void FUNC_2(struct adapter *VAR_1,
           struct sge_qbase_reg_field *VAR_2,
           u32 VAR_3, bool VAR_4)
{
 u32 *VAR_5, VAR_6;

 if (VAR_4) {
  VAR_5 = VAR_2->pf_data_value[VAR_3];
 } else {
  VAR_5 = VAR_2->vf_data_value[VAR_3];



  VAR_3 += 8;
 }

 FUNC_1(VAR_1, VAR_2->reg_addr, VAR_3);
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++, VAR_5++)
  *VAR_5 = FUNC_0(VAR_1, VAR_2->reg_data[VAR_6]);
}
