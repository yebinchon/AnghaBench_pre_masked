
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {unsigned int num_buffers; } ;
struct device {int dummy; } ;
struct airspy {int dev; int buffersize; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,unsigned int,...) ;
 struct airspy* FUNC_2 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_3(struct vb2_queue *VAR_0,
  unsigned int *VAR_1,
  unsigned int *VAR_2, unsigned int VAR_3[], struct device *VAR_4[])
{
 struct airspy *VAR_5 = FUNC_2(VAR_0);

 FUNC_1(VAR_5->dev, "nbuffers=%d\n", *VAR_1);


 if (VAR_0->num_buffers + *VAR_1 < 8)
  *VAR_1 = 8 - VAR_0->num_buffers;
 *VAR_2 = 1;
 VAR_3[0] = FUNC_0(VAR_5->buffersize);

 FUNC_1(VAR_5->dev, "nbuffers=%d sizes[0]=%d\n", *VAR_1, VAR_3[0]);
 return 0;
}
