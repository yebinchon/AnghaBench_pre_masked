
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct inode*,int) ;
 int FUNC_2 (struct inode*,int,int,int ,int ,int*) ;

int FUNC_3(struct inode *VAR_6, int VAR_7, int VAR_8,
        bool VAR_9, int *VAR_10)
{
 int VAR_11;

 FUNC_0(VAR_7 & ~VAR_2);
 FUNC_0(VAR_8 & ~(VAR_0|VAR_1|VAR_3));
 VAR_11 = FUNC_1(VAR_6, VAR_7);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_2(VAR_6, VAR_7, VAR_8, 0,
          (VAR_9 ? VAR_5 : 0), VAR_10);
 return VAR_11 == -VAR_4 ? 0 : VAR_11;
}
