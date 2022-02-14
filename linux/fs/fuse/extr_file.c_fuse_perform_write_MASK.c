
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kiocb {int dummy; } ;
struct iov_iter {int dummy; } ;
struct inode {scalar_t__ i_size; } ;
struct TYPE_3__ {size_t size; } ;
struct TYPE_4__ {TYPE_1__ out; } ;
struct fuse_args_pages {int pages; int descs; } ;
struct fuse_io_args {TYPE_2__ write; struct fuse_args_pages ap; } ;
struct fuse_inode {int state; } ;
struct fuse_conn {int max_pages; } ;
struct address_space {struct inode* host; } ;
typedef size_t ssize_t ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 size_t FUNC_1 (struct fuse_args_pages*,struct address_space*,struct iov_iter*,scalar_t__,unsigned int) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (unsigned int,int ,int *) ;
 int FUNC_4 (struct fuse_io_args*,struct kiocb*,struct inode*,scalar_t__,size_t) ;
 unsigned int FUNC_5 (scalar_t__,scalar_t__,int ) ;
 int FUNC_6 (struct inode*,scalar_t__) ;
 struct fuse_conn* FUNC_7 (struct inode*) ;
 struct fuse_inode* FUNC_8 (struct inode*) ;
 scalar_t__ FUNC_9 (struct iov_iter*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int *) ;

__attribute__((used)) static ssize_t FUNC_12(struct kiocb *VAR_4,
      struct address_space *VAR_5,
      struct iov_iter *VAR_6, loff_t VAR_7)
{
 struct inode *VAR_8 = VAR_5->host;
 struct fuse_conn *VAR_9 = FUNC_7(VAR_8);
 struct fuse_inode *VAR_10 = FUNC_8(VAR_8);
 int VAR_11 = 0;
 ssize_t VAR_12 = 0;

 if (VAR_8->i_size < VAR_7 + FUNC_9(VAR_6))
  FUNC_11(VAR_2, &VAR_10->state);

 do {
  ssize_t VAR_13;
  struct fuse_io_args VAR_14 = {};
  struct fuse_args_pages *VAR_15 = &VAR_14.ap;
  unsigned int VAR_16 = FUNC_5(VAR_7, FUNC_9(VAR_6),
            VAR_9->max_pages);

  VAR_15->pages = FUNC_3(VAR_16, VAR_3, &VAR_15->descs);
  if (!VAR_15->pages) {
   VAR_11 = -VAR_1;
   break;
  }

  VAR_13 = FUNC_1(VAR_15, VAR_5, VAR_6, VAR_7, VAR_16);
  if (VAR_13 <= 0) {
   VAR_11 = VAR_13;
  } else {
   VAR_11 = FUNC_4(&VAR_14, VAR_4, VAR_8,
          VAR_7, VAR_13);
   if (!VAR_11) {
    size_t VAR_17 = VAR_14.write.out.size;

    VAR_12 += VAR_17;
    VAR_7 += VAR_17;


    if (VAR_17 != VAR_13)
     VAR_11 = -VAR_0;
   }
  }
  FUNC_10(VAR_15->pages);
 } while (!VAR_11 && FUNC_9(VAR_6));

 if (VAR_12 > 0)
  FUNC_6(VAR_8, VAR_7);

 FUNC_0(VAR_2, &VAR_10->state);
 FUNC_2(VAR_8);

 return VAR_12 > 0 ? VAR_12 : VAR_11;
}
