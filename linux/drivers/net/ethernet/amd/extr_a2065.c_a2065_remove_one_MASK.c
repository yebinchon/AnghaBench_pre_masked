
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zorro_dev {int dummy; } ;
struct net_device {int mem_start; int base_addr; } ;
struct lance_regs {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct net_device*) ;
 struct net_device* FUNC_4 (struct zorro_dev*) ;

__attribute__((used)) static void FUNC_5(struct zorro_dev *VAR_1)
{
 struct net_device *VAR_2 = FUNC_4(VAR_1);

 FUNC_3(VAR_2);
 FUNC_2(FUNC_0(VAR_2->base_addr),
      sizeof(struct lance_regs));
 FUNC_2(FUNC_0(VAR_2->mem_start), VAR_0);
 FUNC_1(VAR_2);
}
