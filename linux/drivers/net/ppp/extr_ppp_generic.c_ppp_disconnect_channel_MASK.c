
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int refcnt; int rwait; } ;
struct ppp {scalar_t__ n_channels; TYPE_1__ file; } ;
struct channel {int clist; int upl; struct ppp* ppp; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ppp*) ;
 int FUNC_2 (struct ppp*) ;
 int FUNC_3 (struct ppp*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(struct channel *VAR_1)
{
 struct ppp *VAR_2;
 int VAR_3 = -VAR_0;

 FUNC_6(&VAR_1->upl);
 VAR_2 = VAR_1->ppp;
 VAR_1->ppp = ((void*)0);
 FUNC_7(&VAR_1->upl);
 if (VAR_2) {

  FUNC_2(VAR_2);
  FUNC_0(&VAR_1->clist);
  if (--VAR_2->n_channels == 0)
   FUNC_5(&VAR_2->file.rwait);
  FUNC_3(VAR_2);
  if (FUNC_4(&VAR_2->file.refcnt))
   FUNC_1(VAR_2);
  VAR_3 = 0;
 }
 return VAR_3;
}
