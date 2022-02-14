
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bgmac {scalar_t__ loopback; TYPE_1__* net_dev; } ;
struct TYPE_2__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct bgmac*) ;
 int FUNC_1 (struct bgmac*,int ,int ,int) ;
 int FUNC_2 (struct bgmac*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct bgmac*,int ,int) ;
 int FUNC_5 (struct bgmac*,int ) ;

__attribute__((used)) static void FUNC_6(struct bgmac *VAR_7)
{

 FUNC_4(VAR_7, VAR_3, ~0);


 FUNC_4(VAR_7, VAR_2, 1 << VAR_4);


 FUNC_1(VAR_7, ~VAR_1, 0, 1);

 FUNC_3(VAR_7->net_dev);

 FUNC_5(VAR_7, VAR_7->net_dev->dev_addr);

 if (VAR_7->loopback)
  FUNC_1(VAR_7, ~0, VAR_0, 0);
 else
  FUNC_1(VAR_7, ~VAR_0, 0, 0);

 FUNC_4(VAR_7, VAR_5, 32 + VAR_6);

 FUNC_0(VAR_7);

 FUNC_2(VAR_7);
}
