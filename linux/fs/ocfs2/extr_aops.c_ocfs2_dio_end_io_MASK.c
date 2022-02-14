
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiocb {int ki_filp; } ;
struct inode {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int loff_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct inode* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,long long) ;
 int FUNC_3 (struct inode*,void*,int ,scalar_t__) ;
 int FUNC_4 (struct inode*,void*) ;
 int FUNC_5 (struct kiocb*) ;
 int FUNC_6 (struct kiocb*) ;
 int FUNC_7 (struct kiocb*) ;
 int FUNC_8 (struct inode*,int) ;

__attribute__((used)) static int FUNC_9(struct kiocb *VAR_1,
       loff_t VAR_2,
       ssize_t VAR_3,
       void *VAR_4)
{
 struct inode *VAR_5 = FUNC_1(VAR_1->ki_filp);
 int VAR_6;
 int VAR_7 = 0;


 FUNC_0(!FUNC_6(VAR_1));

 if (VAR_3 <= 0)
  FUNC_2(VAR_0, "Direct IO failed, bytes = %lld",
     (long long)VAR_3);
 if (VAR_4) {
  if (VAR_3 > 0)
   VAR_7 = FUNC_3(VAR_5, VAR_4, VAR_2,
           VAR_3);
  else
   FUNC_4(VAR_5, VAR_4);
 }

 FUNC_5(VAR_1);

 VAR_6 = FUNC_7(VAR_1);
 FUNC_8(VAR_5, VAR_6);
 return VAR_7;
}
