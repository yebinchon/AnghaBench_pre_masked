
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct igb_adapter {int vfs_allocated_count; } ;
typedef scalar_t__ __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct igb_adapter*,int) ;
 int FUNC_2 (struct igb_adapter*,int,int,int) ;
 struct igb_adapter* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3, int VAR_4,
          u16 VAR_5, u8 VAR_6, __be16 VAR_7)
{
 struct igb_adapter *VAR_8 = FUNC_3(VAR_3);

 if ((VAR_4 >= VAR_8->vfs_allocated_count) || (VAR_5 > 4095) || (VAR_6 > 7))
  return -VAR_0;

 if (VAR_7 != FUNC_0(VAR_2))
  return -VAR_1;

 return (VAR_5 || VAR_6) ? FUNC_2(VAR_8, VAR_4, VAR_5, VAR_6) :
          FUNC_1(VAR_8, VAR_4);
}
