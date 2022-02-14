
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inotify_event_info {scalar_t__ name_len; } ;
struct inotify_event {int dummy; } ;
struct fsnotify_event {int dummy; } ;


 struct inotify_event_info* FUNC_0 (struct fsnotify_event*) ;
 int FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(struct fsnotify_event *VAR_0)
{
 struct inotify_event_info *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1->name_len)
  return 0;
 return FUNC_1(VAR_1->name_len + 1, sizeof(struct inotify_event));
}
