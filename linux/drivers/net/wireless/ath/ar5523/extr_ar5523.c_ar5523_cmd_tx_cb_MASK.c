
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {scalar_t__ status; struct ar5523_tx_cmd* context; } ;
struct ar5523_tx_cmd {int flags; int done; scalar_t__ res; struct ar5523* ar; } ;
struct ar5523 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ar5523*,char*,scalar_t__) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct urb *VAR_1)
{
 struct ar5523_tx_cmd *VAR_2 = VAR_1->context;
 struct ar5523 *VAR_3 = VAR_2->ar;

 if (VAR_1->status) {
  FUNC_0(VAR_3, "Failed to TX command. Status = %d\n",
      VAR_1->status);
  VAR_2->res = VAR_1->status;
  FUNC_1(&VAR_2->done);
  return;
 }

 if (!(VAR_2->flags & VAR_0)) {
  VAR_2->res = 0;
  FUNC_1(&VAR_2->done);
 }
}
