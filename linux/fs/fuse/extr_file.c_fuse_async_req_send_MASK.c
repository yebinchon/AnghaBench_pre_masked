
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fuse_io_priv {size_t size; int lock; int reqs; int refcnt; } ;
struct TYPE_4__ {int end; } ;
struct TYPE_3__ {TYPE_2__ args; } ;
struct fuse_io_args {TYPE_1__ ap; struct fuse_io_priv* io; } ;
struct fuse_conn {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (struct fuse_conn*,TYPE_2__*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ssize_t FUNC_4(struct fuse_conn *VAR_2,
       struct fuse_io_args *VAR_3, size_t VAR_4)
{
 ssize_t VAR_5;
 struct fuse_io_priv *VAR_6 = VAR_3->io;

 FUNC_2(&VAR_6->lock);
 FUNC_1(&VAR_6->refcnt);
 VAR_6->size += VAR_4;
 VAR_6->reqs++;
 FUNC_3(&VAR_6->lock);

 VAR_3->ap.args.end = VAR_1;
 VAR_5 = FUNC_0(VAR_2, &VAR_3->ap.args, VAR_0);

 return VAR_5 ?: VAR_4;
}
