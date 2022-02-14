
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,struct inode*,struct inode*,int *,struct buffer_head*,int *,int *) ;
 int FUNC_3 (struct inode*,struct inode*,struct qstr const*,int *) ;
 int FUNC_4 (struct inode*,struct buffer_head**,int ) ;
 int FUNC_5 (struct inode*,int ) ;

int FUNC_6(struct inode *VAR_0,
    struct inode *VAR_1,
    const struct qstr *VAR_2)
{
 int VAR_3 = 0;
 struct buffer_head *VAR_4 = ((void*)0);

 VAR_3 = FUNC_3(VAR_1, VAR_0, VAR_2, ((void*)0));
 if (VAR_3) {
  FUNC_1(VAR_3);
  goto leave;
 }

 VAR_3 = FUNC_4(VAR_0, &VAR_4, 0);
 if (VAR_3) {
  FUNC_1(VAR_3);
  goto leave;
 }
 VAR_3 = FUNC_2(((void*)0), VAR_1, VAR_0, ((void*)0), VAR_4, ((void*)0), ((void*)0));
 if (VAR_3)
  FUNC_1(VAR_3);

 FUNC_5(VAR_0, 0);
 FUNC_0(VAR_4);
leave:
 return VAR_3;
}
