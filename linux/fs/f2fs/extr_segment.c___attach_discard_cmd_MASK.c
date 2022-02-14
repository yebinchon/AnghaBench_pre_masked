
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rb_node {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
struct discard_cmd_control {int root; } ;
struct discard_cmd {int rb_node; } ;
struct block_device {int dummy; } ;
typedef int block_t ;
struct TYPE_2__ {struct discard_cmd_control* dcc_info; } ;


 TYPE_1__* FUNC_0 (struct f2fs_sb_info*) ;
 struct discard_cmd* FUNC_1 (struct f2fs_sb_info*,struct block_device*,int ,int ,int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,struct rb_node*,struct rb_node**) ;

__attribute__((used)) static struct discard_cmd *FUNC_4(struct f2fs_sb_info *VAR_0,
    struct block_device *VAR_1, block_t VAR_2,
    block_t VAR_3, block_t VAR_4,
    struct rb_node *VAR_5, struct rb_node **VAR_6,
    bool VAR_7)
{
 struct discard_cmd_control *VAR_8 = FUNC_0(VAR_0)->dcc_info;
 struct discard_cmd *VAR_9;

 VAR_9 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);

 FUNC_3(&VAR_9->rb_node, VAR_5, VAR_6);
 FUNC_2(&VAR_9->rb_node, &VAR_8->root, VAR_7);

 return VAR_9;
}
