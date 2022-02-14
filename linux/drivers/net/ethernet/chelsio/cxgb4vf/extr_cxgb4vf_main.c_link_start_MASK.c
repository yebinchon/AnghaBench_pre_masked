
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_info {int adapter; int xact_addr_filt; int viid; } ;
struct net_device {int dev_addr; int mtu; } ;


 int FUNC_0 (struct port_info*,int ,int *,int ,int) ;
 struct port_info* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,struct port_info*,int,int) ;
 int FUNC_3 (int ,int ,int ,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0)
{
 int VAR_1;
 struct port_info *VAR_2 = FUNC_1(VAR_0);





 VAR_1 = FUNC_3(VAR_2->adapter, VAR_2->viid, VAR_0->mtu, -1, -1, -1, 1,
         1);
 if (VAR_1 == 0)
  VAR_1 = FUNC_0(VAR_2, VAR_2->viid,
      &VAR_2->xact_addr_filt,
      VAR_0->dev_addr, 1);






 if (VAR_1 == 0)
  VAR_1 = FUNC_2(VAR_2->adapter, VAR_2, 1, 1);

 return VAR_1;
}
