
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct list_head {int dummy; } ;
struct ext4_group_desc {int dummy; } ;
typedef scalar_t__ ext4_group_t ;
struct TYPE_2__ {scalar_t__ s_groups_count; int s_itb_per_group; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct list_head*) ;
 int FUNC_2 (struct super_block*,struct ext4_group_desc*) ;
 struct ext4_group_desc* FUNC_3 (struct super_block*,scalar_t__,int *) ;
 int VAR_4 ;
 int FUNC_4 (struct list_head*,int ,int,int ) ;
 int FUNC_5 (struct super_block*,scalar_t__,struct list_head*) ;
 int FUNC_6 (struct list_head*) ;
 int FUNC_7 (struct list_head*) ;
 int FUNC_8 (struct super_block*,struct ext4_group_desc*) ;
 int FUNC_9 (struct super_block*,struct ext4_group_desc*) ;
 int FUNC_10 (int *,struct list_head*,int ) ;

__attribute__((used)) static int FUNC_11(struct super_block *VAR_5,
          struct list_head *VAR_6)
{
 struct ext4_group_desc *VAR_7;
 ext4_group_t VAR_8;
 int VAR_9;

 FUNC_1(VAR_6);


 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_5)->s_groups_count; VAR_8++) {
  VAR_7 = FUNC_3(VAR_5, VAR_8, ((void*)0));
  if (!VAR_7) {
   VAR_9 = -VAR_0;
   goto err;
  }


  VAR_9 = FUNC_5(VAR_5, VAR_8, VAR_6);
  if (VAR_9)
   goto err;


  VAR_9 = FUNC_4(VAR_6,
        FUNC_2(VAR_5, VAR_7), 1,
        VAR_1);
  if (VAR_9)
   goto err;


  VAR_9 = FUNC_4(VAR_6,
        FUNC_8(VAR_5, VAR_7), 1,
        VAR_2);
  if (VAR_9)
   goto err;


  VAR_9 = FUNC_4(VAR_6,
        FUNC_9(VAR_5, VAR_7),
        FUNC_0(VAR_5)->s_itb_per_group,
        VAR_3);
  if (VAR_9)
   goto err;
 }


 FUNC_10(((void*)0), VAR_6, VAR_4);


 FUNC_7(VAR_6);

 return 0;
err:
 FUNC_6(VAR_6);
 return VAR_9;
}
