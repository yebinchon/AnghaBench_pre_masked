
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ipr_ioa_cfg {TYPE_1__* bus_attr; } ;
struct TYPE_2__ {scalar_t__ max_xfer_rate; int bus_width; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ipr_ioa_cfg*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct ipr_ioa_cfg *VAR_1)
{
 u32 VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2 = FUNC_0(VAR_1, VAR_3,
             VAR_1->bus_attr[VAR_3].bus_width);

  if (VAR_2 < VAR_1->bus_attr[VAR_3].max_xfer_rate)
   VAR_1->bus_attr[VAR_3].max_xfer_rate = VAR_2;
 }
}
