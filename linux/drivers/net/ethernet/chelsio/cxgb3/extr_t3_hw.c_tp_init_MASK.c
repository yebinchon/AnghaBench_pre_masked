
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tp_params {int dummy; } ;
struct TYPE_3__ {int cclk; } ;
struct TYPE_4__ {TYPE_1__ vpd; } ;
struct adapter {TYPE_2__ params; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct adapter*,int,int ) ;
 int FUNC_3 (struct adapter*,int ,int ,int ,int,int) ;
 int FUNC_4 (struct adapter*,int ,int ) ;
 int FUNC_5 (struct adapter*,struct tp_params const*) ;
 int FUNC_6 (struct adapter*,int) ;

__attribute__((used)) static int FUNC_7(struct adapter *VAR_3, const struct tp_params *VAR_4)
{
 int VAR_5 = 0;

 FUNC_5(VAR_3, VAR_4);
 FUNC_2(VAR_3, 3, 0);

 if (FUNC_1(VAR_3)) {
  FUNC_6(VAR_3, VAR_3->params.vpd.cclk * 1000);
  FUNC_4(VAR_3, VAR_0, VAR_1);
  VAR_5 = FUNC_3(VAR_3, VAR_0, VAR_1,
           0, 1000, 5);
  if (VAR_5)
   FUNC_0(VAR_3, "TP initialization timed out\n");
 }

 if (!VAR_5)
  FUNC_4(VAR_3, VAR_0, VAR_2);
 return VAR_5;
}
