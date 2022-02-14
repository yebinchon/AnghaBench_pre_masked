
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ahd_softc {int seltime; TYPE_1__* platform_data; } ;
struct ahd_platform_data {int dummy; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ahd_softc*) ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (int,int ) ;

int
FUNC_2(struct ahd_softc *VAR_4, void *VAR_5)
{
 VAR_4->platform_data =
     FUNC_1(sizeof(struct ahd_platform_data), VAR_2);
 if (VAR_4->platform_data == ((void*)0))
  return (VAR_1);
 VAR_4->platform_data->irq = VAR_0;
 FUNC_0(VAR_4);
 VAR_4->seltime = (VAR_3 & 0x3) << 4;
 return (0);
}
