
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ext4_sb_info {scalar_t__ s_groups_count; struct ext4_li_request* s_li_request; } ;
struct ext4_li_request {int lr_request; scalar_t__ lr_timeout; } ;
typedef scalar_t__ ext4_group_t ;
struct TYPE_2__ {int li_state; int li_list_mtx; int li_request_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ext4_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 () ;
 int VAR_4 ;
 struct ext4_li_request* FUNC_2 (struct super_block*,scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 (struct ext4_li_request*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct super_block*) ;
 int FUNC_9 (struct super_block*,int ) ;

int FUNC_10(struct super_block *VAR_5,
        ext4_group_t VAR_6)
{
 struct ext4_sb_info *VAR_7 = FUNC_0(VAR_5);
 struct ext4_li_request *VAR_8 = ((void*)0);
 ext4_group_t VAR_9 = VAR_7->s_groups_count;
 int VAR_10 = 0;

 FUNC_6(&VAR_4);
 if (VAR_7->s_li_request != ((void*)0)) {




  VAR_7->s_li_request->lr_timeout = 0;
  goto out;
 }

 if (VAR_6 == VAR_9 || FUNC_8(VAR_5) ||
     !FUNC_9(VAR_5, VAR_2))
  goto out;

 VAR_8 = FUNC_2(VAR_5, VAR_6);
 if (!VAR_8) {
  VAR_10 = -VAR_0;
  goto out;
 }

 if (((void*)0) == VAR_3) {
  VAR_10 = FUNC_1();
  if (VAR_10)
   goto out;
 }

 FUNC_6(&VAR_3->li_list_mtx);
 FUNC_5(&VAR_8->lr_request, &VAR_3->li_request_list);
 FUNC_7(&VAR_3->li_list_mtx);

 VAR_7->s_li_request = VAR_8;





 VAR_8 = ((void*)0);

 if (!(VAR_3->li_state & VAR_1)) {
  VAR_10 = FUNC_3();
  if (VAR_10)
   goto out;
 }
out:
 FUNC_7(&VAR_4);
 if (VAR_10)
  FUNC_4(VAR_8);
 return VAR_10;
}
