
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ulong ;
struct qla27xx_image_status {int signature; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static bool
FUNC_1(struct qla27xx_image_status *VAR_2)
{
 ulong VAR_3 = FUNC_0(VAR_2->signature);

 return
     VAR_3 != VAR_0 &&
     VAR_3 != VAR_1;
}
