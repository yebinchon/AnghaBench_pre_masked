
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct inode {int dummy; } ;
struct gfs2_sbd {int sd_flags; } ;
struct gfs2_inode {int i_gl; } ;
struct gfs2_holder {int dummy; } ;
struct file {int dummy; } ;
struct address_space {struct inode* host; } ;


 int VAR_0 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;
 struct gfs2_sbd* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct gfs2_holder*) ;
 int FUNC_3 (struct gfs2_holder*) ;
 int FUNC_4 (int ,int ,int ,struct gfs2_holder*) ;
 int FUNC_5 (struct gfs2_holder*) ;
 int FUNC_6 (struct gfs2_inode*) ;
 int FUNC_7 (struct address_space*,struct list_head*,unsigned int,int ) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct file *VAR_4, struct address_space *VAR_5,
     struct list_head *VAR_6, unsigned VAR_7)
{
 struct inode *VAR_8 = VAR_5->host;
 struct gfs2_inode *VAR_9 = FUNC_0(VAR_8);
 struct gfs2_sbd *VAR_10 = FUNC_1(VAR_8);
 struct gfs2_holder VAR_11;
 int VAR_12;

 FUNC_4(VAR_9->i_gl, VAR_1, 0, &VAR_11);
 VAR_12 = FUNC_3(&VAR_11);
 if (FUNC_9(VAR_12))
  goto out_uninit;
 if (!FUNC_6(VAR_9))
  VAR_12 = FUNC_7(VAR_5, VAR_6, VAR_7, VAR_3);
 FUNC_2(&VAR_11);
out_uninit:
 FUNC_5(&VAR_11);
 if (FUNC_9(FUNC_8(VAR_2, &VAR_10->sd_flags)))
  VAR_12 = -VAR_0;
 return VAR_12;
}
