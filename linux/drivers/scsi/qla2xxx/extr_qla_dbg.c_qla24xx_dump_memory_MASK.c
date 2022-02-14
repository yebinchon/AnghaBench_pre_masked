
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct qla_hw_data {int fw_memory_size; int fw_dump_cap_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qla_hw_data*,int,void*,int,void**) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int
FUNC_2(struct qla_hw_data *VAR_3, uint32_t *VAR_4,
    uint32_t VAR_5, void **VAR_6)
{
 int VAR_7;


 VAR_7 = FUNC_0(VAR_3, 0x20000, VAR_4, VAR_5 / 4, VAR_6);
 if (VAR_7 != VAR_0)
  return VAR_7;

 FUNC_1(VAR_2, &VAR_3->fw_dump_cap_flags);


 VAR_7 = FUNC_0(VAR_3, 0x100000, *VAR_6,
     VAR_3->fw_memory_size - 0x100000 + 1, VAR_6);
 if (VAR_7 == VAR_0)
  FUNC_1(VAR_1, &VAR_3->fw_dump_cap_flags);

 return VAR_7;
}
