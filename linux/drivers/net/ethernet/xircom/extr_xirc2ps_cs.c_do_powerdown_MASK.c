
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {unsigned int base_addr; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (char*,struct net_device*) ;

__attribute__((used)) static void
FUNC_3(struct net_device *VAR_1)
{

    unsigned int VAR_2 = VAR_1->base_addr;

    FUNC_2("do_powerdown(%p)\n", VAR_1);

    FUNC_1(4);
    FUNC_0(VAR_0, 0);
    FUNC_1(0);
}
