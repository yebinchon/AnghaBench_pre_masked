
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct port_dcb_info {int pfcen; int state; } ;
struct port_info {struct port_dcb_info dcb; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct port_info* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1, int VAR_2, u8 *VAR_3)
{
 struct port_info *VAR_4 = FUNC_1(VAR_1);
 struct port_dcb_info *VAR_5 = &VAR_4->dcb;

 if (!FUNC_0(VAR_5->state) ||
     VAR_2 >= VAR_0)
  *VAR_3 = 0;
 else
  *VAR_3 = (VAR_4->dcb.pfcen >> (7 - VAR_2)) & 1;
}
