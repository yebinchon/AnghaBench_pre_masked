
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd {scalar_t__ file; } ;
typedef int loff_t ;


 int VAR_0 ;
 struct fd FUNC_0 (int) ;
 int FUNC_1 (struct fd) ;
 int FUNC_2 (scalar_t__,int,int ,int ) ;

int FUNC_3(int VAR_1, int VAR_2, loff_t VAR_3, loff_t VAR_4)
{
 struct fd VAR_5 = FUNC_0(VAR_1);
 int VAR_6 = -VAR_0;

 if (VAR_5.file) {
  VAR_6 = FUNC_2(VAR_5.file, VAR_2, VAR_3, VAR_4);
  FUNC_1(VAR_5);
 }
 return VAR_6;
}
