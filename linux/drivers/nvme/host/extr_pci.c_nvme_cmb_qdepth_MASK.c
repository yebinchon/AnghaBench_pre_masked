
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u64 ;
struct TYPE_2__ {int page_size; } ;
struct nvme_dev {int q_depth; unsigned int cmb_size; TYPE_1__ ctrl; } ;


 int VAR_0 ;
 void* FUNC_0 (unsigned int,int) ;
 unsigned int FUNC_1 (unsigned int,int ) ;
 unsigned int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct nvme_dev *VAR_1, int VAR_2,
    int VAR_3)
{
 int VAR_4 = VAR_1->q_depth;
 unsigned VAR_5 = FUNC_2(VAR_4 * VAR_3,
       VAR_1->ctrl.page_size);

 if (VAR_5 * VAR_2 > VAR_1->cmb_size) {
  u64 VAR_6 = FUNC_0(VAR_1->cmb_size, VAR_2);
  VAR_6 = FUNC_1(VAR_6, VAR_1->ctrl.page_size);
  VAR_4 = FUNC_0(VAR_6, VAR_3);






  if (VAR_4 < 64)
   return -VAR_0;
 }

 return VAR_4;
}
