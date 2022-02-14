
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f2fs_sb_info {int dummy; } ;
struct discard_policy {int timeout; } ;
struct discard_cmd_control {int discard_cmd_cnt; int discard_granularity; } ;
struct TYPE_2__ {struct discard_cmd_control* dcc_info; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct f2fs_sb_info*) ;
 int VAR_1 ;
 int FUNC_1 (struct f2fs_sb_info*) ;
 int FUNC_2 (struct f2fs_sb_info*,struct discard_policy*,int ,int ) ;
 int FUNC_3 (struct f2fs_sb_info*,struct discard_policy*) ;
 int FUNC_4 (struct f2fs_sb_info*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct f2fs_sb_info*,int ) ;

bool FUNC_7(struct f2fs_sb_info *VAR_2)
{
 struct discard_cmd_control *VAR_3 = FUNC_0(VAR_2)->dcc_info;
 struct discard_policy VAR_4;
 bool VAR_5;

 FUNC_2(VAR_2, &VAR_4, VAR_0,
     VAR_3->discard_granularity);
 VAR_4.timeout = VAR_1;
 FUNC_3(VAR_2, &VAR_4);
 VAR_5 = FUNC_1(VAR_2);


 FUNC_4(VAR_2, ((void*)0));

 FUNC_6(VAR_2, FUNC_5(&VAR_3->discard_cmd_cnt));
 return VAR_5;
}
