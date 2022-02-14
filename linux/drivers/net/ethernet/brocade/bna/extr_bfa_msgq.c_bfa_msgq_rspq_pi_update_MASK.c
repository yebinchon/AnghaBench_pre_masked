
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct bfi_msgq_mhdr {int msg_class; int num_entries; } ;
struct TYPE_4__ {int rspq_pi; } ;
struct bfi_msgq_i2h_db {TYPE_1__ idx; } ;
struct bfi_mbmsg {int dummy; } ;
struct TYPE_5__ {scalar_t__ kva; } ;
struct bfa_msgq_rspq {int producer_index; int consumer_index; int depth; TYPE_3__* rsphdlr; TYPE_2__ addr; } ;
struct TYPE_6__ {int cbarg; int (* cbfn ) (int ,struct bfi_msgq_mhdr*) ;} ;


 int FUNC_0 (int,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bfa_msgq_rspq*,int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,struct bfi_msgq_mhdr*) ;

__attribute__((used)) static void
FUNC_4(struct bfa_msgq_rspq *VAR_3, struct bfi_mbmsg *VAR_4)
{
 struct bfi_msgq_i2h_db *VAR_5 = (struct bfi_msgq_i2h_db *)VAR_4;
 struct bfi_msgq_mhdr *VAR_6;
 int VAR_7;
 int VAR_8;
 u8 *VAR_9;

 VAR_3->producer_index = FUNC_2(VAR_5->idx.rspq_pi);

 while (VAR_3->consumer_index != VAR_3->producer_index) {
  VAR_9 = (u8 *)VAR_3->addr.kva;
  VAR_9 += (VAR_3->consumer_index * VAR_1);
  VAR_6 = (struct bfi_msgq_mhdr *)VAR_9;

  VAR_8 = VAR_6->msg_class;
  VAR_7 = FUNC_2(VAR_6->num_entries);

  if ((VAR_8 >= VAR_0) || (VAR_3->rsphdlr[VAR_8].cbfn == ((void*)0)))
   break;

  (VAR_3->rsphdlr[VAR_8].cbfn)(VAR_3->rsphdlr[VAR_8].cbarg, VAR_6);

  FUNC_0(VAR_3->consumer_index, VAR_7,
    VAR_3->depth);
 }

 FUNC_1(VAR_3, VAR_2);
}
