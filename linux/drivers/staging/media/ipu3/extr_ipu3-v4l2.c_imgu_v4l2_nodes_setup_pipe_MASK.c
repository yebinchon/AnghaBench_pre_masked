
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imgu_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct imgu_device*,int,int) ;
 int FUNC_1 (struct imgu_device*,int,int) ;

__attribute__((used)) static int FUNC_2(struct imgu_device *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
  if (VAR_4)
   goto cleanup;
 }

 return 0;

cleanup:
 FUNC_1(VAR_1, VAR_2, VAR_3);
 return VAR_4;
}
