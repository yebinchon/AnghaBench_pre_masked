
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mei_msg_hdr {int dummy; } ;
struct mei_device {int init_clients_timer; int hbm_state; int dev; TYPE_2__* dr_dscr; } ;
struct hbm_dma_setup_request {TYPE_1__* dma_dscr; int hbm_cmd; } ;
typedef int phys_addr_t ;
struct TYPE_4__ {int size; int daddr; } ;
struct TYPE_3__ {int size; int addr_lo; int addr_hi; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mei_device*) ;
 int FUNC_3 (struct mei_msg_hdr*,size_t const) ;
 int FUNC_4 (struct mei_device*,struct mei_msg_hdr*,struct hbm_dma_setup_request*) ;
 int FUNC_5 (struct mei_device*) ;
 int FUNC_6 (struct hbm_dma_setup_request*,int ,size_t const) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct mei_device *VAR_4)
{
 struct mei_msg_hdr VAR_5;
 struct hbm_dma_setup_request VAR_6;
 const size_t VAR_7 = sizeof(struct hbm_dma_setup_request);
 unsigned int VAR_8;
 int VAR_9;

 FUNC_3(&VAR_5, VAR_7);

 FUNC_6(&VAR_6, 0, VAR_7);
 VAR_6.hbm_cmd = VAR_2;
 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  phys_addr_t VAR_10;

  VAR_10 = VAR_4->dr_dscr[VAR_8].daddr;
  VAR_6.dma_dscr[VAR_8].addr_hi = FUNC_7(VAR_10);
  VAR_6.dma_dscr[VAR_8].addr_lo = FUNC_1(VAR_10);
  VAR_6.dma_dscr[VAR_8].size = VAR_4->dr_dscr[VAR_8].size;
 }

 FUNC_2(VAR_4);

 VAR_9 = FUNC_4(VAR_4, &VAR_5, &VAR_6);
 if (VAR_9) {
  FUNC_0(VAR_4->dev, "dma setup request write failed: ret = %d.\n",
   VAR_9);
  return VAR_9;
 }

 VAR_4->hbm_state = VAR_3;
 VAR_4->init_clients_timer = VAR_1;
 FUNC_5(VAR_4);
 return 0;
}
