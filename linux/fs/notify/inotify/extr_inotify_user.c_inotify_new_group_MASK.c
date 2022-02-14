
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inotify_event_info {int wd; scalar_t__ name_len; scalar_t__ sync_cookie; int mask; int fse; } ;
struct TYPE_3__ {int ucounts; int idr; int idr_lock; } ;
struct fsnotify_group {unsigned int max_events; TYPE_1__ inotify_data; int memcg; int * overflow_event; } ;
struct TYPE_4__ {int mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct fsnotify_group* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct fsnotify_group*) ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct fsnotify_group* FUNC_4 (int *) ;
 int FUNC_5 (struct fsnotify_group*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ,int ) ;
 int VAR_6 ;
 struct inotify_event_info* FUNC_10 (int,int ) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static struct fsnotify_group *FUNC_13(unsigned int VAR_7)
{
 struct fsnotify_group *VAR_8;
 struct inotify_event_info *VAR_9;

 VAR_8 = FUNC_4(&VAR_6);
 if (FUNC_1(VAR_8))
  return VAR_8;

 VAR_9 = FUNC_10(sizeof(struct inotify_event_info), VAR_3);
 if (FUNC_12(!VAR_9)) {
  FUNC_5(VAR_8);
  return FUNC_0(-VAR_1);
 }
 VAR_8->overflow_event = &VAR_9->fse;
 FUNC_6(VAR_8->overflow_event, ((void*)0));
 VAR_9->mask = VAR_2;
 VAR_9->wd = -1;
 VAR_9->sync_cookie = 0;
 VAR_9->name_len = 0;

 VAR_8->max_events = VAR_7;
 VAR_8->memcg = FUNC_7(VAR_5->mm);

 FUNC_11(&VAR_8->inotify_data.idr_lock);
 FUNC_8(&VAR_8->inotify_data.idr);
 VAR_8->inotify_data.ucounts = FUNC_9(FUNC_3(),
       FUNC_2(),
       VAR_4);

 if (!VAR_8->inotify_data.ucounts) {
  FUNC_5(VAR_8);
  return FUNC_0(-VAR_0);
 }

 return VAR_8;
}
