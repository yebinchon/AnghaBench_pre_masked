
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd {int file; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned int,unsigned int,unsigned long) ;
 struct fd FUNC_1 (unsigned int) ;
 int FUNC_2 (struct fd) ;
 int FUNC_3 (int ,unsigned int,unsigned long) ;

int FUNC_4(unsigned int VAR_1, unsigned int VAR_2, unsigned long VAR_3)
{
 int VAR_4;
 struct fd VAR_5 = FUNC_1(VAR_1);

 if (!VAR_5.file)
  return -VAR_0;
 VAR_4 = FUNC_3(VAR_5.file, VAR_2, VAR_3);
 if (!VAR_4)
  VAR_4 = FUNC_0(VAR_5.file, VAR_1, VAR_2, VAR_3);
 FUNC_2(VAR_5);
 return VAR_4;
}
