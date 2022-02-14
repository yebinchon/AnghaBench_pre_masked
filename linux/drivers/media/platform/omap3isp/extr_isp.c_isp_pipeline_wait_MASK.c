
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp_device {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_1(struct isp_device *VAR_2,
        int(*VAR_3)(struct isp_device *VAR_4))
{
 unsigned long VAR_5 = VAR_1 + VAR_0;

 while (!FUNC_0(VAR_1, VAR_5)) {
  if (!VAR_3(VAR_2))
   return 0;
 }

 return 1;
}
