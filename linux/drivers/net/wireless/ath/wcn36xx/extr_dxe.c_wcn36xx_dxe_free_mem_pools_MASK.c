
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int chunk_size; int phy_addr; scalar_t__ virt_addr; } ;
struct TYPE_4__ {int chunk_size; int phy_addr; scalar_t__ virt_addr; } ;
struct wcn36xx {TYPE_1__ data_mem_pool; int dev; TYPE_2__ mgmt_mem_pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,scalar_t__,int ) ;

void FUNC_1(struct wcn36xx *VAR_2)
{
 if (VAR_2->mgmt_mem_pool.virt_addr)
  FUNC_0(VAR_2->dev, VAR_2->mgmt_mem_pool.chunk_size *
      VAR_0,
      VAR_2->mgmt_mem_pool.virt_addr,
      VAR_2->mgmt_mem_pool.phy_addr);

 if (VAR_2->data_mem_pool.virt_addr) {
  FUNC_0(VAR_2->dev, VAR_2->data_mem_pool.chunk_size *
      VAR_1,
      VAR_2->data_mem_pool.virt_addr,
      VAR_2->data_mem_pool.phy_addr);
 }
}
