
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qla27xx_image_status {int generation; } ;
typedef int int16_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int,char*,int) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_2(
    struct qla27xx_image_status *VAR_1,
    struct qla27xx_image_status *VAR_2)
{

 int16_t VAR_3 =
     FUNC_0(VAR_1->generation) -
     FUNC_0(VAR_2->generation);

 FUNC_1(VAR_0, ((void*)0), 0x0180, "generation delta = %d\n", VAR_3);

 return VAR_3;
}
