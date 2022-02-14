
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ kva; } ;
struct bfa_msgq_cmdq {size_t producer_index; TYPE_1__ addr; int depth; } ;
struct bfa_msgq_cmd_entry {size_t msg_size; scalar_t__ msg_hdr; } ;


 int FUNC_0 (size_t,int,int ) ;
 size_t VAR_0 ;
 int FUNC_1 (int *,int *,size_t) ;

__attribute__((used)) static void
FUNC_2(struct bfa_msgq_cmdq *VAR_1, struct bfa_msgq_cmd_entry *VAR_2)
{
 size_t VAR_3 = VAR_2->msg_size;
 int VAR_4 = 0;
 size_t VAR_5;
 u8 *VAR_6, *VAR_7;

 VAR_6 = (u8 *)VAR_2->msg_hdr;
 VAR_7 = (u8 *)VAR_1->addr.kva;
 VAR_7 += (VAR_1->producer_index * VAR_0);

 while (VAR_3) {
  VAR_5 = (VAR_3 < VAR_0) ?
    VAR_3 : VAR_0;
  FUNC_1(VAR_7, VAR_6, VAR_5);
  VAR_3 -= VAR_5;
  VAR_6 += VAR_0;
  FUNC_0(VAR_1->producer_index, 1, VAR_1->depth);
  VAR_7 = (u8 *)VAR_1->addr.kva;
  VAR_7 += (VAR_1->producer_index * VAR_0);
  VAR_4++;
 }

}
