
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct bnx2x {int link_params; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (int *,int,int,int,int*) ;
 int FUNC_3 (struct bnx2x*) ;
 struct bnx2x* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_3, int VAR_4,
      int VAR_5, u16 VAR_6)
{
 struct bnx2x *VAR_7 = FUNC_4(VAR_3);
 u16 VAR_8;
 int VAR_9;

 FUNC_0(VAR_2, "mdio_read: prtad 0x%x, devad 0x%x, addr 0x%x\n",
    VAR_4, VAR_5, VAR_6);


 VAR_5 = (VAR_5 == VAR_1) ? VAR_0 : VAR_5;

 FUNC_1(VAR_7);
 VAR_9 = FUNC_2(&VAR_7->link_params, VAR_4, VAR_5, VAR_6, &VAR_8);
 FUNC_3(VAR_7);
 FUNC_0(VAR_2, "mdio_read_val 0x%x rc = 0x%x\n", VAR_8, VAR_9);

 if (!VAR_9)
  VAR_9 = VAR_8;
 return VAR_9;
}
