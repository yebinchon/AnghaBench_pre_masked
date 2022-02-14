
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zorro_dev {int dummy; } ;
struct net_device {int base_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (struct net_device*) ;
 struct net_device* FUNC_5 (struct zorro_dev*) ;

__attribute__((used)) static void FUNC_6(struct zorro_dev *VAR_2)
{
    struct net_device *VAR_3 = FUNC_5(VAR_2);

    FUNC_4(VAR_3);
    FUNC_1(VAR_1, VAR_3);
    FUNC_3(FUNC_0(VAR_3->base_addr)-VAR_0, 0x10000);
    FUNC_2(VAR_3);
}
