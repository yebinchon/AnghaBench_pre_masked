
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct ibmvmc_buffer {scalar_t__ owner; scalar_t__ free; } ;
struct crq_server_adapter {int dev; } ;
struct TYPE_4__ {struct ibmvmc_buffer* buffer; } ;
struct TYPE_3__ {size_t max_hmc_index; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,size_t) ;
 TYPE_2__* VAR_1 ;
 TYPE_1__ VAR_2 ;
 unsigned long VAR_3 ;

__attribute__((used)) static struct ibmvmc_buffer *FUNC_1(struct crq_server_adapter *VAR_4,
       u8 VAR_5)
{
 struct ibmvmc_buffer *VAR_6;
 struct ibmvmc_buffer *VAR_7 = ((void*)0);
 unsigned long VAR_8;

 if (VAR_5 > VAR_2.max_hmc_index) {
  FUNC_0(VAR_4->dev, "get_free_hmc_buffer: invalid hmc_index=0x%x\n",
    VAR_5);
  return ((void*)0);
 }

 VAR_6 = VAR_1[VAR_5].buffer;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  if (VAR_6[VAR_8].free &&
      VAR_6[VAR_8].owner == VAR_0) {
   VAR_6[VAR_8].free = 0;
   VAR_7 = &VAR_6[VAR_8];
   break;
  }
 }

 return VAR_7;
}
