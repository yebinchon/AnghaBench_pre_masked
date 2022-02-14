
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kiocb {TYPE_1__* ki_filp; struct ffs_io_data* private; } ;
struct ffs_io_data {scalar_t__ req; scalar_t__ ep; } ;
struct ffs_epfile {TYPE_2__* ffs; } ;
struct TYPE_4__ {int eps_lock; } ;
struct TYPE_3__ {struct ffs_epfile* private_data; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct kiocb *VAR_1)
{
 struct ffs_io_data *VAR_2 = VAR_1->private;
 struct ffs_epfile *VAR_3 = VAR_1->ki_filp->private_data;
 int VAR_4;

 FUNC_0();

 FUNC_2(&VAR_3->ffs->eps_lock);

 if (FUNC_1(VAR_2 && VAR_2->ep && VAR_2->req))
  VAR_4 = FUNC_4(VAR_2->ep, VAR_2->req);
 else
  VAR_4 = -VAR_0;

 FUNC_3(&VAR_3->ffs->eps_lock);

 return VAR_4;
}
