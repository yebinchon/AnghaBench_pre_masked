
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hl_device*,int) ;

int FUNC_1(struct hl_device *VAR_2)
{
 int VAR_3, VAR_4, VAR_5 = 0;

 for (VAR_3 = 0 ; VAR_3 < VAR_1 ; VAR_3++) {
  VAR_4 = FUNC_0(VAR_2, VAR_3);
  if (VAR_4)
   VAR_5 = -VAR_0;
 }

 return VAR_5;
}
