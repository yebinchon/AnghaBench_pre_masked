
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_info {int viid; struct adapter* adapter; } ;
struct net_device {int flags; } ;
struct adapter {int mbox; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int ,int ) ;
 int FUNC_1 (struct net_device*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct port_info* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct adapter*,int ,int ,int,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_4, int VAR_5, bool VAR_6)
{
 struct port_info *VAR_7 = FUNC_2(VAR_4);
 struct adapter *VAR_8 = VAR_7->adapter;

 FUNC_1(VAR_4, VAR_2, VAR_3);
 FUNC_0(VAR_4, VAR_2, VAR_3);

 return FUNC_3(VAR_8, VAR_8->mbox, VAR_7->viid, VAR_5,
        (VAR_4->flags & VAR_1) ? 1 : 0,
        (VAR_4->flags & VAR_0) ? 1 : 0, 1, -1,
        VAR_6);
}
