
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_bdi; int num_bds_table; } ;
struct bdc_ep {TYPE_1__ bd_list; } ;



__attribute__((used)) static inline int FUNC_0(struct bdc_ep *VAR_0, int VAR_1)
{
 int VAR_2;

 VAR_2 = VAR_1 - 1;
 if (VAR_2 < 0)
  VAR_2 = VAR_0->bd_list.max_bdi - 1;
  else if ((VAR_2 % (VAR_0->bd_list.num_bds_table-1)) == 0)
  VAR_2--;

 return VAR_2;
}
