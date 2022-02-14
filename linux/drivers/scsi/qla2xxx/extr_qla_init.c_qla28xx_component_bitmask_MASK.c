
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct qla27xx_image_status {int bitmap; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline uint
FUNC_0(struct qla27xx_image_status *VAR_2, uint VAR_3)
{
 return VAR_2->bitmap & VAR_3 ?
     VAR_1 : VAR_0;
}
