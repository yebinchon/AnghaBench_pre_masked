
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct musb_hw_ep {int dummy; } ;
struct musb_fifo_cfg {int hw_ep_num; } ;
struct musb {int bulk_ep; TYPE_1__* config; int nr_endpoints; struct musb_hw_ep* endpoints; } ;
struct TYPE_2__ {unsigned int fifo_cfg_size; int num_eps; int ram_bits; struct musb_fifo_cfg* fifo_cfg; } ;


 unsigned int FUNC_0 (struct musb_fifo_cfg*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct musb*,struct musb_hw_ep*,int *,int) ;
 int FUNC_2 (int,int ) ;
 struct musb_fifo_cfg* VAR_3 ;
 struct musb_fifo_cfg* VAR_4 ;
 struct musb_fifo_cfg* VAR_5 ;
 struct musb_fifo_cfg* VAR_6 ;
 struct musb_fifo_cfg* VAR_7 ;
 struct musb_fifo_cfg* VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (char*,int ,...) ;

__attribute__((used)) static int FUNC_4(struct musb *VAR_10)
{
 const struct musb_fifo_cfg *VAR_11;
 unsigned VAR_12, VAR_13;
 int VAR_14;
 struct musb_hw_ep *VAR_15 = VAR_10->endpoints;

 if (VAR_10->config->fifo_cfg) {
  VAR_11 = VAR_10->config->fifo_cfg;
  VAR_13 = VAR_10->config->fifo_cfg_size;
  goto done;
 }

 switch (VAR_2) {
 default:
  VAR_2 = 0;

 case 0:
  VAR_11 = VAR_3;
  VAR_13 = FUNC_0(VAR_3);
  break;
 case 1:
  VAR_11 = VAR_4;
  VAR_13 = FUNC_0(VAR_4);
  break;
 case 2:
  VAR_11 = VAR_5;
  VAR_13 = FUNC_0(VAR_5);
  break;
 case 3:
  VAR_11 = VAR_6;
  VAR_13 = FUNC_0(VAR_6);
  break;
 case 4:
  VAR_11 = VAR_7;
  VAR_13 = FUNC_0(VAR_7);
  break;
 case 5:
  VAR_11 = VAR_8;
  VAR_13 = FUNC_0(VAR_8);
  break;
 }

 FUNC_3("%s: setup fifo_mode %d\n", VAR_9, VAR_2);


done:
 VAR_14 = FUNC_1(VAR_10, VAR_15, &VAR_1, 0);






 for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
  u8 VAR_16 = VAR_11->hw_ep_num;

  if (VAR_16 >= VAR_10->config->num_eps) {
   FUNC_3("%s: invalid ep %d\n",
     VAR_9, VAR_16);
   return -VAR_0;
  }
  VAR_14 = FUNC_1(VAR_10, VAR_15 + VAR_16, VAR_11++, VAR_14);
  if (VAR_14 < 0) {
   FUNC_3("%s: mem overrun, ep %d\n",
     VAR_9, VAR_16);
   return VAR_14;
  }
  VAR_16++;
  VAR_10->nr_endpoints = FUNC_2(VAR_16, VAR_10->nr_endpoints);
 }

 FUNC_3("%s: %d/%d max ep, %d/%d memory\n",
   VAR_9,
   VAR_13 + 1, VAR_10->config->num_eps * 2 - 1,
   VAR_14, (1 << (VAR_10->config->ram_bits + 2)));

 if (!VAR_10->bulk_ep) {
  FUNC_3("%s: missing bulk\n", VAR_9);
  return -VAR_0;
 }

 return 0;
}
