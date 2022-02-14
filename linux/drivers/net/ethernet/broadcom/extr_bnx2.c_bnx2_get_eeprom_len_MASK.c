
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct bnx2 {scalar_t__ flash_size; int flash_info; } ;


 struct bnx2* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int
FUNC_1(struct net_device *VAR_0)
{
 struct bnx2 *VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1->flash_info)
  return 0;

 return (int) VAR_1->flash_size;
}
