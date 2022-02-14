
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inotify_event_info {int mask; scalar_t__ name_len; int name; } ;
struct fsnotify_event {scalar_t__ inode; } ;


 int VAR_0 ;
 struct inotify_event_info* FUNC_0 (struct fsnotify_event*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static bool FUNC_2(struct fsnotify_event *VAR_1,
     struct fsnotify_event *VAR_2)
{
 struct inotify_event_info *VAR_3, *VAR_4;

 VAR_3 = FUNC_0(VAR_1);
 VAR_4 = FUNC_0(VAR_2);
 if (VAR_3->mask & VAR_0)
  return 0;
 if ((VAR_3->mask == VAR_4->mask) &&
     (VAR_1->inode == VAR_2->inode) &&
     (VAR_3->name_len == VAR_4->name_len) &&
     (!VAR_3->name_len || !FUNC_1(VAR_3->name, VAR_4->name)))
  return 1;
 return 0;
}
