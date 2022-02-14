
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ffs_data {int flags; TYPE_1__* gadget; int * ep0req; } ;
struct TYPE_2__ {int ep0; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct ffs_data*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct ffs_data *VAR_1)
{
 FUNC_0();

 if (!FUNC_1(!VAR_1->gadget)) {
  FUNC_4(VAR_1->gadget->ep0, VAR_1->ep0req);
  VAR_1->ep0req = ((void*)0);
  VAR_1->gadget = ((void*)0);
  FUNC_2(VAR_0, &VAR_1->flags);
  FUNC_3(VAR_1);
 }
}
