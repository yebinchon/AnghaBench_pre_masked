
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct spinand_device {TYPE_2__* manufacturer; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* detect ) (struct spinand_device*) ;} ;


 unsigned int FUNC_0 (TYPE_2__**) ;
 int VAR_0 ;
 TYPE_2__** VAR_1 ;
 int FUNC_1 (struct spinand_device*) ;

__attribute__((used)) static int FUNC_2(struct spinand_device *VAR_2)
{
 unsigned int VAR_3;
 int VAR_4;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++) {
  VAR_4 = VAR_1[VAR_3]->ops->detect(VAR_2);
  if (VAR_4 > 0) {
   VAR_2->manufacturer = VAR_1[VAR_3];
   return 0;
  } else if (VAR_4 < 0) {
   return VAR_4;
  }
 }

 return -VAR_0;
}
