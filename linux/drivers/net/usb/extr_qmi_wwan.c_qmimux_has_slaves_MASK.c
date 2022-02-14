
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usbnet {TYPE_2__* net; } ;
struct TYPE_3__ {int upper; } ;
struct TYPE_4__ {TYPE_1__ adj_list; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(struct usbnet *VAR_0)
{
 return !FUNC_0(&VAR_0->net->adj_list.upper);
}
