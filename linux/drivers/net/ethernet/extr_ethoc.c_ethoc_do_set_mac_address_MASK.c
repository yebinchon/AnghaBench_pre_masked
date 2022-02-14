
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {unsigned char* dev_addr; } ;
struct ethoc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ethoc*,int ,unsigned char) ;
 struct ethoc* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2)
{
 struct ethoc *VAR_3 = FUNC_1(VAR_2);
 unsigned char *VAR_4 = VAR_2->dev_addr;

 FUNC_0(VAR_3, VAR_0, (VAR_4[2] << 24) | (VAR_4[3] << 16) |
         (VAR_4[4] << 8) | (VAR_4[5] << 0));
 FUNC_0(VAR_3, VAR_1, (VAR_4[0] << 8) | (VAR_4[1] << 0));
}
