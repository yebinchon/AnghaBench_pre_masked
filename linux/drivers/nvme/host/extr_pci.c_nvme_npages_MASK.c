
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int page_size; } ;
struct nvme_dev {TYPE_1__ ctrl; } ;


 int FUNC_0 (int,unsigned int) ;
 unsigned int VAR_0 ;

__attribute__((used)) static int FUNC_1(unsigned VAR_1, struct nvme_dev *VAR_2)
{
 unsigned VAR_3 = FUNC_0(VAR_1 + VAR_2->ctrl.page_size,
          VAR_2->ctrl.page_size);
 return FUNC_0(8 * VAR_3, VAR_0 - 8);
}
