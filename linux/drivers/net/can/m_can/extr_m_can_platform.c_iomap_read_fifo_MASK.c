
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct m_can_plat_priv {scalar_t__ mram_base; } ;
struct m_can_classdev {struct m_can_plat_priv* device_data; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_1(struct m_can_classdev *VAR_0, int VAR_1)
{
 struct m_can_plat_priv *VAR_2 = VAR_0->device_data;

 return FUNC_0(VAR_2->mram_base + VAR_1);
}
