
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct kiocb {int ki_filp; } ;
struct iov_iter {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {int i_sb; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct kiocb*,struct iov_iter*) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (struct kiocb*,struct iov_iter*) ;
 int FUNC_6 (struct iov_iter*) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static ssize_t FUNC_8(struct kiocb *VAR_1, struct iov_iter *VAR_2)
{
 if (FUNC_7(FUNC_3(FUNC_0(FUNC_4(VAR_1->ki_filp)->i_sb))))
  return -VAR_0;

 if (!FUNC_6(VAR_2))
  return 0;





 return FUNC_5(VAR_1, VAR_2);
}
