
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct dnet {TYPE_1__* dev; } ;
typedef int addr ;
typedef int __be16 ;
struct TYPE_2__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct dnet*,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,int) ;

__attribute__((used)) static void FUNC_4(struct dnet *VAR_3)
{
 u16 VAR_4;
 u8 VAR_5[6];
 VAR_4 = FUNC_1(VAR_3, VAR_0);
 *((__be16 *)VAR_5) = FUNC_0(VAR_4);
 VAR_4 = FUNC_1(VAR_3, VAR_1);
 *((__be16 *)(VAR_5 + 2)) = FUNC_0(VAR_4);
 VAR_4 = FUNC_1(VAR_3, VAR_2);
 *((__be16 *)(VAR_5 + 4)) = FUNC_0(VAR_4);

 if (FUNC_2(VAR_5))
  FUNC_3(VAR_3->dev->dev_addr, VAR_5, sizeof(VAR_5));
}
