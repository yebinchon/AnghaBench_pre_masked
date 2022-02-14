
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wait; } ;
struct z_erofs_unzip_io {int pending_bios; TYPE_1__ u; } ;
struct z_erofs_collector {int owned_head; } ;
struct super_block {int dummy; } ;
struct list_head {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct super_block*,int ,struct list_head*,struct z_erofs_unzip_io*,int) ;
 int FUNC_3 (struct super_block*,struct z_erofs_unzip_io*,struct list_head*) ;

__attribute__((used)) static void FUNC_4(struct super_block *VAR_3,
         struct z_erofs_collector *VAR_4,
         struct list_head *VAR_5,
         bool VAR_6)
{
 struct z_erofs_unzip_io VAR_7[VAR_2];

 if (!FUNC_2(VAR_3, VAR_4->owned_head,
        VAR_5, VAR_7, VAR_6))
  return;


 FUNC_3(VAR_3, &VAR_7[VAR_0], VAR_5);

 if (!VAR_6)
  return;


 FUNC_1(VAR_7[VAR_1].u.wait,
     !FUNC_0(&VAR_7[VAR_1].pending_bios));


 FUNC_3(VAR_3, &VAR_7[VAR_1], VAR_5);
}
