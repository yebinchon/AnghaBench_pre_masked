
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_4__* mb_free; } ;
struct TYPE_10__ {TYPE_2__ mbuf_pool; } ;
struct TYPE_8__ {TYPE_3__ hwm; } ;
struct s_smc {TYPE_1__ os; } ;
struct TYPE_11__ {struct TYPE_11__* sm_next; struct TYPE_11__* sm_use_count; } ;
typedef TYPE_4__ SMbuf ;


 int FUNC_0 (int,char*,TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct s_smc*,int ,int ) ;
 TYPE_4__* VAR_2 ;

void FUNC_2(struct s_smc *VAR_3, SMbuf *VAR_4)
{

 if (VAR_4) {
  VAR_4->sm_use_count-- ;
  FUNC_0(3, "free_mbuf: sm_use_count = %d", VAR_4->sm_use_count);





  if (!VAR_4->sm_use_count) {
   FUNC_0(3, "free SMbuf: mb = %p", VAR_4);

   VAR_4->sm_next = VAR_3->os.hwm.mbuf_pool.mb_free ;
   VAR_3->os.hwm.mbuf_pool.mb_free = VAR_4 ;




  }
 }
 else
  FUNC_1(VAR_3,VAR_0,VAR_1) ;
}
