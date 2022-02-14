
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {int dummy; } ;
struct nfs_pageio_descriptor {int pg_error; struct nfs_io_completion* pg_io_completion; } ;
struct nfs_io_completion {int dummy; } ;
struct inode {int dummy; } ;
struct address_space {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct inode*,int ) ;
 struct nfs_io_completion* FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (struct nfs_io_completion*,int ,struct inode*) ;
 int FUNC_4 (struct nfs_io_completion*) ;
 int FUNC_5 (struct nfs_pageio_descriptor*) ;
 int FUNC_6 (struct nfs_pageio_descriptor*,struct inode*,int ,int,int *) ;
 int VAR_4 ;
 int FUNC_7 (struct writeback_control*) ;
 int FUNC_8 (struct address_space*,struct writeback_control*,int ,struct nfs_pageio_descriptor*) ;

int FUNC_9(struct address_space *VAR_5, struct writeback_control *VAR_6)
{
 struct inode *VAR_7 = VAR_5->host;
 struct nfs_pageio_descriptor VAR_8;
 struct nfs_io_completion *VAR_9;
 int VAR_10;

 FUNC_1(VAR_7, VAR_1);

 VAR_9 = FUNC_2(VAR_0);
 if (VAR_9)
  FUNC_3(VAR_9, VAR_3, VAR_7);

 FUNC_6(&VAR_8, VAR_7, FUNC_7(VAR_6), 0,
    &VAR_2);
 VAR_8.pg_io_completion = VAR_9;
 VAR_10 = FUNC_8(VAR_5, VAR_6, VAR_4, &VAR_8);
 VAR_8.pg_error = 0;
 FUNC_5(&VAR_8);
 FUNC_4(VAR_9);

 if (VAR_10 < 0)
  goto out_err;
 VAR_10 = VAR_8.pg_error;
 if (FUNC_0(VAR_10))
  goto out_err;
 return 0;
out_err:
 return VAR_10;
}
