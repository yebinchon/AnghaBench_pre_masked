
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbmacdma {int dummy; } ;
struct sbmac_softc {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sbmac_softc*,struct sbmacdma*,int *) ;

__attribute__((used)) static void FUNC_1(struct sbmac_softc *VAR_1, struct sbmacdma *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0 - 1; VAR_3++) {
  if (FUNC_0(VAR_1, VAR_2, ((void*)0)) != 0)
   break;
 }
}
