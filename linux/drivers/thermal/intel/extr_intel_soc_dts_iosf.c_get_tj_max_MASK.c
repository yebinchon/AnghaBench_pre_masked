
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int*,int*) ;

__attribute__((used)) static int FUNC_1(u32 *VAR_2)
{
 u32 VAR_3, VAR_4;
 u32 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_1, &VAR_3, &VAR_4);
 if (VAR_6)
  goto err_ret;
 else {
  VAR_5 = (VAR_3 >> 16) & 0xff;
  if (VAR_5)
   *VAR_2 = VAR_5 * 1000;
  else {
   VAR_6 = -VAR_0;
   goto err_ret;
  }
 }

 return 0;
err_ret:
 *VAR_2 = 0;

 return VAR_6;
}
