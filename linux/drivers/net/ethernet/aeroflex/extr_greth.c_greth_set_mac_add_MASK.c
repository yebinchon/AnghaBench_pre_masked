
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct net_device {int* dev_addr; int addr_len; } ;
struct greth_regs {int esa_lsb; int esa_msb; } ;
struct greth_private {struct greth_regs* regs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int*,int ,int ) ;
 struct greth_private* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1, void *VAR_2)
{
 struct sockaddr *VAR_3 = VAR_2;
 struct greth_private *VAR_4;
 struct greth_regs *VAR_5;

 VAR_4 = FUNC_3(VAR_1);
 VAR_5 = VAR_4->regs;

 if (!FUNC_1(VAR_3->sa_data))
  return -VAR_0;

 FUNC_2(VAR_1->dev_addr, VAR_3->sa_data, VAR_1->addr_len);
 FUNC_0(VAR_5->esa_msb, VAR_1->dev_addr[0] << 8 | VAR_1->dev_addr[1]);
 FUNC_0(VAR_5->esa_lsb, VAR_1->dev_addr[2] << 24 | VAR_1->dev_addr[3] << 16 |
        VAR_1->dev_addr[4] << 8 | VAR_1->dev_addr[5]);

 return 0;
}
