
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {unsigned int base_addr; } ;
struct local_info {scalar_t__ mohawk; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 struct local_info* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(struct net_device *VAR_1)
{
    struct local_info *VAR_2 = FUNC_3(VAR_1);
    unsigned int VAR_3 = VAR_1->base_addr;

    FUNC_1(4);
    FUNC_4(1);
    FUNC_0(VAR_0, 0);
    FUNC_2(40);
    if (VAR_2->mohawk)
 FUNC_0(VAR_0, 1);
    else
 FUNC_0(VAR_0, 1 | 4);
    FUNC_2(20);
}
