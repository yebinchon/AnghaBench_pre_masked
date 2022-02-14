
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {int* dev_addr; } ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int*,int const*) ;
 int FUNC_2 (struct net_device*,int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2, const u8 *VAR_3)
{
 if (!FUNC_0(VAR_3)) {
  FUNC_1(VAR_2->dev_addr, VAR_3);
 } else {
  u32 VAR_4 = FUNC_2(VAR_2, VAR_0);
  u32 VAR_5 = FUNC_2(VAR_2, VAR_1);

  VAR_2->dev_addr[0] = (VAR_4 >> 24) & 0xFF;
  VAR_2->dev_addr[1] = (VAR_4 >> 16) & 0xFF;
  VAR_2->dev_addr[2] = (VAR_4 >> 8) & 0xFF;
  VAR_2->dev_addr[3] = (VAR_4 >> 0) & 0xFF;
  VAR_2->dev_addr[4] = (VAR_5 >> 8) & 0xFF;
  VAR_2->dev_addr[5] = (VAR_5 >> 0) & 0xFF;
 }
}
