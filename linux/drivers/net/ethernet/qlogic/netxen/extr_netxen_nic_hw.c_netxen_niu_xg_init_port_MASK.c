
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int revision_id; } ;
struct netxen_adapter {TYPE_1__ ahw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct netxen_adapter*,scalar_t__,int) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct netxen_adapter *VAR_2, int VAR_3)
{
 if (FUNC_1(VAR_2->ahw.revision_id)) {
  FUNC_0(VAR_2, VAR_1+(0x10000*VAR_3), 0x1447);
  FUNC_0(VAR_2, VAR_0+(0x10000*VAR_3), 0x5);
 }

 return 0;
}
