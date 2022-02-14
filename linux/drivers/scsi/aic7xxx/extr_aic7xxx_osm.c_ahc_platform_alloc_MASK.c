
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ahc_softc {int seltime; int seltime_b; int flags; TYPE_1__* platform_data; } ;
struct ahc_platform_data {int dummy; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ahc_softc*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_1 (int,int ) ;

int
FUNC_2(struct ahc_softc *VAR_6, void *VAR_7)
{

 VAR_6->platform_data =
     FUNC_1(sizeof(struct ahc_platform_data), VAR_3);
 if (VAR_6->platform_data == ((void*)0))
  return (VAR_2);
 VAR_6->platform_data->irq = VAR_1;
 FUNC_0(VAR_6);
 VAR_6->seltime = (VAR_5 & 0x3) << 4;
 VAR_6->seltime_b = (VAR_5 & 0x3) << 4;
 if (VAR_4 == 0)
  VAR_6->flags |= VAR_0;

 return (0);
}
