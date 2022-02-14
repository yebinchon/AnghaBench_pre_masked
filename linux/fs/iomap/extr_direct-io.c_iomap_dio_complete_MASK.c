
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kiocb {int ki_pos; int ki_filp; } ;
struct iomap_dio_ops {scalar_t__ (* end_io ) (struct kiocb*,scalar_t__,scalar_t__,int) ;} ;
struct iomap_dio {scalar_t__ error; scalar_t__ size; int flags; scalar_t__ i_size; struct kiocb* iocb; struct iomap_dio_ops* dops; } ;
struct inode {TYPE_1__* i_mapping; } ;
typedef scalar_t__ ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {scalar_t__ nrpages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct inode* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct kiocb*,scalar_t__) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (TYPE_1__*,int,int) ;
 int FUNC_5 (struct iomap_dio*) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (struct kiocb*,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static ssize_t FUNC_8(struct iomap_dio *VAR_3)
{
 const struct iomap_dio_ops *VAR_4 = VAR_3->dops;
 struct kiocb *VAR_5 = VAR_3->iocb;
 struct inode *VAR_6 = FUNC_1(VAR_5->ki_filp);
 loff_t VAR_7 = VAR_5->ki_pos;
 ssize_t VAR_8 = VAR_3->error;

 if (VAR_4 && VAR_4->end_io)
  VAR_8 = VAR_4->end_io(VAR_5, VAR_3->size, VAR_8, VAR_3->flags);

 if (FUNC_6(!VAR_8)) {
  VAR_8 = VAR_3->size;

  if (VAR_7 + VAR_8 > VAR_3->i_size &&
      !(VAR_3->flags & VAR_1))
   VAR_8 = VAR_3->i_size - VAR_7;
  VAR_5->ki_pos += VAR_8;
 }
 if (!VAR_3->error &&
     (VAR_3->flags & VAR_1) && VAR_6->i_mapping->nrpages) {
  int VAR_9;
  VAR_9 = FUNC_4(VAR_6->i_mapping,
    VAR_7 >> VAR_2,
    (VAR_7 + VAR_3->size - 1) >> VAR_2);
  if (VAR_9)
   FUNC_0(VAR_5->ki_filp);
 }





 if (VAR_8 > 0 && (VAR_3->flags & VAR_0))
  VAR_8 = FUNC_2(VAR_5, VAR_8);

 FUNC_3(FUNC_1(VAR_5->ki_filp));
 FUNC_5(VAR_3);

 return VAR_8;
}
