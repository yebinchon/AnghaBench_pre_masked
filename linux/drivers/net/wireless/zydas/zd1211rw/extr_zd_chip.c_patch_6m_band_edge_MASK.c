
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct zd_chip {int rf; int patch_6m_band_edge; int mutex; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(struct zd_chip *VAR_0, u8 VAR_1)
{
 FUNC_0(FUNC_1(&VAR_0->mutex));
 if (!VAR_0->patch_6m_band_edge)
  return 0;

 return FUNC_2(&VAR_0->rf, VAR_1);
}
