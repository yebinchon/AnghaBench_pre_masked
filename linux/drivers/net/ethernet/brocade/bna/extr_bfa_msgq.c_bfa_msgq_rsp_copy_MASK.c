
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ kva; } ;
struct bfa_msgq_rspq {int consumer_index; TYPE_1__ addr; int depth; } ;
struct bfa_msgq {struct bfa_msgq_rspq rspq; } ;


 int FUNC_0 (int,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,size_t) ;

void
FUNC_2(struct bfa_msgq *VAR_1, u8 *VAR_2, size_t VAR_3)
{
 struct bfa_msgq_rspq *VAR_4 = &VAR_1->rspq;
 size_t VAR_5 = VAR_3;
 size_t VAR_6;
 int VAR_7;
 u8 *VAR_8, *VAR_9;

 VAR_7 = VAR_4->consumer_index;
 VAR_8 = (u8 *)VAR_4->addr.kva;
 VAR_8 += (VAR_7 * VAR_0);
 VAR_9 = VAR_2;

 while (VAR_5) {
  VAR_6 = (VAR_5 < VAR_0) ?
    VAR_5 : VAR_0;
  FUNC_1(VAR_9, VAR_8, VAR_6);
  VAR_5 -= VAR_6;
  VAR_9 += VAR_0;
  FUNC_0(VAR_7, 1, VAR_4->depth);
  VAR_8 = (u8 *)VAR_4->addr.kva;
  VAR_8 += (VAR_7 * VAR_0);
 }
}
