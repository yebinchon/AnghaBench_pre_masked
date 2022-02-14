
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct addr_sync_ctx {int consumed; int flush; struct net_device* ndev; int const* addr; } ;


 int FUNC_0 (struct net_device*,int const*,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct net_device*,int ,struct addr_sync_ctx*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, const u8 *VAR_2, int VAR_3)
{
 struct addr_sync_ctx VAR_4;

 VAR_4.consumed = 0;
 VAR_4.addr = VAR_2;
 VAR_4.ndev = VAR_1;
 VAR_4.flush = 1;

 FUNC_1(VAR_1, VAR_0, &VAR_4);
 if (VAR_4.consumed == VAR_3)
  FUNC_0(VAR_1, VAR_2, -1, 0);

 return 0;
}
