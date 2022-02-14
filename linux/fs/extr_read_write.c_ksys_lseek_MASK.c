
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd {int file; } ;
typedef scalar_t__ off_t ;
typedef scalar_t__ loff_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 struct fd FUNC_0 (unsigned int) ;
 int FUNC_1 (struct fd) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,unsigned int) ;

off_t FUNC_3(unsigned int VAR_4, off_t VAR_5, unsigned int VAR_6)
{
 off_t VAR_7;
 struct fd VAR_8 = FUNC_0(VAR_4);
 if (!VAR_8.file)
  return -VAR_0;

 VAR_7 = -VAR_1;
 if (VAR_6 <= VAR_3) {
  loff_t VAR_9 = FUNC_2(VAR_8.file, VAR_5, VAR_6);
  VAR_7 = VAR_9;
  if (VAR_9 != (loff_t)VAR_7)
   VAR_7 = -VAR_2;
 }
 FUNC_1(VAR_8);
 return VAR_7;
}
