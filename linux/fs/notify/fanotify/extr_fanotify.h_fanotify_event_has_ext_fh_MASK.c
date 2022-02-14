
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fanotify_event {scalar_t__ fh_len; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct fanotify_event*) ;

__attribute__((used)) static inline bool FUNC_1(struct fanotify_event *VAR_1)
{
 return FUNC_0(VAR_1) &&
  VAR_1->fh_len > VAR_0;
}
