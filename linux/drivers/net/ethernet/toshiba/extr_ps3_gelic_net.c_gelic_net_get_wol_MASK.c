
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_wolinfo {int sopass; scalar_t__ supported; scalar_t__ wolopts; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 scalar_t__ FUNC_1 (int,int,int ) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1,
         struct ethtool_wolinfo *VAR_2)
{
 if (0 <= FUNC_1(2, 2, 0))
  VAR_2->supported = VAR_0;
 else
  VAR_2->supported = 0;

 VAR_2->wolopts = FUNC_2() ? VAR_2->supported : 0;
 FUNC_0(&VAR_2->sopass, 0, sizeof(VAR_2->sopass));
}
