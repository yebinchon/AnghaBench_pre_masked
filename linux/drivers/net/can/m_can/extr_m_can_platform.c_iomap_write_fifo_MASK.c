
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_can_plat_priv {scalar_t__ mram_base; } ;
struct m_can_classdev {struct m_can_plat_priv* device_data; } ;


 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct m_can_classdev *VAR_0, int VAR_1, int VAR_2)
{
 struct m_can_plat_priv *VAR_3 = VAR_0->device_data;

 FUNC_0(VAR_2, VAR_3->mram_base + VAR_1);

 return 0;
}
