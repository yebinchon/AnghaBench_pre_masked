
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netcp_tx_pipe {char const* dma_chan_name; unsigned int dma_queue_id; struct netcp_device* netcp_device; } ;
struct netcp_device {int dummy; } ;


 int FUNC_0 (struct netcp_tx_pipe*,int ,int) ;

int FUNC_1(struct netcp_tx_pipe *VAR_0,
        struct netcp_device *VAR_1,
        const char *VAR_2, unsigned int VAR_3)
{
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->netcp_device = VAR_1;
 VAR_0->dma_chan_name = VAR_2;
 VAR_0->dma_queue_id = VAR_3;
 return 0;
}
