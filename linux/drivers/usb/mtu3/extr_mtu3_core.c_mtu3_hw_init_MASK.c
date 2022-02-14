
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtu3 {scalar_t__ hw_version; int gen2cp; int is_u3_ip; int dev; int ippc_base; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*,scalar_t__,char*) ;
 int FUNC_4 (struct mtu3*) ;
 int FUNC_5 (struct mtu3*) ;
 int FUNC_6 (struct mtu3*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct mtu3*) ;

__attribute__((used)) static int FUNC_9(struct mtu3 *VAR_4)
{
 u32 VAR_5;
 int VAR_6;

 VAR_5 = FUNC_7(VAR_4->ippc_base, VAR_3);
 VAR_4->hw_version = FUNC_0(VAR_5);
 VAR_4->gen2cp = !!(VAR_4->hw_version >= VAR_1);

 VAR_5 = FUNC_7(VAR_4->ippc_base, VAR_2);
 VAR_4->is_u3_ip = !!FUNC_1(VAR_5);

 FUNC_3(VAR_4->dev, "IP version 0x%x(%s IP)\n", VAR_4->hw_version,
  VAR_4->is_u3_ip ? "U3" : "U2");

 FUNC_5(VAR_4);

 VAR_6 = FUNC_4(VAR_4);
 if (VAR_6) {
  FUNC_2(VAR_4->dev, "device enable failed %d\n", VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_6(VAR_4);
 if (VAR_6)
  return -VAR_0;

 FUNC_8(VAR_4);

 return 0;
}
