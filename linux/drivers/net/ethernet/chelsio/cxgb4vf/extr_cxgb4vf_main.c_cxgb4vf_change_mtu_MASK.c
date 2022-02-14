
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_info {int viid; int adapter; } ;
struct net_device {int mtu; } ;


 struct port_info* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ,int,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0, int VAR_1)
{
 int VAR_2;
 struct port_info *VAR_3 = FUNC_0(VAR_0);

 VAR_2 = FUNC_1(VAR_3->adapter, VAR_3->viid, VAR_1,
         -1, -1, -1, -1, 1);
 if (!VAR_2)
  VAR_0->mtu = VAR_1;
 return VAR_2;
}
