
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct igb_adapter {int vfs_allocated_count; } ;


 int FUNC_0 (struct igb_adapter*,unsigned char const*,int ) ;
 struct igb_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0, const unsigned char *VAR_1)
{
 struct igb_adapter *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_2, VAR_1, VAR_2->vfs_allocated_count);

 return 0;
}
