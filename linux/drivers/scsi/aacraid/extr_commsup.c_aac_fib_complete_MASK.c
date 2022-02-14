
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int XferState; scalar_t__ StructType; } ;
struct hw_fib {TYPE_1__ header; } ;
struct fib {int flags; int done; struct hw_fib* hw_fib_va; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct fib*) ;

int FUNC_3(struct fib *VAR_8)
{
 struct hw_fib * VAR_9 = VAR_8->hw_fib_va;

 if (VAR_8->flags & VAR_2) {
  FUNC_2(VAR_8);
  return 0;
 }






 if (VAR_9->header.XferState == 0 || VAR_8->done == 2)
  return 0;




 if (VAR_9->header.StructType != VAR_3 &&
     VAR_9->header.StructType != VAR_4 &&
     VAR_9->header.StructType != VAR_5)
  return -VAR_1;







 if((VAR_9->header.XferState & FUNC_1(VAR_7)) &&
  (VAR_9->header.XferState & FUNC_1(VAR_0)))
 {
  FUNC_2(VAR_8);
 }
 else if(VAR_9->header.XferState & FUNC_1(VAR_7))
 {




  FUNC_2(VAR_8);
 } else if(VAR_9->header.XferState & FUNC_1(VAR_6)) {
  FUNC_2(VAR_8);
 } else {
  FUNC_0();
 }
 return 0;
}
