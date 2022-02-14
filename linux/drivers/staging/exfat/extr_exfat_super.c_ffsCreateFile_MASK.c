
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct uni_name_t {int dummy; } ;
struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct fs_info_t {int v_sem; scalar_t__ dev_ejected; } ;
struct file_id_t {int dummy; } ;
struct chain_t {int dummy; } ;
struct TYPE_2__ {struct fs_info_t fs_info; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct inode*,struct chain_t*,struct uni_name_t*,int ,struct file_id_t*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct super_block*,int ) ;
 int FUNC_4 (struct super_block*,int) ;
 int FUNC_5 (struct inode*,char*,struct chain_t*,struct uni_name_t*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_4, char *VAR_5, u8 VAR_6,
    struct file_id_t *VAR_7)
{
 struct chain_t VAR_8;
 struct uni_name_t VAR_9;
 struct super_block *VAR_10 = VAR_4->i_sb;
 struct fs_info_t *VAR_11 = &(FUNC_0(VAR_10)->fs_info);
 int VAR_12;


 if (!VAR_7 || !VAR_5 || (*VAR_5 == '\0'))
  return VAR_0;


 FUNC_2(&VAR_11->v_sem);


 VAR_12 = FUNC_5(VAR_4, VAR_5, &VAR_8, &VAR_9);
 if (VAR_12)
  goto out;

 FUNC_3(VAR_10, VAR_3);


 VAR_12 = FUNC_1(VAR_4, &VAR_8, &VAR_9, VAR_6, VAR_7);






 if (VAR_11->dev_ejected)
  VAR_12 = VAR_1;

out:

 FUNC_6(&VAR_11->v_sem);

 return VAR_12;
}
