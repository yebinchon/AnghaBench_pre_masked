
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ag71xx_ring {int * descs_cpu; } ;
struct ag71xx_desc {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static struct ag71xx_desc *FUNC_0(struct ag71xx_ring *VAR_1, int VAR_2)
{
 return (struct ag71xx_desc *)&VAR_1->descs_cpu[VAR_2 * VAR_0];
}
