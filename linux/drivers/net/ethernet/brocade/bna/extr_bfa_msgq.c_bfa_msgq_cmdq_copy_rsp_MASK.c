
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {int i2htok; } ;
struct TYPE_9__ {TYPE_2__ mtag; } ;
struct bfi_msgq_h2i_cmdq_copy_rsp {int data; TYPE_4__ mh; } ;
struct TYPE_10__ {int * msg; } ;
struct TYPE_6__ {scalar_t__ kva; } ;
struct bfa_msgq_cmdq {int bytes_to_copy; TYPE_5__ copy_mb; TYPE_3__* msgq; scalar_t__ offset; int token; TYPE_1__ addr; } ;
struct TYPE_8__ {int ioc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bfa_msgq_cmdq*) ;
 int FUNC_1 (int ,TYPE_5__*,int (*) (struct bfa_msgq_cmdq*),struct bfa_msgq_cmdq*) ;
 int FUNC_2 (TYPE_4__,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (struct bfi_msgq_h2i_cmdq_copy_rsp*,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct bfa_msgq_cmdq *VAR_3)
{
 struct bfi_msgq_h2i_cmdq_copy_rsp *VAR_4 =
  (struct bfi_msgq_h2i_cmdq_copy_rsp *)&VAR_3->copy_mb.msg[0];
 int VAR_5;
 u8 *VAR_6 = (u8 *)VAR_3->addr.kva;

 FUNC_5(VAR_4, 0, sizeof(struct bfi_msgq_h2i_cmdq_copy_rsp));
 FUNC_2(VAR_4->mh, VAR_1, VAR_2, 0);
 VAR_4->mh.mtag.i2htok = FUNC_3(VAR_3->token);
 VAR_5 = (VAR_3->bytes_to_copy >= VAR_0) ? VAR_0 :
  VAR_3->bytes_to_copy;
 VAR_6 += VAR_3->offset;
 FUNC_4(VAR_4->data, VAR_6, VAR_5);

 VAR_3->token++;
 VAR_3->offset += VAR_5;
 VAR_3->bytes_to_copy -= VAR_5;

 if (!FUNC_1(VAR_3->msgq->ioc, &VAR_3->copy_mb,
    FUNC_0, VAR_3)) {
  FUNC_0(VAR_3);
 }
}
