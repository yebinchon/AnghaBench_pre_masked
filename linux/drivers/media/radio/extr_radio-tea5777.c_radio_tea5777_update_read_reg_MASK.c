
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radio_tea5777 {int read_reg; int needs_write; TYPE_1__* ops; scalar_t__ write_before_read; } ;
struct TYPE_2__ {int (* read_reg ) (struct radio_tea5777*,int*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct radio_tea5777*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct radio_tea5777*,int*) ;

__attribute__((used)) static int FUNC_4(struct radio_tea5777 *VAR_1, int VAR_2)
{
 int VAR_3;

 if (VAR_1->read_reg != -1)
  return 0;

 if (VAR_1->write_before_read && VAR_1->needs_write) {
  VAR_3 = FUNC_1(VAR_1);
  if (VAR_3)
   return VAR_3;
 }

 if (VAR_2) {
  if (FUNC_2(FUNC_0(VAR_2)))
   return -VAR_0;
 }

 VAR_3 = VAR_1->ops->read_reg(VAR_1, &VAR_1->read_reg);
 if (VAR_3)
  return VAR_3;

 VAR_1->needs_write = 1;
 return 0;
}
