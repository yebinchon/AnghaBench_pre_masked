
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct inode*,char*,void const*,size_t,int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int,int ) ;
 int FUNC_3 (char*,char const*) ;

int FUNC_4(struct inode *VAR_4, const char *VAR_5,
       const void *VAR_6, size_t VAR_7, int VAR_8,
       const char *VAR_9, size_t VAR_10)
{
 char *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_2(VAR_3 * VAR_2 + 1,
  VAR_1);
 if (!VAR_11)
  return -VAR_0;
 FUNC_3(VAR_11, VAR_9);
 FUNC_3(VAR_11 + VAR_10, VAR_5);
 VAR_12 = FUNC_0(VAR_4, VAR_11, VAR_6, VAR_7, VAR_8);
 FUNC_1(VAR_11);
 return VAR_12;
}
