
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct f2fs_sb_info {scalar_t__ gc_mode; } ;
struct TYPE_6__ {TYPE_2__* fcc_info; TYPE_1__* dcc_info; } ;
struct TYPE_5__ {int queued_flush; } ;
struct TYPE_4__ {int queued_discard; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_3__* FUNC_0 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct f2fs_sb_info*,int) ;
 scalar_t__ FUNC_3 (struct f2fs_sb_info*,int ) ;

__attribute__((used)) static inline bool FUNC_4(struct f2fs_sb_info *VAR_9, int VAR_10)
{
 if (VAR_9->gc_mode == VAR_8)
  return 1;

 if (FUNC_3(VAR_9, VAR_3) || FUNC_3(VAR_9, VAR_5) ||
  FUNC_3(VAR_9, VAR_4) || FUNC_3(VAR_9, VAR_7) ||
  FUNC_3(VAR_9, VAR_6) ||
  FUNC_3(VAR_9, VAR_1) ||
  FUNC_3(VAR_9, VAR_2))
  return 0;

 if (VAR_10 != VAR_0 && FUNC_0(VAR_9) && FUNC_0(VAR_9)->dcc_info &&
   FUNC_1(&FUNC_0(VAR_9)->dcc_info->queued_discard))
  return 0;

 if (FUNC_0(VAR_9) && FUNC_0(VAR_9)->fcc_info &&
   FUNC_1(&FUNC_0(VAR_9)->fcc_info->queued_flush))
  return 0;

 return FUNC_2(VAR_9, VAR_10);
}
