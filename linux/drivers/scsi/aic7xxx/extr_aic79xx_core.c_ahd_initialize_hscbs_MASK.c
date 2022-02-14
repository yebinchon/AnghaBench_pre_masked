
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int maxhscbs; } ;
struct ahd_softc {TYPE_1__ scb_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ahd_softc*,int ,int ) ;
 int FUNC_1 (struct ahd_softc*,int ,int ) ;
 int FUNC_2 (struct ahd_softc*,int) ;

__attribute__((used)) static void
FUNC_3(struct ahd_softc *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->scb_data.maxhscbs; VAR_4++) {
  FUNC_2(VAR_3, VAR_4);


  FUNC_0(VAR_3, VAR_0, 0);


  FUNC_1(VAR_3, VAR_2, VAR_1);
 }
}
