
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int class; } ;
struct sched_queue_entry {int cntxt_id; TYPE_1__ param; } ;
struct port_info {struct adapter* adapter; } ;
struct adapter {unsigned int pf; int mbox; } ;
typedef enum sched_bind_type { ____Placeholder_sched_bind_type } sched_bind_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;

 int FUNC_3 (struct adapter*,int ,unsigned int,unsigned int,int,int*,int*) ;

__attribute__((used)) static int FUNC_4(struct port_info *VAR_4, void *VAR_5,
       enum sched_bind_type VAR_6, bool VAR_7)
{
 struct adapter *VAR_8 = VAR_4->adapter;
 u32 VAR_9, VAR_10, VAR_11;
 unsigned int VAR_12 = VAR_8->pf;
 unsigned int VAR_13 = 0;
 int VAR_14 = 0;

 switch (VAR_6) {
 case 128: {
  struct sched_queue_entry *VAR_15;

  VAR_15 = (struct sched_queue_entry *)VAR_5;




  VAR_9 = (FUNC_0(VAR_1) |
      FUNC_1(
       VAR_2));
  VAR_10 = VAR_7 ? VAR_15->param.class : VAR_3;
  VAR_11 = (VAR_9 | FUNC_2(VAR_15->cntxt_id));

  VAR_12 = VAR_8->pf;
  VAR_13 = 0;
  break;
 }
 default:
  VAR_14 = -VAR_0;
  goto out;
 }

 VAR_14 = FUNC_3(VAR_8, VAR_8->mbox, VAR_12, VAR_13, 1, &VAR_11, &VAR_10);

out:
 return VAR_14;
}
