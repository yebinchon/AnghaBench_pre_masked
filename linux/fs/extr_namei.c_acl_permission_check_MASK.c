
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {unsigned int i_mode; int i_gid; int i_uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_1 (struct inode*,int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_6, int VAR_7)
{
 unsigned int VAR_8 = VAR_6->i_mode;

 if (FUNC_4(FUNC_5(FUNC_2(), VAR_6->i_uid)))
  VAR_8 >>= 6;
 else {
  if (FUNC_0(VAR_6) && (VAR_8 & VAR_5)) {
   int VAR_9 = FUNC_1(VAR_6, VAR_7);
   if (VAR_9 != -VAR_1)
    return VAR_9;
  }

  if (FUNC_3(VAR_6->i_gid))
   VAR_8 >>= 3;
 }




 if ((VAR_7 & ~VAR_8 & (VAR_3 | VAR_4 | VAR_2)) == 0)
  return 0;
 return -VAR_0;
}
