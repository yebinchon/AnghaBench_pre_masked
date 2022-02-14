
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct ahc_softc {TYPE_1__* platform_data; } ;
struct TYPE_2__ {scalar_t__ qfrozen; int host; } ;


 int FUNC_0 (struct ahc_softc*,int *) ;
 int FUNC_1 (struct ahc_softc*,int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct ahc_softc *VAR_0)
{
 u_long VAR_1;
 int VAR_2;

 VAR_2 = 0;
 FUNC_0(VAR_0, &VAR_1);
 if (VAR_0->platform_data->qfrozen > 0)
  VAR_0->platform_data->qfrozen--;
 if (VAR_0->platform_data->qfrozen == 0)
  VAR_2 = 1;
 FUNC_1(VAR_0, &VAR_1);






 if (VAR_2)
  FUNC_2(VAR_0->platform_data->host);
}
