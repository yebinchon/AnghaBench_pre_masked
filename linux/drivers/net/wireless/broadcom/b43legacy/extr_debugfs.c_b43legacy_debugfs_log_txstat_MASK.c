
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43legacy_wldev {struct b43legacy_dfsentry* dfsentry; } ;
struct b43legacy_txstatus_log {int end; int lock; struct b43legacy_txstatus* log; } ;
struct b43legacy_txstatus {int dummy; } ;
struct b43legacy_dfsentry {struct b43legacy_txstatus_log txstatlog; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct b43legacy_txstatus*,struct b43legacy_txstatus const*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct b43legacy_wldev *VAR_1,
       const struct b43legacy_txstatus *VAR_2)
{
 struct b43legacy_dfsentry *VAR_3 = VAR_1->dfsentry;
 struct b43legacy_txstatus_log *VAR_4;
 struct b43legacy_txstatus *VAR_5;
 int VAR_6;

 if (!VAR_3)
  return;
 VAR_4 = &VAR_3->txstatlog;
 FUNC_0(!FUNC_1());
 FUNC_3(&VAR_4->lock);
 VAR_6 = VAR_4->end + 1;
 if (VAR_6 == VAR_0)
  VAR_6 = 0;
 VAR_4->end = VAR_6;
 VAR_5 = &(VAR_4->log[VAR_6]);
 FUNC_2(VAR_5, VAR_2, sizeof(*VAR_5));
 FUNC_4(&VAR_4->lock);
}
