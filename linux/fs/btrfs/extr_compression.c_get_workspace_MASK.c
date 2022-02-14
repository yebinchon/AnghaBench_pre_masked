
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct TYPE_2__ {struct list_head* (* get_workspace ) (int) ;} ;


 TYPE_1__** VAR_0 ;
 struct list_head* FUNC_0 (int) ;

__attribute__((used)) static struct list_head *FUNC_1(int VAR_1, int VAR_2)
{
 return VAR_0[VAR_1]->get_workspace(VAR_2);
}
