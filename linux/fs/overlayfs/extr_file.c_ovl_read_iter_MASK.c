
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kiocb {int ki_pos; struct file* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct file {int dummy; } ;
struct fd {int file; } ;
struct cred {int dummy; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_2__ {int i_sb; } ;


 int FUNC_0 (struct fd) ;
 TYPE_1__* FUNC_1 (struct file*) ;
 int FUNC_2 (struct iov_iter*) ;
 int FUNC_3 (struct file*) ;
 int FUNC_4 (struct kiocb*) ;
 struct cred* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct file*,struct fd*) ;
 int FUNC_7 (struct cred const*) ;
 scalar_t__ FUNC_8 (int ,struct iov_iter*,int *,int ) ;

__attribute__((used)) static ssize_t FUNC_9(struct kiocb *VAR_0, struct iov_iter *VAR_1)
{
 struct file *VAR_2 = VAR_0->ki_filp;
 struct fd VAR_3;
 const struct cred *VAR_4;
 ssize_t VAR_5;

 if (!FUNC_2(VAR_1))
  return 0;

 VAR_5 = FUNC_6(VAR_2, &VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_4 = FUNC_5(FUNC_1(VAR_2)->i_sb);
 VAR_5 = FUNC_8(VAR_3.file, VAR_1, &VAR_0->ki_pos,
       FUNC_4(VAR_0));
 FUNC_7(VAR_4);

 FUNC_3(VAR_2);

 FUNC_0(VAR_3);

 return VAR_5;
}
