
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* pmk; int head; } ;
struct ks_wlan_private {TYPE_2__ pmklist; } ;
struct TYPE_3__ {int list; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct ks_wlan_private *VAR_1)
{
 int VAR_2;

 FUNC_1(&VAR_1->pmklist, 0, sizeof(VAR_1->pmklist));
 FUNC_0(&VAR_1->pmklist.head);
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_0(&VAR_1->pmklist.pmk[VAR_2].list);
}
