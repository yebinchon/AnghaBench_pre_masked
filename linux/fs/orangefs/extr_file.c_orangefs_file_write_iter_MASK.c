
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kiocb {scalar_t__ ki_pos; int ki_filp; } ;
struct iov_iter {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int writes; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct kiocb*,struct iov_iter*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static ssize_t FUNC_4(struct kiocb *VAR_1,
    struct iov_iter *VAR_2)
{
 int VAR_3;
 VAR_0.writes++;

 if (VAR_1->ki_pos > FUNC_2(FUNC_0(VAR_1->ki_filp))) {
  VAR_3 = FUNC_3(FUNC_0(VAR_1->ki_filp));
  if (VAR_3)
   return VAR_3;
 }

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 return VAR_3;
}
