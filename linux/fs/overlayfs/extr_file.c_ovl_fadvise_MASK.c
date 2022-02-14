
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
struct fd {int file; } ;
struct cred {int dummy; } ;
typedef int loff_t ;
struct TYPE_2__ {int i_sb; } ;


 int FUNC_0 (struct fd) ;
 TYPE_1__* FUNC_1 (struct file*) ;
 struct cred* FUNC_2 (int ) ;
 int FUNC_3 (struct file*,struct fd*) ;
 int FUNC_4 (struct cred const*) ;
 int FUNC_5 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_0, loff_t VAR_1, loff_t VAR_2, int VAR_3)
{
 struct fd VAR_4;
 const struct cred *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_3(VAR_0, &VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_5 = FUNC_2(FUNC_1(VAR_0)->i_sb);
 VAR_6 = FUNC_5(VAR_4.file, VAR_1, VAR_2, VAR_3);
 FUNC_4(VAR_5);

 FUNC_0(VAR_4);

 return VAR_6;
}
