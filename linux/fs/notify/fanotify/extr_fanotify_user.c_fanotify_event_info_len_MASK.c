
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_handle {int dummy; } ;
struct fanotify_event_info_fid {int dummy; } ;
struct fanotify_event {scalar_t__ fh_len; } ;


 int VAR_0 ;
 int FUNC_0 (struct fanotify_event*) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_2(struct fanotify_event *VAR_1)
{
 if (!FUNC_0(VAR_1))
  return 0;

 return FUNC_1(sizeof(struct fanotify_event_info_fid) +
         sizeof(struct file_handle) + VAR_1->fh_len,
         VAR_0);
}
