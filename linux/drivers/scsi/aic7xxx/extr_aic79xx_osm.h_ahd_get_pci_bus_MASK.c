
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* ahd_dev_softc_t ;
struct TYPE_5__ {TYPE_1__* bus; } ;
struct TYPE_4__ {int number; } ;



__attribute__((used)) static inline int
FUNC_0(ahd_dev_softc_t VAR_0)
{
 return (VAR_0->bus->number);
}
