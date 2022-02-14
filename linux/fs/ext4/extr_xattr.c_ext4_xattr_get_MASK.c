
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct TYPE_2__ {int xattr_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct inode*,int,char const*,void*,size_t) ;
 int FUNC_5 (struct inode*,int,char const*,void*,size_t) ;
 int FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

int
FUNC_9(struct inode *VAR_3, int VAR_4, const char *VAR_5,
        void *VAR_6, size_t VAR_7)
{
 int VAR_8;

 if (FUNC_7(FUNC_3(FUNC_1(VAR_3->i_sb))))
  return -VAR_0;

 if (FUNC_6(VAR_5) > 255)
  return -VAR_2;

 FUNC_2(&FUNC_0(VAR_3)->xattr_sem);
 VAR_8 = FUNC_5(VAR_3, VAR_4, VAR_5, VAR_6,
         VAR_7);
 if (VAR_8 == -VAR_1)
  VAR_8 = FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6,
          VAR_7);
 FUNC_8(&FUNC_0(VAR_3)->xattr_sem);
 return VAR_8;
}
