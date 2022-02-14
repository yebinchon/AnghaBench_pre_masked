
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct port_info {struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct adapter {int mdio_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct port_info* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct adapter*,int ,int ,int ) ;
 int FUNC_8 (struct adapter*,int ,int ,int ,int ,int) ;
 int FUNC_9 (struct adapter*,int ,int) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_7, int VAR_8, int VAR_9,
   u16 VAR_10, u16 VAR_11)
{
 struct port_info *VAR_12 = FUNC_6(VAR_7);
 struct adapter *VAR_13 = VAR_12->adapter;
 int VAR_14;
 u32 VAR_15 = FUNC_2(VAR_10) | FUNC_1(VAR_8);

 FUNC_4(&VAR_13->mdio_lock);
 FUNC_7(VAR_13, VAR_1, FUNC_3(VAR_6), FUNC_3(1));
 FUNC_9(VAR_13, VAR_0, VAR_15);
 FUNC_9(VAR_13, VAR_2, VAR_11);
 FUNC_9(VAR_13, VAR_3, FUNC_0(1));
 VAR_14 = FUNC_8(VAR_13, VAR_3, VAR_4, 0, VAR_5, 10);
 FUNC_5(&VAR_13->mdio_lock);
 return VAR_14;
}
