
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint ;
struct super_block {int dummy; } ;
struct jfs_superblock {int s_state; int s_logdev; int s_logserial; int s_flag; } ;
struct jfs_sb_info {int flag; scalar_t__ p_state; scalar_t__ state; TYPE_2__* log; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_4__ {scalar_t__ serial; TYPE_1__* bdev; } ;
struct TYPE_3__ {int bd_dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct jfs_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct buffer_head*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct super_block*,struct buffer_head**) ;
 int FUNC_7 (struct buffer_head*) ;

int FUNC_8(struct super_block *VAR_6, uint VAR_7)
{
 struct jfs_superblock *VAR_8;
 struct jfs_sb_info *VAR_9 = FUNC_0(VAR_6);
 struct buffer_head *VAR_10;
 int VAR_11;

 if (VAR_9->flag & VAR_5) {
  if (VAR_7 == VAR_1) {
   VAR_9->p_state = VAR_7;
   return 0;
  } else if (VAR_7 == VAR_2) {
   VAR_9->p_state = VAR_9->state;
   VAR_7 = VAR_1;
  } else if (VAR_7 == VAR_0) {
   VAR_7 = VAR_9->p_state;
  } else
   FUNC_3("updateSuper: bad state");
 } else if (VAR_9->state == VAR_1)
  return 0;

 if ((VAR_11 = FUNC_6(VAR_6, &VAR_10)))
  return VAR_11;

 VAR_8 = (struct jfs_superblock *)VAR_10->b_data;

 VAR_8->s_state = FUNC_2(VAR_7);
 VAR_9->state = VAR_7;

 if (VAR_7 == VAR_2) {

  VAR_8->s_logdev = FUNC_2(FUNC_5(VAR_9->log->bdev->bd_dev));
  VAR_8->s_logserial = FUNC_2(VAR_9->log->serial);
 } else if (VAR_7 == VAR_0) {




  if (VAR_8->s_flag & FUNC_2(VAR_3))
   VAR_8->s_flag |= FUNC_2(VAR_4);
 }

 FUNC_4(VAR_10);
 FUNC_7(VAR_10);
 FUNC_1(VAR_10);

 return 0;
}
