
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tlan_priv {int lock; } ;
struct net_device {int base_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tlan_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,int*,int ) ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2, u8 VAR_3, u8 *VAR_4)
{
 int VAR_5;
 struct tlan_priv *VAR_6 = FUNC_0(VAR_2);
 unsigned long VAR_7 = 0;
 int VAR_8 = 0;

 FUNC_1(&VAR_6->lock, VAR_7);

 FUNC_5(VAR_2->base_addr);
 VAR_5 = FUNC_4(VAR_2->base_addr, 0xa0, VAR_0);
 if (VAR_5) {
  VAR_8 = 1;
  goto fail;
 }
 VAR_5 = FUNC_4(VAR_2->base_addr, VAR_3, VAR_0);
 if (VAR_5) {
  VAR_8 = 2;
  goto fail;
 }
 FUNC_5(VAR_2->base_addr);
 VAR_5 = FUNC_4(VAR_2->base_addr, 0xa1, VAR_0);
 if (VAR_5) {
  VAR_8 = 3;
  goto fail;
 }
 FUNC_3(VAR_2->base_addr, VAR_4, VAR_1);
fail:
 FUNC_2(&VAR_6->lock, VAR_7);

 return VAR_8;

}
