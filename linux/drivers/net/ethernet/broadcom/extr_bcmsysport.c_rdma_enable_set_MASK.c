
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcm_sysport_priv {int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct bcm_sysport_priv*,int ) ;
 int FUNC_2 (struct bcm_sysport_priv*,int,int ) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static inline int FUNC_4(struct bcm_sysport_priv *VAR_5,
      unsigned int VAR_6)
{
 unsigned int VAR_7 = 1000;
 u32 VAR_8;

 VAR_8 = FUNC_1(VAR_5, VAR_1);
 if (VAR_6)
  VAR_8 |= VAR_3;
 else
  VAR_8 &= ~VAR_3;
 FUNC_2(VAR_5, VAR_8, VAR_1);


 do {
  VAR_8 = FUNC_1(VAR_5, VAR_4);
  if (!!(VAR_8 & VAR_2) == !VAR_6)
   return 0;
  FUNC_3(1000, 2000);
 } while (VAR_7-- > 0);

 FUNC_0(VAR_5->netdev, "timeout waiting for RDMA to finish\n");

 return -VAR_0;
}
