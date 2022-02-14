
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
typedef int loff_t ;
typedef enum ovl_copyop { ____Placeholder_ovl_copyop } ovl_copyop ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*,int ,struct file*,int ,int ,unsigned int,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static loff_t FUNC_3(struct file *VAR_6, loff_t VAR_7,
       struct file *VAR_8, loff_t VAR_9,
       loff_t VAR_10, unsigned int VAR_11)
{
 enum ovl_copyop VAR_12;

 if (VAR_11 & ~(VAR_5 | VAR_4))
  return -VAR_0;

 if (VAR_11 & VAR_5)
  VAR_12 = VAR_3;
 else
  VAR_12 = VAR_2;





 if (VAR_12 == VAR_3 &&
     (!FUNC_2(FUNC_0(VAR_6)) ||
      !FUNC_2(FUNC_0(VAR_8))))
  return -VAR_1;

 return FUNC_1(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
       VAR_11, VAR_12);
}
