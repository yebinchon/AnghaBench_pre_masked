
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ahc_softc {TYPE_1__* platform_data; } ;
struct TYPE_2__ {int qfrozen; int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ahc_softc*,unsigned long*) ;
 int FUNC_1 (struct ahc_softc*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct ahc_softc*,unsigned long*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct ahc_softc *VAR_6)
{
 unsigned long VAR_7;

 FUNC_0(VAR_6, &VAR_7);
 VAR_6->platform_data->qfrozen++;
 if (VAR_6->platform_data->qfrozen == 1) {
  FUNC_3(VAR_6->platform_data->host);


  FUNC_1(VAR_6, VAR_3, VAR_0,
     VAR_1, VAR_5,
     VAR_4, VAR_2);
 }
 FUNC_2(VAR_6, &VAR_7);
}
