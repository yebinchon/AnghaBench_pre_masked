
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct cifs_tcon {int dummy; } ;
typedef int loff_t ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long FUNC_0 (struct file*,struct cifs_tcon*,int ,int ) ;
 long FUNC_1 (struct file*,struct cifs_tcon*,int ,int ,int) ;
 long FUNC_2 (struct file*,struct cifs_tcon*,int ,int ,int) ;

__attribute__((used)) static long FUNC_3(struct file *VAR_4, struct cifs_tcon *VAR_5, int VAR_6,
      loff_t VAR_7, loff_t VAR_8)
{

 if (VAR_6 & VAR_2)
  return FUNC_0(VAR_4, VAR_5, VAR_7, VAR_8);
 else if (VAR_6 & VAR_3) {
  if (VAR_6 & VAR_1)
   return FUNC_2(VAR_4, VAR_5, VAR_7, VAR_8, 1);
  return FUNC_2(VAR_4, VAR_5, VAR_7, VAR_8, 0);
 } else if (VAR_6 == VAR_1)
  return FUNC_1(VAR_4, VAR_5, VAR_7, VAR_8, 1);
 else if (VAR_6 == 0)
  return FUNC_1(VAR_4, VAR_5, VAR_7, VAR_8, 0);

 return -VAR_0;
}
