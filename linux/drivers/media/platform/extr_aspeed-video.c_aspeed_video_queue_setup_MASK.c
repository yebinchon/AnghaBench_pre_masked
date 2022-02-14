
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int dummy; } ;
struct device {int dummy; } ;
struct aspeed_video {unsigned int max_compressed_size; } ;


 int VAR_0 ;
 struct aspeed_video* FUNC_0 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_1(struct vb2_queue *VAR_1,
        unsigned int *VAR_2,
        unsigned int *VAR_3,
        unsigned int VAR_4[],
        struct device *VAR_5[])
{
 struct aspeed_video *VAR_6 = FUNC_0(VAR_1);

 if (*VAR_3) {
  if (VAR_4[0] < VAR_6->max_compressed_size)
   return -VAR_0;

  return 0;
 }

 *VAR_3 = 1;
 VAR_4[0] = VAR_6->max_compressed_size;

 return 0;
}
