
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vpd_params {int cclk; } ;
struct TYPE_2__ {struct vpd_params vpd; } ;
struct adapter {TYPE_1__ params; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct adapter*,int,int*,int*) ;

int FUNC_3(struct adapter *VAR_2)
{
 struct vpd_params *VAR_3 = &VAR_2->params.vpd;
 u32 VAR_4[7], VAR_5[7];
 int VAR_6;

 VAR_4[0] = (FUNC_0(VAR_0) |
       FUNC_1(VAR_1));
 VAR_6 = FUNC_2(VAR_2, 1, VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;
 VAR_3->cclk = VAR_5[0];

 return 0;
}
