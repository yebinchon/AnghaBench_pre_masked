
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int,int,int) ;
 int FUNC_6 (struct inode*,int) ;
 char* FUNC_7 (struct inode*) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_6, int VAR_7)
{
 char *VAR_8;
 int VAR_9 = 0, VAR_10 = 0, VAR_11 = 0, VAR_12;

 if (VAR_7 & VAR_3)
  return -VAR_0;

 if (VAR_7 & VAR_4) VAR_9 = 1;
 if (VAR_7 & VAR_5) VAR_10 = 1;
 if (VAR_7 & VAR_2) VAR_11 = 1;
 VAR_8 = FUNC_7(VAR_6);
 if (VAR_8 == ((void*)0))
  return -VAR_1;

 if (FUNC_1(VAR_6->i_mode) || FUNC_0(VAR_6->i_mode) ||
     FUNC_2(VAR_6->i_mode) || FUNC_3(VAR_6->i_mode))
  VAR_12 = 0;
 else
  VAR_12 = FUNC_5(VAR_8, VAR_9, VAR_10, VAR_11);
 FUNC_4(VAR_8);
 if (!VAR_12)
  VAR_12 = FUNC_6(VAR_6, VAR_7);
 return VAR_12;
}
