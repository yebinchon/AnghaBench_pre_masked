
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsnotify_event {int dummy; } ;
struct TYPE_2__ {int ext_fh; } ;
struct fanotify_event {int mask; int pid; TYPE_1__ fid; int path; } ;


 struct fanotify_event* FUNC_0 (struct fsnotify_event*) ;
 struct fanotify_event* FUNC_1 (struct fsnotify_event*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct fanotify_event*) ;
 scalar_t__ FUNC_3 (struct fanotify_event*) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,struct fanotify_event*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct fsnotify_event *VAR_2)
{
 struct fanotify_event *VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (FUNC_3(VAR_3))
  FUNC_7(&VAR_3->path);
 else if (FUNC_2(VAR_3))
  FUNC_5(VAR_3->fid.ext_fh);
 FUNC_8(VAR_3->pid);
 if (FUNC_4(VAR_3->mask)) {
  FUNC_6(VAR_1,
    FUNC_1(VAR_2));
  return;
 }
 FUNC_6(VAR_0, VAR_3);
}
