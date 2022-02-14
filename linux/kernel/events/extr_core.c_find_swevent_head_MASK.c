
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct swevent_htable {int swevent_hlist; } ;
struct swevent_hlist {int dummy; } ;
struct TYPE_3__ {int type; int config; } ;
struct perf_event {TYPE_2__* ctx; TYPE_1__ attr; } ;
struct hlist_head {int dummy; } ;
struct TYPE_4__ {int lock; } ;


 struct hlist_head* FUNC_0 (struct swevent_hlist*,int ,int ) ;
 int FUNC_1 (int *) ;
 struct swevent_hlist* FUNC_2 (int ,int ) ;

__attribute__((used)) static inline struct hlist_head *
FUNC_3(struct swevent_htable *VAR_0, struct perf_event *VAR_1)
{
 struct swevent_hlist *VAR_2;
 u32 VAR_3 = VAR_1->attr.config;
 u64 VAR_4 = VAR_1->attr.type;






 VAR_2 = FUNC_2(VAR_0->swevent_hlist,
       FUNC_1(&VAR_1->ctx->lock));
 if (!VAR_2)
  return ((void*)0);

 return FUNC_0(VAR_2, VAR_4, VAR_3);
}
