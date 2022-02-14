
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bm_rcr_entry {int dummy; } ;
struct bm_rcr {int busy; struct bm_rcr_entry* cursor; int available; } ;
struct bm_portal {struct bm_rcr rcr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bm_rcr_entry*) ;

__attribute__((used)) static inline struct bm_rcr_entry *FUNC_2(struct bm_portal *VAR_0)
{
 struct bm_rcr *VAR_1 = &VAR_0->rcr;

 FUNC_0(!VAR_1->busy);
 if (!VAR_1->available)
  return ((void*)0);



 FUNC_1(VAR_1->cursor);
 return VAR_1->cursor;
}
