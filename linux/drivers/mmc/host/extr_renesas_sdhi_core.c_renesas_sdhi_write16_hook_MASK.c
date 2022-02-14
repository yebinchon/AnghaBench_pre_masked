
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tmio_mmc_host {TYPE_1__* pdata; } ;
struct TYPE_2__ {int flags; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tmio_mmc_host*,int ) ;

__attribute__((used)) static int FUNC_1(struct tmio_mmc_host *VAR_3, int VAR_4)
{
 u32 VAR_5 = VAR_2;

 switch (VAR_4) {
 case 134:
 case 131:
 case 129:
 case 132:
 case 133:
 case 130:
 case 136:
 case 128:
  if (VAR_3->pdata->flags & VAR_0)
   VAR_5 = VAR_1;

 case 135:
  return FUNC_0(VAR_3, VAR_5);
 }

 return 0;
}
