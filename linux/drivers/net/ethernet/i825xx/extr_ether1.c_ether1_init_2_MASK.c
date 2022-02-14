
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mem_end; scalar_t__ mem_start; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int) ;

__attribute__((used)) static int
FUNC_1(struct net_device *VAR_1)
{
 int VAR_2;
 VAR_1->mem_start = 0;

 VAR_2 = FUNC_0 (VAR_1, 0x5a);

 if (VAR_2 > 0)
  VAR_2 = FUNC_0 (VAR_1, 0x1e);

 if (VAR_2 <= 0)
      return -VAR_0;

 VAR_1->mem_end = VAR_2;
 return 0;
}
