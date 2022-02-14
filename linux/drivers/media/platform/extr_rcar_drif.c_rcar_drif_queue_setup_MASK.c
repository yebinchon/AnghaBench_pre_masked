
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {unsigned int num_buffers; } ;
struct rcar_drif_sdr {TYPE_1__* fmt; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int buffersize; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct rcar_drif_sdr*,char*,unsigned int,unsigned int) ;
 struct rcar_drif_sdr* FUNC_2 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_3(struct vb2_queue *VAR_0,
   unsigned int *VAR_1, unsigned int *VAR_2,
   unsigned int VAR_3[], struct device *VAR_4[])
{
 struct rcar_drif_sdr *VAR_5 = FUNC_2(VAR_0);


 if (VAR_0->num_buffers + *VAR_1 < 16)
  *VAR_1 = 16 - VAR_0->num_buffers;

 *VAR_2 = 1;
 VAR_3[0] = FUNC_0(VAR_5->fmt->buffersize);
 FUNC_1(VAR_5, "num_bufs %d sizes[0] %d\n", *VAR_1, VAR_3[0]);

 return 0;
}
