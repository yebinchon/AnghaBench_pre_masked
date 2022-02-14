
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct dev_params {void* tprev; void* fwrev; } ;
struct TYPE_2__ {struct dev_params dev; } ;
struct adapter {TYPE_1__ params; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct adapter*,int,void**,void**) ;

int FUNC_3(struct adapter *VAR_3)
{
 struct dev_params *VAR_4 = &VAR_3->params.dev;
 u32 VAR_5[7], VAR_6[7];
 int VAR_7;

 VAR_5[0] = (FUNC_0(VAR_0) |
       FUNC_1(VAR_1));
 VAR_5[1] = (FUNC_0(VAR_0) |
       FUNC_1(VAR_2));
 VAR_7 = FUNC_2(VAR_3, 2, VAR_5, VAR_6);
 if (VAR_7)
  return VAR_7;
 VAR_4->fwrev = VAR_6[0];
 VAR_4->tprev = VAR_6[1];

 return 0;
}
