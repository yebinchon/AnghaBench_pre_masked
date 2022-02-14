
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct tun_struct {unsigned long ageing_time; scalar_t__ flow_count; int lock; int flow_gc_timer; struct hlist_head* flows; } ;
struct tun_flow_entry {scalar_t__ updated; int rps_rxhash; int queue_index; } ;
struct tun_file {scalar_t__ queue_index; } ;
struct hlist_head {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (struct tun_flow_entry*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct tun_struct*,struct hlist_head*,int ,scalar_t__) ;
 struct tun_flow_entry* FUNC_12 (struct hlist_head*,int ) ;
 size_t FUNC_13 (int ) ;

__attribute__((used)) static void FUNC_14(struct tun_struct *VAR_2, u32 VAR_3,
       struct tun_file *VAR_4)
{
 struct hlist_head *VAR_5;
 struct tun_flow_entry *VAR_6;
 unsigned long VAR_7 = VAR_2->ageing_time;
 u16 VAR_8 = VAR_4->queue_index;

 VAR_5 = &VAR_2->flows[FUNC_13(VAR_3)];

 FUNC_4();

 VAR_6 = FUNC_12(VAR_5, VAR_3);
 if (FUNC_2(VAR_6)) {

  if (FUNC_0(VAR_6->queue_index) != VAR_8)
   FUNC_1(VAR_6->queue_index, VAR_8);
  if (VAR_6->updated != VAR_1)
   VAR_6->updated = VAR_1;
  FUNC_7(VAR_6->rps_rxhash);
 } else {
  FUNC_8(&VAR_2->lock);
  if (!FUNC_12(VAR_5, VAR_3) &&
      VAR_2->flow_count < VAR_0)
   FUNC_11(VAR_2, VAR_5, VAR_3, VAR_8);

  if (!FUNC_10(&VAR_2->flow_gc_timer))
   FUNC_3(&VAR_2->flow_gc_timer,
      FUNC_6(VAR_1 + VAR_7));
  FUNC_9(&VAR_2->lock);
 }

 FUNC_5();
}
