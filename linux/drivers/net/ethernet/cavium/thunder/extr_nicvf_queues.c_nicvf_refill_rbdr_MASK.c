
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct rbdr_entry_t {int buf_addr; } ;
struct TYPE_3__ {int q_len; } ;
struct rbdr {scalar_t__ enable; TYPE_1__ dmem; } ;
struct queue_set {int rbdr_cnt; int rbdr_len; struct rbdr* rbdr; } ;
struct nicvf {int rb_alloc_fail; TYPE_2__* pnicvf; struct queue_set* qs; } ;
typedef int gfp_t ;
struct TYPE_4__ {int netdev; } ;


 struct rbdr_entry_t* FUNC_0 (struct rbdr*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct nicvf*,struct rbdr*,int ,int ,int*) ;
 int FUNC_3 (struct nicvf*,int ,int) ;
 int FUNC_4 (struct nicvf*) ;
 int FUNC_5 (struct nicvf*,int ,int) ;
 int FUNC_6 (struct nicvf*,int ,int,int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(struct nicvf *VAR_6, gfp_t VAR_7)
{
 struct queue_set *VAR_8 = VAR_6->qs;
 int VAR_9 = VAR_8->rbdr_cnt;
 int VAR_10, VAR_11;
 int VAR_12;
 struct rbdr *VAR_13;
 struct rbdr_entry_t *VAR_14;
 u64 VAR_15;
 int VAR_16 = 0;

refill:
 if (!VAR_9)
  return;
 VAR_9--;
 VAR_13 = &VAR_8->rbdr[VAR_9];

 if (!VAR_13->enable)
  goto next_rbdr;


 VAR_11 = FUNC_5(VAR_6, VAR_3, VAR_9);
 VAR_11 &= 0x7FFFF;

 if (VAR_11 >= (VAR_8->rbdr_len - 1))
  goto next_rbdr;
 else
  VAR_12 = VAR_8->rbdr_len - VAR_11 - 1;


 FUNC_7();


 VAR_10 = FUNC_5(VAR_6, VAR_4, VAR_9) >> 3;
 while (VAR_12) {
  VAR_10++;
  VAR_10 &= (VAR_13->dmem.q_len - 1);

  if (FUNC_2(VAR_6, VAR_13, VAR_7, VAR_5, &VAR_15))
   break;

  VAR_14 = FUNC_0(VAR_13, VAR_10);
  VAR_14->buf_addr = VAR_15 & ~(VAR_1 - 1);
  VAR_12--;
  VAR_16++;
 }

 FUNC_4(VAR_6);


 FUNC_8();


 if (VAR_12)
  VAR_6->rb_alloc_fail = 1;
 else
  VAR_6->rb_alloc_fail = 0;


 FUNC_6(VAR_6, VAR_2,
         VAR_9, VAR_16);
next_rbdr:

 if (!VAR_6->rb_alloc_fail && VAR_13->enable &&
     FUNC_1(VAR_6->pnicvf->netdev))
  FUNC_3(VAR_6, VAR_0, VAR_9);

 if (VAR_9)
  goto refill;
}
