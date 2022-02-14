
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_mgmt {scalar_t__ agl; } ;
struct net_device {int mtu; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,int) ;
 struct octeon_mgmt* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_5, int VAR_6)
{
 struct octeon_mgmt *VAR_7 = FUNC_1(VAR_5);
 int VAR_8 = VAR_6 + VAR_3 + VAR_2;

 VAR_5->mtu = VAR_6;




 FUNC_0(VAR_7->agl + VAR_0, VAR_8);





 FUNC_0(VAR_7->agl + VAR_1,
         (VAR_8 + 7 + VAR_4 * 2) & 0xfff8);

 return 0;
}
