
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct writeback_control {int dummy; } ;
struct page {int dummy; } ;
struct nfs_pageio_descriptor {int pg_error; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*,struct writeback_control*,struct nfs_pageio_descriptor*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (struct nfs_pageio_descriptor*) ;
 int FUNC_4 (struct nfs_pageio_descriptor*,struct inode*,int ,int,int *) ;
 TYPE_1__* FUNC_5 (struct page*) ;

__attribute__((used)) static int FUNC_6(struct page *VAR_2,
    struct writeback_control *VAR_3)
{
 struct nfs_pageio_descriptor VAR_4;
 struct inode *VAR_5 = FUNC_5(VAR_2)->host;
 int VAR_6;

 FUNC_2(VAR_5, VAR_0);
 FUNC_4(&VAR_4, VAR_5, 0,
    0, &VAR_1);
 VAR_6 = FUNC_0(VAR_2, VAR_3, &VAR_4);
 VAR_4.pg_error = 0;
 FUNC_3(&VAR_4);
 if (VAR_6 < 0)
  return VAR_6;
 if (FUNC_1(VAR_4.pg_error))
  return VAR_4.pg_error;
 return 0;
}
