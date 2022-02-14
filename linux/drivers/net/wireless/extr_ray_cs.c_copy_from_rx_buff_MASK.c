
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rmem; } ;
typedef TYPE_1__ ray_dev_t ;
typedef int UCHAR ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__,int) ;

__attribute__((used)) static int FUNC_1(ray_dev_t *VAR_1, UCHAR *VAR_2, int VAR_3,
        int VAR_4)
{
 int VAR_5 = (VAR_3 + VAR_4) - (VAR_0 + 1);
 if (VAR_5 <= 0) {
  FUNC_0(VAR_2, VAR_1->rmem + VAR_3, VAR_4);
 } else {

  FUNC_0(VAR_2, VAR_1->rmem + VAR_3,
         VAR_4 - VAR_5);
  FUNC_0(VAR_2 + VAR_4 - VAR_5, VAR_1->rmem,
         VAR_5);
 }
 return VAR_4;
}
