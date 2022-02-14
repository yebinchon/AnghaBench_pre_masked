
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd {scalar_t__ file; } ;


 int VAR_0 ;
 struct fd FUNC_0 (unsigned int) ;
 int FUNC_1 (struct fd) ;
 int FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_1, int VAR_2)
{
 struct fd VAR_3 = FUNC_0(VAR_1);
 int VAR_4 = -VAR_0;

 if (VAR_3.file) {
  VAR_4 = FUNC_2(VAR_3.file, VAR_2);
  FUNC_1(VAR_3);
 }
 return VAR_4;
}
