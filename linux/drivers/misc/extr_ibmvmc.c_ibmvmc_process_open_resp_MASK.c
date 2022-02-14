
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int buffer_id; } ;
struct ibmvmc_crq_msg {unsigned char hmc_index; scalar_t__ status; TYPE_1__ var2; } ;
struct crq_server_adapter {int dev; } ;
struct TYPE_8__ {unsigned char max_hmc_index; unsigned short max_buffer_pool_size; } ;
struct TYPE_7__ {scalar_t__ state; int * buffer; } ;


 unsigned short FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,unsigned short) ;
 int FUNC_3 (int ,char*,scalar_t__) ;
 TYPE_2__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_4__ VAR_4 ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (struct crq_server_adapter*,int) ;
 int FUNC_6 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_7(struct ibmvmc_crq_msg *VAR_5,
         struct crq_server_adapter *VAR_6)
{
 unsigned char VAR_7;
 unsigned short VAR_8;

 VAR_7 = VAR_5->hmc_index;
 if (VAR_7 > VAR_4.max_hmc_index) {

  FUNC_5(VAR_6, 0);
  return;
 }

 if (VAR_5->status) {
  FUNC_3(VAR_6->dev, "open_resp: failed - status 0x%x\n",
    VAR_5->status);
  FUNC_6(&VAR_0[VAR_7], 0);
  return;
 }

 if (VAR_0[VAR_7].state == VAR_2) {
  VAR_8 = FUNC_0(VAR_5->var2.buffer_id);
  if (VAR_8 >= VAR_4.max_buffer_pool_size) {
   FUNC_2(VAR_6->dev, "open_resp: invalid buffer_id = 0x%x\n",
    VAR_8);
   VAR_0[VAR_7].state = VAR_1;
  } else {
   FUNC_4(&VAR_0[VAR_7],
            &VAR_0[VAR_7].buffer[VAR_8]);
   VAR_0[VAR_7].state = VAR_3;
   FUNC_1(VAR_6->dev, "open_resp: set hmc state = ready\n");
  }
 } else {
  FUNC_3(VAR_6->dev, "open_resp: invalid hmc state (0x%x)\n",
    VAR_0[VAR_7].state);
 }
}
