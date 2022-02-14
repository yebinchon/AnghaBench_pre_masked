
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct m_can_classdev {TYPE_1__* mcfg; } ;
struct TYPE_2__ {int off; int num; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct m_can_classdev*,int,int) ;

void FUNC_1(struct m_can_classdev *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;




 VAR_6 = VAR_3->mcfg[VAR_0].off;
 VAR_4 = VAR_3->mcfg[VAR_1].off +
  VAR_3->mcfg[VAR_1].num * VAR_2;

 for (VAR_5 = VAR_6; VAR_5 < VAR_4; VAR_5 += 4)
  FUNC_0(VAR_3, VAR_5, 0x0);
}
