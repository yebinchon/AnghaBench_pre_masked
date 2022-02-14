
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcb_common_cb {TYPE_1__* dsaf_dev; } ;
struct TYPE_2__ {int dsaf_ver; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct rcb_common_cb *VAR_1)
{
 bool VAR_2 = FUNC_0(VAR_1->dsaf_dev->dsaf_ver);

 if (!FUNC_1(VAR_1->dsaf_dev))
  return FUNC_2(VAR_2);
 else
  return VAR_0;
}
