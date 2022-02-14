
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct net_device {int* dev_addr; int addr_len; } ;
struct fec_enet_private {scalar_t__ hwp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int*,int ,int ) ;
 struct fec_enet_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int
FUNC_5(struct net_device *VAR_3, void *VAR_4)
{
 struct fec_enet_private *VAR_5 = FUNC_2(VAR_3);
 struct sockaddr *VAR_6 = VAR_4;

 if (VAR_6) {
  if (!FUNC_0(VAR_6->sa_data))
   return -VAR_0;
  FUNC_1(VAR_3->dev_addr, VAR_6->sa_data, VAR_3->addr_len);
 }






 if (!FUNC_3(VAR_3))
  return 0;

 FUNC_4(VAR_3->dev_addr[3] | (VAR_3->dev_addr[2] << 8) |
  (VAR_3->dev_addr[1] << 16) | (VAR_3->dev_addr[0] << 24),
  VAR_5->hwp + VAR_2);
 FUNC_4((VAR_3->dev_addr[5] << 16) | (VAR_3->dev_addr[4] << 24),
  VAR_5->hwp + VAR_1);
 return 0;
}
