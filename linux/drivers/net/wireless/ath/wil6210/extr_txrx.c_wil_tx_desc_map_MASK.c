
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int* d; scalar_t__ ucode_cmd; } ;
struct TYPE_3__ {int d0; int length; scalar_t__ status; scalar_t__ error; scalar_t__ b11; scalar_t__ ip_length; int addr; } ;
struct vring_tx_desc {TYPE_2__ mac; TYPE_1__ dma; } ;
union wil_tx_desc {struct vring_tx_desc legacy; } ;
typedef scalar_t__ u32 ;
typedef int u16 ;
typedef int dma_addr_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(union wil_tx_desc *VAR_3, dma_addr_t VAR_4,
      u32 VAR_5, int VAR_6)
{
 struct vring_tx_desc *VAR_7 = &VAR_3->legacy;

 FUNC_2(&VAR_7->dma.addr, VAR_4);
 VAR_7->dma.ip_length = 0;

 VAR_7->dma.b11 = 0 ;
 VAR_7->dma.error = 0;
 VAR_7->dma.status = 0;
 VAR_7->dma.length = FUNC_1((u16)VAR_5);
 VAR_7->dma.d0 = (VAR_6 << VAR_0);
 VAR_7->mac.d[0] = 0;
 VAR_7->mac.d[1] = 0;
 VAR_7->mac.d[2] = 0;
 VAR_7->mac.ucode_cmd = 0;

 VAR_7->mac.d[2] = FUNC_0(VAR_2) |
        (1 << VAR_1);

 return 0;
}
