
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipr_ioa_cfg {TYPE_1__* bus_attr; } ;
struct TYPE_2__ {int bus; int max_xfer_rate; int bus_width; scalar_t__ qas_enabled; } ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 size_t VAR_4 ;

__attribute__((used)) static void FUNC_1(struct ipr_ioa_cfg *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_5->bus_attr[VAR_6].bus = VAR_6;
  VAR_5->bus_attr[VAR_6].qas_enabled = 0;
  VAR_5->bus_attr[VAR_6].bus_width = VAR_0;
  if (VAR_4 < FUNC_0(VAR_3))
   VAR_5->bus_attr[VAR_6].max_xfer_rate = VAR_3[VAR_4];
  else
   VAR_5->bus_attr[VAR_6].max_xfer_rate = VAR_2;
 }
}
