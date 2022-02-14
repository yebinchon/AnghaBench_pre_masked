
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ memory; } ;
struct omap_vout_device {int smsshado_size; scalar_t__* smsshado_virt_addr; scalar_t__* smsshado_phy_addr; TYPE_1__ vq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (void*,int ,int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__*) ;
 int FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(struct omap_vout_device *VAR_2,
  unsigned int *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < *VAR_3; VAR_5++) {
  if (!VAR_2->smsshado_virt_addr[VAR_5]) {
   VAR_2->smsshado_virt_addr[VAR_5] =
    FUNC_1(VAR_2->smsshado_size,
      &VAR_2->smsshado_phy_addr[VAR_5]);
  }
  if (!VAR_2->smsshado_virt_addr[VAR_5] && VAR_4 != -1) {
   if (VAR_2->vq.memory == VAR_1 && VAR_5 >= VAR_4)
    break;
  }
  if (!VAR_2->smsshado_virt_addr[VAR_5]) {
   for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
    FUNC_2(
      VAR_2->smsshado_virt_addr[VAR_6],
      VAR_2->smsshado_size);
    VAR_2->smsshado_virt_addr[VAR_6] = 0;
    VAR_2->smsshado_phy_addr[VAR_6] = 0;
   }
   *VAR_3 = 0;
   return -VAR_0;
  }
  FUNC_0((void *)(long)VAR_2->smsshado_virt_addr[VAR_5], 0,
         VAR_2->smsshado_size);
 }
 return 0;
}
