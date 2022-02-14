
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct niu {int port; TYPE_1__* parent; } ;
struct TYPE_2__ {int port_phy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct niu *VAR_2)
{
 int VAR_3 = FUNC_2(VAR_2->parent->port_phy, VAR_2->port);
 u64 VAR_4;

 switch (VAR_3) {
 case 129:
  VAR_4 = VAR_0;
  break;

 case 128:
 default:
  VAR_4 = VAR_1;
  break;
 }
 FUNC_1(FUNC_0(VAR_2->port), VAR_4);
}
