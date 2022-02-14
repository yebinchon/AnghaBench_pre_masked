
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sit_info {int sentry_lock; } ;
struct f2fs_sb_info {int dummy; } ;
struct TYPE_4__ {TYPE_1__* v_ops; } ;
struct TYPE_3__ {int (* get_victim ) (struct f2fs_sb_info*,unsigned int*,int,int ,int ) ;} ;


 TYPE_2__* FUNC_0 (struct f2fs_sb_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct sit_info* FUNC_1 (struct f2fs_sb_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct f2fs_sb_info*,unsigned int*,int,int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct f2fs_sb_info *VAR_2, unsigned int *VAR_3,
   int VAR_4)
{
 struct sit_info *VAR_5 = FUNC_1(VAR_2);
 int VAR_6;

 FUNC_2(&VAR_5->sentry_lock);
 VAR_6 = FUNC_0(VAR_2)->v_ops->get_victim(VAR_2, VAR_3, VAR_4,
           VAR_1, VAR_0);
 FUNC_4(&VAR_5->sentry_lock);
 return VAR_6;
}
