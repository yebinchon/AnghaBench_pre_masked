
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int u32 ;
struct qla_hw_data {scalar_t__ nx_pcibase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static int
FUNC_2(struct qla_hw_data *VAR_2, uint32_t VAR_3, u32 VAR_4, uint8_t VAR_5)
{
 uint32_t VAR_6, VAR_7 = 0;

 FUNC_1(VAR_1 + VAR_2->nx_pcibase, VAR_3 & 0xFFFF0000);


 FUNC_0(VAR_1 + VAR_2->nx_pcibase);
 VAR_6 = (VAR_3 & 0x0000FFFF);

 if (VAR_5)
  FUNC_1(VAR_6 + VAR_0 + VAR_2->nx_pcibase,
         VAR_4);
 else
  VAR_7 = FUNC_0(VAR_6 + VAR_0 +
        VAR_2->nx_pcibase);

 return VAR_7;
}
