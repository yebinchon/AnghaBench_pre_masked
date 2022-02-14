
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fw_img {int num_sec; TYPE_1__* sec; } ;
struct TYPE_2__ {scalar_t__ offset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline int FUNC_0(const struct fw_img *VAR_2,
         int VAR_3)
{
 int VAR_4 = 0;

 while (VAR_3 < VAR_2->num_sec &&
        VAR_2->sec[VAR_3].offset != VAR_0 &&
        VAR_2->sec[VAR_3].offset != VAR_1) {
  VAR_3++;
  VAR_4++;
 }

 return VAR_4;
}
