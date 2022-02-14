
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct rbdr_entry_t {scalar_t__ buf_addr; } ;
struct TYPE_4__ {int q_len; int base; } ;
struct rbdr {int enable; int head; int tail; int pgcnt; TYPE_2__ dmem; scalar_t__ is_xdp; struct pgcache* pgcache; } ;
struct pgcache {scalar_t__ page; scalar_t__ ref_count; } ;
struct nicvf {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rbdr_entry_t* FUNC_0 (struct rbdr*,int) ;
 int VAR_2 ;
 int FUNC_1 (int *,scalar_t__,int ,int ,int ) ;
 int FUNC_2 (struct nicvf*,TYPE_2__*) ;
 scalar_t__ FUNC_3 (struct nicvf*,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct nicvf *VAR_3, struct rbdr *VAR_4)
{
 int VAR_5, VAR_6;
 u64 VAR_7, VAR_8;
 struct pgcache *VAR_9;
 struct rbdr_entry_t *VAR_10;

 if (!VAR_4)
  return;

 VAR_4->enable = 0;
 if (!VAR_4->dmem.base)
  return;

 VAR_5 = VAR_4->head;
 VAR_6 = VAR_4->tail;


 while (VAR_5 != VAR_6) {
  VAR_10 = FUNC_0(VAR_4, VAR_5);
  VAR_7 = VAR_10->buf_addr;
  VAR_8 = FUNC_3(VAR_3, VAR_7);
  FUNC_1(&VAR_3->pdev->dev, VAR_7, VAR_2,
         VAR_1, VAR_0);
  if (VAR_8)
   FUNC_7(FUNC_9(FUNC_6(VAR_8)));
  VAR_5++;
  VAR_5 &= (VAR_4->dmem.q_len - 1);
 }

 VAR_10 = FUNC_0(VAR_4, VAR_6);
 VAR_7 = VAR_10->buf_addr;
 VAR_8 = FUNC_3(VAR_3, VAR_7);
 FUNC_1(&VAR_3->pdev->dev, VAR_7, VAR_2,
        VAR_1, VAR_0);
 if (VAR_8)
  FUNC_7(FUNC_9(FUNC_6(VAR_8)));


 FUNC_8();


 VAR_5 = 0;
 while (VAR_5 < VAR_4->pgcnt) {
  VAR_9 = &VAR_4->pgcache[VAR_5];
  if (VAR_9->page && FUNC_4(VAR_9->page) != 0) {
   if (VAR_4->is_xdp) {
    FUNC_5(VAR_9->page,
          VAR_9->ref_count - 1);
   }
   FUNC_7(VAR_9->page);
  }
  VAR_5++;
 }


 FUNC_2(VAR_3, &VAR_4->dmem);
}
