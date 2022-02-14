
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct altera_tse_private {int mac_dev; } ;


 int FUNC_0 (int,int ,scalar_t__) ;
 int VAR_0 ;
 struct altera_tse_private* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1)
{
 struct altera_tse_private *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < 64; VAR_3++)
  FUNC_0(1, VAR_2->mac_dev, FUNC_2(VAR_0) + VAR_3 * 4);
}
