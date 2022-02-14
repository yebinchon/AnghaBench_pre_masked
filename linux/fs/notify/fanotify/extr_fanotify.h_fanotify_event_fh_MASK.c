
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fanotify_event {int fh_len; int fid; } ;


 void* FUNC_0 (int *,int ) ;

__attribute__((used)) static inline void *FUNC_1(struct fanotify_event *VAR_0)
{
 return FUNC_0(&VAR_0->fid, VAR_0->fh_len);
}
