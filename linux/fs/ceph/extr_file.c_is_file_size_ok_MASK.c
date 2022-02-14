
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct inode*,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__,size_t,scalar_t__) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct inode*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_2, struct inode *VAR_3,
      loff_t VAR_4, loff_t VAR_5, size_t VAR_6)
{
 loff_t VAR_7, VAR_8;

 VAR_7 = FUNC_2(VAR_2);






 if (VAR_4 + VAR_6 > VAR_7) {
  FUNC_1("Copy beyond EOF (%llu + %zu > %llu)\n",
       VAR_4, VAR_6, VAR_7);
  return -VAR_1;
 }
 VAR_7 = FUNC_2(VAR_3);

 VAR_8 = VAR_5 + VAR_6;
 if (FUNC_3(VAR_3, VAR_8))
  return -VAR_1;

 if (FUNC_0(VAR_3, VAR_8))
  return -VAR_0;

 return 0;
}
