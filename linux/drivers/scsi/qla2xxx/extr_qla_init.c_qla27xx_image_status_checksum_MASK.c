
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
typedef int uint32_t ;
typedef int uint ;
struct qla27xx_image_status {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static ulong
FUNC_1(struct qla27xx_image_status *VAR_0)
{
 uint32_t *VAR_1 = (void *)VAR_0;
 uint VAR_2 = sizeof(*VAR_0) / sizeof(*VAR_1);
 uint32_t VAR_3 = 0;

 for ( ; VAR_2--; VAR_1++)
  VAR_3 += FUNC_0(VAR_1);

 return VAR_3;
}
