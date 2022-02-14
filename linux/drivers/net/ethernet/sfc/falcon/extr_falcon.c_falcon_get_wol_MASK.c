
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ethtool_wolinfo {int sopass; scalar_t__ wolopts; scalar_t__ supported; } ;
struct ef4_nic {int dummy; } ;


 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static void FUNC_1(struct ef4_nic *VAR_0, struct ethtool_wolinfo *VAR_1)
{
 VAR_1->supported = 0;
 VAR_1->wolopts = 0;
 FUNC_0(&VAR_1->sopass, 0, sizeof(VAR_1->sopass));
}
