
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int watchdog_work; int last_update; } ;
struct zd_mac {TYPE_1__ beacon; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (struct zd_mac*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(struct zd_mac *VAR_3)
{
 FUNC_0(FUNC_2(VAR_3), "\n");

 VAR_3->beacon.last_update = VAR_1;
 FUNC_1(VAR_2, &VAR_3->beacon.watchdog_work,
      VAR_0);
}
