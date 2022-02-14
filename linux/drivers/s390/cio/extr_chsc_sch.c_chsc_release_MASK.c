
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int dummy; } ;
typedef int dbf ;
struct TYPE_5__ {int completion; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int * VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_10 (char*,int,char*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct inode *VAR_6, struct file *VAR_7)
{
 char VAR_8[13];
 int VAR_9;

 FUNC_8(&VAR_4);
 if (!VAR_3)
  goto out_unlock;
 FUNC_6(&VAR_5->completion);
 FUNC_0(0, "on_close");
 FUNC_4(VAR_3);
 FUNC_11(&VAR_1);
 VAR_9 = FUNC_2(VAR_3, VAR_5);
 FUNC_12(&VAR_1);
 if (VAR_9 == -VAR_0) {
  FUNC_13(&VAR_5->completion);
  VAR_9 = FUNC_3(VAR_5);
 }
 FUNC_10(VAR_8, sizeof(VAR_8), "relret:%d", VAR_9);
 FUNC_0(0, VAR_8);
 FUNC_5((unsigned long)VAR_3);
 VAR_3 = ((void*)0);
 FUNC_7(VAR_5);
 VAR_5 = ((void*)0);
out_unlock:
 FUNC_9(&VAR_4);
 FUNC_1(&VAR_2);
 return 0;
}
