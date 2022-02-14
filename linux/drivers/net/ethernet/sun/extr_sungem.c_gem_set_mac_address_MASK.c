
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct net_device {unsigned char* dev_addr; int addr_len; } ;
struct gem {scalar_t__ regs; int cell_enabled; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned char*,int ,int ) ;
 struct gem* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (unsigned char,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_4, void *VAR_5)
{
 struct sockaddr *VAR_6 = (struct sockaddr *) VAR_5;
 struct gem *VAR_7 = FUNC_3(VAR_4);
 unsigned char *VAR_8 = &VAR_4->dev_addr[0];

 if (!FUNC_1(VAR_6->sa_data))
  return -VAR_0;

 FUNC_2(VAR_4->dev_addr, VAR_6->sa_data, VAR_4->addr_len);


 if (!FUNC_5(VAR_4) || !FUNC_4(VAR_4))
  return 0;


 if (FUNC_0(!VAR_7->cell_enabled))
  return 0;

 FUNC_6((VAR_8[4] << 8) | VAR_8[5], VAR_7->regs + VAR_1);
 FUNC_6((VAR_8[2] << 8) | VAR_8[3], VAR_7->regs + VAR_2);
 FUNC_6((VAR_8[0] << 8) | VAR_8[1], VAR_7->regs + VAR_3);

 return 0;
}
