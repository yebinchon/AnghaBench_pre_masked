
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ppp_channel {struct channel* ppp; } ;
struct channel {int upl; TYPE_2__* ppp; } ;
struct TYPE_3__ {int index; } ;
struct TYPE_4__ {TYPE_1__ file; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct ppp_channel *VAR_0)
{
 struct channel *VAR_1 = VAR_0->ppp;
 int VAR_2 = -1;

 if (VAR_1) {
  FUNC_0(&VAR_1->upl);
  if (VAR_1->ppp)
   VAR_2 = VAR_1->ppp->file.index;
  FUNC_1(&VAR_1->upl);
 }
 return VAR_2;
}
