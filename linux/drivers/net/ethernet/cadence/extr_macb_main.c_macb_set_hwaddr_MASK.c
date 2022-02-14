
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct macb {TYPE_1__* dev; } ;
struct TYPE_2__ {scalar_t__ dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct macb*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct macb *VAR_8)
{
 u32 VAR_9;
 u16 VAR_10;

 VAR_9 = FUNC_1(*((u32 *)VAR_8->dev->dev_addr));
 FUNC_2(VAR_8, VAR_0, VAR_9);
 VAR_10 = FUNC_0(*((u16 *)(VAR_8->dev->dev_addr + 4)));
 FUNC_2(VAR_8, VAR_1, VAR_10);


 FUNC_2(VAR_8, VAR_2, 0);
 FUNC_2(VAR_8, VAR_3, 0);
 FUNC_2(VAR_8, VAR_4, 0);
 FUNC_2(VAR_8, VAR_5, 0);
 FUNC_2(VAR_8, VAR_6, 0);
 FUNC_2(VAR_8, VAR_7, 0);
}
