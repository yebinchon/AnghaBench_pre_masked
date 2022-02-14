
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd {scalar_t__ file; } ;
typedef int loff_t ;


 int VAR_0 ;
 struct fd FUNC_0 (int) ;
 int FUNC_1 (struct fd) ;
 int FUNC_2 (scalar_t__,int ,int ,unsigned int) ;

int FUNC_3(int VAR_1, loff_t VAR_2, loff_t VAR_3,
    unsigned int VAR_4)
{
 int VAR_5;
 struct fd VAR_6;

 VAR_5 = -VAR_0;
 VAR_6 = FUNC_0(VAR_1);
 if (VAR_6.file)
  VAR_5 = FUNC_2(VAR_6.file, VAR_2, VAR_3, VAR_4);

 FUNC_1(VAR_6);
 return VAR_5;
}
