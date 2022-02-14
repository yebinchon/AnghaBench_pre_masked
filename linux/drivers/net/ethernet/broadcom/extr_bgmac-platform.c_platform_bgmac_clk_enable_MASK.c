
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int idm_base; } ;
struct bgmac {TYPE_1__ plat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct bgmac*,int ) ;
 int FUNC_1 (struct bgmac*,int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct bgmac *VAR_7, u32 VAR_8)
{
 u32 VAR_9;

 if (!VAR_7->plat.idm_base)
  return;





 VAR_9 = FUNC_0(VAR_7, VAR_1);
 if (VAR_9) {
  FUNC_1(VAR_7, VAR_1, 0);
  FUNC_0(VAR_7, VAR_1);
  FUNC_2(1);
 }

 VAR_9 = FUNC_0(VAR_7, VAR_0);

 VAR_9 |= VAR_8 & ~(VAR_4 | VAR_2 | VAR_5 |
    VAR_3);
 VAR_9 |= VAR_6;
 FUNC_1(VAR_7, VAR_0, VAR_9);
 FUNC_0(VAR_7, VAR_0);
 FUNC_2(1);
}
