
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
struct fd {int file; } ;
struct cred {int dummy; } ;
struct TYPE_2__ {int i_sb; } ;


 int FUNC_0 (struct fd) ;
 TYPE_1__* FUNC_1 (struct file*) ;
 struct cred* FUNC_2 (int ) ;
 long FUNC_3 (struct file*,struct fd*) ;
 int FUNC_4 (struct cred const*) ;
 long FUNC_5 (int ,unsigned int,unsigned long) ;

__attribute__((used)) static long FUNC_6(struct file *VAR_0, unsigned int VAR_1,
      unsigned long VAR_2)
{
 struct fd VAR_3;
 const struct cred *VAR_4;
 long VAR_5;

 VAR_5 = FUNC_3(VAR_0, &VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_4 = FUNC_2(FUNC_1(VAR_0)->i_sb);
 VAR_5 = FUNC_5(VAR_3.file, VAR_1, VAR_2);
 FUNC_4(VAR_4);

 FUNC_0(VAR_3);

 return VAR_5;
}
