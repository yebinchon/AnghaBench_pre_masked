
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int chunk_size; void* virt_addr; int phy_addr; } ;
struct TYPE_3__ {int chunk_size; void* virt_addr; int phy_addr; } ;
struct wcn36xx {TYPE_2__ data_mem_pool; int dev; TYPE_1__ mgmt_mem_pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 void* FUNC_0 (int ,size_t,int *,int ) ;
 int FUNC_1 (struct wcn36xx*) ;
 int FUNC_2 (char*) ;

int FUNC_3(struct wcn36xx *VAR_5)
{
 size_t VAR_6;
 void *VAR_7;




 VAR_5->mgmt_mem_pool.chunk_size = VAR_2 +
  16 - (VAR_2 % 8);

 VAR_6 = VAR_5->mgmt_mem_pool.chunk_size * VAR_3;
 VAR_7 = FUNC_0(VAR_5->dev, VAR_6,
          &VAR_5->mgmt_mem_pool.phy_addr,
          VAR_1);
 if (!VAR_7)
  goto out_err;

 VAR_5->mgmt_mem_pool.virt_addr = VAR_7;




 VAR_5->data_mem_pool.chunk_size = VAR_2 +
  16 - (VAR_2 % 8);

 VAR_6 = VAR_5->data_mem_pool.chunk_size * VAR_4;
 VAR_7 = FUNC_0(VAR_5->dev, VAR_6,
          &VAR_5->data_mem_pool.phy_addr,
          VAR_1);
 if (!VAR_7)
  goto out_err;

 VAR_5->data_mem_pool.virt_addr = VAR_7;

 return 0;

out_err:
 FUNC_1(VAR_5);
 FUNC_2("Failed to allocate BD mempool\n");
 return -VAR_0;
}
