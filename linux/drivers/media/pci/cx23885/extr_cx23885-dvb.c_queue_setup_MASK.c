
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {struct cx23885_tsport* drv_priv; } ;
struct device {int dummy; } ;
struct cx23885_tsport {int ts_packet_size; int ts_packet_count; } ;



__attribute__((used)) static int FUNC_0(struct vb2_queue *VAR_0,
      unsigned int *VAR_1, unsigned int *VAR_2,
      unsigned int VAR_3[], struct device *VAR_4[])
{
 struct cx23885_tsport *VAR_5 = VAR_0->drv_priv;

 VAR_5->ts_packet_size = 188 * 4;
 VAR_5->ts_packet_count = 32;
 *VAR_2 = 1;
 VAR_3[0] = VAR_5->ts_packet_size * VAR_5->ts_packet_count;
 *VAR_1 = 32;
 return 0;
}
