
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mac_driver {TYPE_1__* mac_cb; } ;
struct TYPE_2__ {scalar_t__ mac_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (void*,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_1, u8 VAR_2)
{
 struct mac_driver *VAR_3 = VAR_1;

 if (VAR_3->mac_cb->mac_type == VAR_0)
  FUNC_0(VAR_1, VAR_2);
}
