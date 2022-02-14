
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct the_nilfs {int ns_sem; int ns_ndirtyblks; } ;
struct nilfs_super_block {int dummy; } ;
struct nilfs_sc_info {TYPE_1__* sc_super; int sc_flags; } ;
struct TYPE_3__ {struct the_nilfs* s_fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_4 (struct the_nilfs*) ;
 struct nilfs_super_block** FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (struct the_nilfs*) ;
 int FUNC_7 (struct nilfs_sc_info*) ;
 int FUNC_8 (struct nilfs_sc_info*) ;
 int FUNC_9 (struct nilfs_sc_info*,int) ;
 int FUNC_10 (struct nilfs_sc_info*,int,int) ;
 int FUNC_11 (struct nilfs_super_block*,struct the_nilfs*) ;
 scalar_t__ FUNC_12 (int ,int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct nilfs_sc_info *VAR_5, int VAR_6)
{
 struct the_nilfs *VAR_7 = VAR_5->sc_super->s_fs_info;
 struct nilfs_super_block **VAR_8;
 int VAR_9 = 0;

 FUNC_7(VAR_5);

 if (FUNC_4(VAR_7))
  VAR_6 = VAR_4;
 if (!FUNC_8(VAR_5))
  VAR_9 = FUNC_9(VAR_5, VAR_6);

 if (FUNC_2(!VAR_9)) {
  if (VAR_6 != VAR_3)
   FUNC_0(&VAR_7->ns_ndirtyblks, 0);
  if (FUNC_12(VAR_2, &VAR_5->sc_flags) &&
      FUNC_4(VAR_7)) {
   FUNC_1(&VAR_7->ns_sem);
   VAR_9 = -VAR_0;
   VAR_8 = FUNC_5(VAR_5->sc_super,
        FUNC_6(VAR_7));
   if (FUNC_2(VAR_8)) {
    FUNC_11(VAR_8[0], VAR_7);
    VAR_9 = FUNC_3(VAR_5->sc_super,
        VAR_1);
   }
   FUNC_13(&VAR_7->ns_sem);
  }
 }

 FUNC_10(VAR_5, VAR_6, VAR_9);
 return VAR_9;
}
