
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct inode*,char*,void*,size_t) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int,int ) ;
 int FUNC_3 (char*,char const*) ;

ssize_t FUNC_4(struct inode *VAR_4, const char *VAR_5,
    void *VAR_6, size_t VAR_7,
    const char *VAR_8, size_t VAR_9)
{
 int VAR_10;
 char *VAR_11;

 VAR_11 = FUNC_2(VAR_3 * VAR_2 + 1,
        VAR_1);
 if (!VAR_11)
  return -VAR_0;

 FUNC_3(VAR_11, VAR_8);
 FUNC_3(VAR_11 + VAR_9, VAR_5);

 VAR_10 = FUNC_0(VAR_4, VAR_11, VAR_6, VAR_7);
 FUNC_1(VAR_11);
 return VAR_10;

}
