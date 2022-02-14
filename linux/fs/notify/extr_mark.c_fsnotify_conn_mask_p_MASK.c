
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fsnotify_mark_connector {scalar_t__ type; } ;
typedef int __u32 ;
struct TYPE_6__ {int i_fsnotify_mask; } ;
struct TYPE_5__ {int mnt_fsnotify_mask; } ;
struct TYPE_4__ {int s_fsnotify_mask; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* FUNC_0 (struct fsnotify_mark_connector*) ;
 TYPE_2__* FUNC_1 (struct fsnotify_mark_connector*) ;
 TYPE_1__* FUNC_2 (struct fsnotify_mark_connector*) ;

__attribute__((used)) static __u32 *FUNC_3(struct fsnotify_mark_connector *VAR_3)
{
 if (VAR_3->type == VAR_0)
  return &FUNC_0(VAR_3)->i_fsnotify_mask;
 else if (VAR_3->type == VAR_2)
  return &FUNC_1(VAR_3)->mnt_fsnotify_mask;
 else if (VAR_3->type == VAR_1)
  return &FUNC_2(VAR_3)->s_fsnotify_mask;
 return ((void*)0);
}
