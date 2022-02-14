
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slic_rx_queue {struct slic_rx_buffer* rxbuffs; int len; scalar_t__ put_idx; scalar_t__ done_idx; } ;
struct slic_rx_buffer {int dummy; } ;
struct slic_device {struct slic_rx_queue rxq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct slic_rx_buffer* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct slic_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct slic_device *VAR_3)
{
 struct slic_rx_queue *VAR_4 = &VAR_3->rxq;
 struct slic_rx_buffer *VAR_5;

 VAR_4->len = VAR_2;
 VAR_4->done_idx = 0;
 VAR_4->put_idx = 0;

 VAR_5 = FUNC_0(VAR_4->len, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_4->rxbuffs = VAR_5;
 FUNC_1(VAR_3, VAR_1);

 return 0;
}
