
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_sc_info {int sc_datablk_cnt; } ;
struct nilfs_binfo_v {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {int i_bmap; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,struct buffer_head*) ;
 int FUNC_2 (struct nilfs_sc_info*,struct buffer_head*,struct inode*,int) ;

__attribute__((used)) static int FUNC_3(struct nilfs_sc_info *VAR_0,
       struct buffer_head *VAR_1, struct inode *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(FUNC_0(VAR_2)->i_bmap, VAR_1);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2,
        sizeof(struct nilfs_binfo_v));
 if (!VAR_3)
  VAR_0->sc_datablk_cnt++;
 return VAR_3;
}
