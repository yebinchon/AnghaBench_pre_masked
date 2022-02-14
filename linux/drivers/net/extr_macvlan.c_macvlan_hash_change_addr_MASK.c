
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct macvlan_dev {TYPE_1__* dev; } ;
struct TYPE_2__ {int dev_addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct macvlan_dev*) ;
 int FUNC_1 (struct macvlan_dev*,int) ;
 int FUNC_2 (int ,unsigned char const*,int ) ;

__attribute__((used)) static void FUNC_3(struct macvlan_dev *VAR_1,
     const unsigned char *VAR_2)
{
 FUNC_1(VAR_1, 1);



 FUNC_2(VAR_1->dev->dev_addr, VAR_2, VAR_0);
 FUNC_0(VAR_1);
}
