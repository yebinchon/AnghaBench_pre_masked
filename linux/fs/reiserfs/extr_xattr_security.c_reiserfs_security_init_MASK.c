
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reiserfs_security_handle {scalar_t__ length; int * value; int * name; } ;
struct qstr {int dummy; } ;
struct inode {int i_sb; } ;
struct TYPE_2__ {int i_flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct inode*,struct inode*,struct qstr const*,int **,int **,scalar_t__*) ;

int FUNC_6(struct inode *VAR_2, struct inode *VAR_3,
      const struct qstr *VAR_4,
      struct reiserfs_security_handle *VAR_5)
{
 int VAR_6 = 0;
 int VAR_7;

 VAR_5->name = ((void*)0);


 if (FUNC_0(VAR_2))
  return 0;

 VAR_7 = FUNC_5(VAR_3, VAR_2, VAR_4, &VAR_5->name,
       &VAR_5->value, &VAR_5->length);
 if (VAR_7) {
  if (VAR_7 == -VAR_0)
   VAR_7 = 0;

  VAR_5->name = ((void*)0);
  VAR_5->value = ((void*)0);
  VAR_5->length = 0;
  return VAR_7;
 }

 if (VAR_5->length && FUNC_4(VAR_3->i_sb)) {
  VAR_6 = FUNC_2(VAR_3) +
    FUNC_3(VAR_3, VAR_5->length);


  FUNC_1(VAR_3)->i_flags |= VAR_1;
 }
 return VAR_6;
}
