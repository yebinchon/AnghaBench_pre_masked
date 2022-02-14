
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {struct cx8802_dev* drv_priv; } ;
struct device {int dummy; } ;
struct cx8802_dev {int ts_packet_size; unsigned int ts_packet_count; } ;


 void* VAR_0 ;

__attribute__((used)) static int FUNC_0(struct vb2_queue *VAR_1,
         unsigned int *VAR_2, unsigned int *VAR_3,
         unsigned int VAR_4[], struct device *VAR_5[])
{
 struct cx8802_dev *VAR_6 = VAR_1->drv_priv;

 *VAR_3 = 1;
 VAR_6->ts_packet_size = 188 * 4;
 VAR_6->ts_packet_count = VAR_0;
 VAR_4[0] = VAR_6->ts_packet_size * VAR_6->ts_packet_count;
 *VAR_2 = VAR_0;
 return 0;
}
