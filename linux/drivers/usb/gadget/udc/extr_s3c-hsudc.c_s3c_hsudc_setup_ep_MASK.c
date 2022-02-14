
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ep_list; } ;
struct s3c_hsudc {int * ep; TYPE_2__* pd; TYPE_1__ gadget; int ep0state; } ;
struct TYPE_4__ {int epnum; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct s3c_hsudc*,int *,int) ;

__attribute__((used)) static void FUNC_2(struct s3c_hsudc *VAR_1)
{
 int VAR_2;

 VAR_1->ep0state = VAR_0;
 FUNC_0(&VAR_1->gadget.ep_list);
 for (VAR_2 = 0; VAR_2 < VAR_1->pd->epnum; VAR_2++)
  FUNC_1(VAR_1, &VAR_1->ep[VAR_2], VAR_2);
}
