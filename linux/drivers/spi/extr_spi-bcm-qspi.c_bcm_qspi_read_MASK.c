
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcm_qspi {scalar_t__* base; int big_endian; } ;
typedef enum base_type { ____Placeholder_base_type } base_type ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_1(struct bcm_qspi *VAR_0, enum base_type VAR_1,
    unsigned int VAR_2)
{
 return FUNC_0(VAR_0->big_endian, VAR_0->base[VAR_1] + VAR_2);
}
