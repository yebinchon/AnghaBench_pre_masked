
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int idm_base; } ;
struct bgmac {TYPE_1__ plat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bgmac*,int ) ;

__attribute__((used)) static bool FUNC_1(struct bgmac *VAR_4)
{
 if (!VAR_4->plat.idm_base)
  return 1;

 if ((FUNC_0(VAR_4, VAR_0) & VAR_3) != VAR_3)
  return 0;
 if (FUNC_0(VAR_4, VAR_1) & VAR_2)
  return 0;
 return 1;
}
