
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct device {int dummy; } ;
struct ahc_softc {TYPE_1__* platform_data; } ;
struct TYPE_2__ {scalar_t__ host; } ;


 int VAR_0 ;
 int FUNC_0 (struct ahc_softc*) ;
 int FUNC_1 (struct ahc_softc*,int ) ;
 int FUNC_2 (struct ahc_softc*,int *) ;
 int FUNC_3 (struct ahc_softc*,int *) ;
 struct ahc_softc* FUNC_4 (struct device*) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int
FUNC_6(struct device *VAR_1)
{
 struct ahc_softc *VAR_2 = FUNC_4(VAR_1);
 u_long VAR_3;

 if (VAR_2->platform_data && VAR_2->platform_data->host)
   FUNC_5(VAR_2->platform_data->host);

 FUNC_2(VAR_2, &VAR_3);
 FUNC_1(VAR_2, VAR_0);
 FUNC_3(VAR_2, &VAR_3);

 FUNC_0(VAR_2);
 return 0;
}
