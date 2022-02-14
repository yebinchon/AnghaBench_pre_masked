
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsd4_op {int opnum; } ;
struct TYPE_2__ {int op_flags; } ;


 TYPE_1__* FUNC_0 (struct nfsd4_op*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,int ) ;

void FUNC_4(struct nfsd4_op *VAR_1)
{
 if (FUNC_0(VAR_1)->op_flags & VAR_0) {
  FUNC_3("unable to encode reply to nonidempotent op %d (%s)\n",
   VAR_1->opnum, FUNC_2(VAR_1->opnum));
  FUNC_1(1);
 }
}
