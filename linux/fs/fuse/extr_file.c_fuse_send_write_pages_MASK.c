
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct page {int index; } ;
struct kiocb {struct file* ki_filp; } ;
struct inode {int dummy; } ;
struct TYPE_7__ {size_t size; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_8__ {TYPE_3__ out; TYPE_1__ in; } ;
struct fuse_args_pages {unsigned int num_pages; struct page** pages; TYPE_2__* descs; int args; } ;
struct fuse_io_args {TYPE_4__ write; struct fuse_args_pages ap; } ;
struct fuse_file {struct fuse_conn* fc; } ;
struct fuse_conn {int dummy; } ;
struct file {struct fuse_file* private_data; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_6__ {unsigned int offset; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct fuse_conn*,int *) ;
 int FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (struct fuse_io_args*,struct fuse_file*,int ,size_t) ;
 int FUNC_4 (struct kiocb*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;

__attribute__((used)) static ssize_t FUNC_7(struct fuse_io_args *VAR_1,
         struct kiocb *VAR_2, struct inode *VAR_3,
         loff_t VAR_4, size_t VAR_5)
{
 struct fuse_args_pages *VAR_6 = &VAR_1->ap;
 struct file *VAR_7 = VAR_2->ki_filp;
 struct fuse_file *VAR_8 = VAR_7->private_data;
 struct fuse_conn *VAR_9 = VAR_8->fc;
 unsigned int VAR_10, VAR_11;
 int VAR_12;

 for (VAR_11 = 0; VAR_11 < VAR_6->num_pages; VAR_11++)
  FUNC_2(VAR_3, VAR_6->pages[VAR_11]->index);

 FUNC_3(VAR_1, VAR_8, VAR_4, VAR_5);
 VAR_1->write.in.flags = FUNC_4(VAR_2);

 VAR_12 = FUNC_1(VAR_9, &VAR_6->args);

 VAR_10 = VAR_6->descs[0].offset;
 VAR_5 = VAR_1->write.out.size;
 for (VAR_11 = 0; VAR_11 < VAR_6->num_pages; VAR_11++) {
  struct page *VAR_13 = VAR_6->pages[VAR_11];

  if (!VAR_12 && !VAR_10 && VAR_5 >= VAR_0)
   FUNC_0(VAR_13);

  if (VAR_5 > VAR_0 - VAR_10)
   VAR_5 -= VAR_0 - VAR_10;
  else
   VAR_5 = 0;
  VAR_10 = 0;

  FUNC_6(VAR_13);
  FUNC_5(VAR_13);
 }

 return VAR_12;
}
