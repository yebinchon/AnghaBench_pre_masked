
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {int i_ctime; int i_mtime; } ;
struct file_id_t {int attr; } ;
struct file {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {struct file_id_t fid; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct address_space*,scalar_t__) ;
 int FUNC_3 (struct file*,struct address_space*,scalar_t__,unsigned int,unsigned int,struct page*,void*) ;
 int FUNC_4 (struct inode*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_1, struct address_space *VAR_2,
      loff_t VAR_3, unsigned int VAR_4, unsigned int VAR_5,
      struct page *VAR_6, void *VAR_7)
{
 struct inode *VAR_8 = VAR_2->host;
 struct file_id_t *VAR_9 = &(FUNC_0(VAR_8)->fid);
 int VAR_10;

 VAR_10 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

 if (VAR_10 < VAR_4)
  FUNC_2(VAR_2, VAR_3 + VAR_4);

 if (!(VAR_10 < 0) && !(VAR_9->attr & VAR_0)) {
  VAR_8->i_mtime = VAR_8->i_ctime = FUNC_1(VAR_8);
  VAR_9->attr |= VAR_0;
  FUNC_4(VAR_8);
 }
 return VAR_10;
}
