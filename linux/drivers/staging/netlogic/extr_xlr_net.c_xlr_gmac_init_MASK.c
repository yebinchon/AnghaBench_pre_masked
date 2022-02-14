
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlr_net_priv {int base_addr; int port_id; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct xlr_net_priv*) ;
 int FUNC_3 (struct xlr_net_priv*) ;
 int FUNC_4 (int ,int ,int,int) ;
 int FUNC_5 (struct xlr_net_priv*,struct platform_device*) ;

__attribute__((used)) static int FUNC_6(struct xlr_net_priv *VAR_17,
    struct platform_device *VAR_18)
{
 int VAR_19;

 FUNC_0("Initializing the gmac%d\n", VAR_17->port_id);

 FUNC_2(VAR_17);

 FUNC_1(VAR_17->base_addr, VAR_13,
       (1 << VAR_2) |
       (VAR_0 << VAR_1) |
       (1600 << VAR_3));

 VAR_19 = FUNC_5(VAR_17, VAR_18);
 if (VAR_19)
  return VAR_19;
 FUNC_3(VAR_17);


 FUNC_1(VAR_17->base_addr, VAR_15, 0x7217);

 FUNC_1(VAR_17->base_addr, VAR_12, 0x02);

 FUNC_1(VAR_17->base_addr, VAR_14, (1 << VAR_9) |
       (1 << VAR_5) | (1 << VAR_8) |
       (1 << VAR_6) | (1 << VAR_7) |
       (1 << VAR_10) | (1 << VAR_4));


 FUNC_4(VAR_17->base_addr, VAR_16, 0, 1 << VAR_11);
 FUNC_4(VAR_17->base_addr, VAR_16, 1 << 2, 1 << 2);
 return 0;
}
