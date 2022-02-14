
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int* dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,unsigned char*,int ) ;
 int FUNC_1 (struct net_device*,int ) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_3, unsigned char *VAR_4)
{
 if (VAR_4[0] || VAR_4[1] || VAR_4[2] || VAR_4[3] || VAR_4[4] || VAR_4[5]) {
  FUNC_0(VAR_3->dev_addr, VAR_4, VAR_0);
 } else {
  u32 VAR_5 = FUNC_1(VAR_3, VAR_1);
  u32 VAR_6 = FUNC_1(VAR_3, VAR_2);

  VAR_3->dev_addr[0] = (VAR_5 >> 24) & 0xFF;
  VAR_3->dev_addr[1] = (VAR_5 >> 16) & 0xFF;
  VAR_3->dev_addr[2] = (VAR_5 >> 8) & 0xFF;
  VAR_3->dev_addr[3] = (VAR_5 >> 0) & 0xFF;
  VAR_3->dev_addr[4] = (VAR_6 >> 8) & 0xFF;
  VAR_3->dev_addr[5] = (VAR_6 >> 0) & 0xFF;
 }
}
