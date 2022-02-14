
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sky2_port {int dummy; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct sky2_port* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct sky2_port*,int ) ;
 scalar_t__ FUNC_4 (struct sky2_port*) ;

__attribute__((used)) static inline void FUNC_5(struct net_device *VAR_1, u16 VAR_2)
{
 struct sky2_port *VAR_3 = FUNC_0(VAR_1);

 if (FUNC_1(VAR_1)) {
  FUNC_3(VAR_3, VAR_2);


  if (FUNC_4(VAR_3) > VAR_0 + 4)
   FUNC_2(VAR_1);
 }
}
