
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acm {int rx_buflimit; } ;
typedef int gfp_t ;


 int FUNC_0 (struct acm*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct acm *VAR_0, gfp_t VAR_1)
{
 int VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->rx_buflimit; ++VAR_3) {
  VAR_2 = FUNC_0(VAR_0, VAR_3, VAR_1);
  if (VAR_2)
   return VAR_2;
 }

 return 0;
}
