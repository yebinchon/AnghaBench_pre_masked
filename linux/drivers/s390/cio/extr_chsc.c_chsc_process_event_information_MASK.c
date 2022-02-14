
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_8__ {int flags; } ;
struct TYPE_7__ {TYPE_4__ nt0_area; int nt2_area; } ;
struct TYPE_6__ {int code; } ;
struct TYPE_5__ {int length; int code; } ;
struct chsc_sei {int nt; TYPE_3__ u; scalar_t__ ntsm; TYPE_2__ response; TYPE_1__ request; } ;


 int FUNC_0 (int,char*,int,...) ;
 scalar_t__ FUNC_1 (struct chsc_sei*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct chsc_sei*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct chsc_sei *VAR_0, u64 VAR_1)
{
 static int VAR_2;

 while (1) {
  FUNC_4(VAR_0, 0, sizeof(*VAR_0));
  VAR_0->request.length = 0x0010;
  VAR_0->request.code = 0x000e;
  if (!VAR_2)
   VAR_0->ntsm = VAR_1;

  if (FUNC_1(VAR_0))
   break;

  if (VAR_0->response.code != 0x0001) {
   FUNC_0(2, "chsc: sei failed (rc=%04x, ntsm=%llx)\n",
          VAR_0->response.code, VAR_0->ntsm);

   if (VAR_0->response.code == 3 && VAR_0->ntsm) {

    VAR_2 = 1;
    continue;
   }
   break;
  }

  FUNC_0(2, "chsc: sei successful (nt=%d)\n", VAR_0->nt);
  switch (VAR_0->nt) {
  case 0:
   FUNC_2(&VAR_0->u.nt0_area);
   break;
  case 2:
   FUNC_3(&VAR_0->u.nt2_area);
   break;
  default:
   FUNC_0(2, "chsc: unhandled nt: %d\n", VAR_0->nt);
   break;
  }

  if (!(VAR_0->u.nt0_area.flags & 0x80))
   break;
 }
}
