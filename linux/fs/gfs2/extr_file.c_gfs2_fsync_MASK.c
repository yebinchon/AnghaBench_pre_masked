
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_state; } ;
struct gfs2_inode {int i_gl; } ;
struct file {struct address_space* f_mapping; } ;
struct address_space {scalar_t__ nrpages; struct inode* host; } ;
typedef int loff_t ;


 int VAR_0 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct file*,int ,int ) ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (struct address_space*,int ,int ) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (struct gfs2_inode*) ;
 int FUNC_6 (struct inode*,int) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_5, loff_t VAR_6, loff_t VAR_7,
        int VAR_8)
{
 struct address_space *VAR_9 = VAR_5->f_mapping;
 struct inode *VAR_10 = VAR_9->host;
 int VAR_11 = VAR_10->i_state & VAR_1;
 struct gfs2_inode *VAR_12 = FUNC_0(VAR_10);
 int VAR_13 = 0, VAR_14 = 0;

 if (VAR_9->nrpages) {
  VAR_14 = FUNC_3(VAR_9, VAR_6, VAR_7);
  if (VAR_14 == -VAR_0)
   return VAR_14;
 }

 if (!FUNC_5(VAR_12))
  VAR_11 &= ~VAR_2;
 if (VAR_8)
  VAR_11 &= ~(VAR_3 | VAR_4);

 if (VAR_11) {
  VAR_13 = FUNC_6(VAR_10, 1);
  if (VAR_13)
   return VAR_13;
  if (FUNC_5(VAR_12))
   VAR_13 = FUNC_2(VAR_5);
  if (VAR_13)
   return VAR_13;
  FUNC_4(VAR_12->i_gl, 1);
 }

 if (VAR_9->nrpages)
  VAR_13 = FUNC_1(VAR_5, VAR_6, VAR_7);

 return VAR_13 ? VAR_13 : VAR_14;
}
