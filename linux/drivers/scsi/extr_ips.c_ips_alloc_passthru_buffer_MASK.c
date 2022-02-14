
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* ioctl_data; int ioctl_len; int ioctl_busaddr; TYPE_1__* pcidev; } ;
typedef TYPE_2__ ips_ha_t ;
typedef int dma_addr_t ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 void* FUNC_0 (int *,int,int *,int ) ;
 int FUNC_1 (int *,int,char*,int ) ;

__attribute__((used)) static int
FUNC_2(ips_ha_t * VAR_1, int VAR_2)
{
 void *VAR_3;
 dma_addr_t VAR_4;

 if (VAR_1->ioctl_data && VAR_2 <= VAR_1->ioctl_len)
  return 0;

 VAR_3 = FUNC_0(&VAR_1->pcidev->dev, VAR_2, &VAR_4,
   VAR_0);
 if (VAR_3) {

  FUNC_1(&VAR_1->pcidev->dev, VAR_1->ioctl_len,
      VAR_1->ioctl_data, VAR_1->ioctl_busaddr);

  VAR_1->ioctl_data = (char *) VAR_3;
  VAR_1->ioctl_len = VAR_2;
  VAR_1->ioctl_busaddr = VAR_4;
 } else {
  return -1;
 }
 return 0;
}
