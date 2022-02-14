
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {scalar_t__ type; } ;
struct TYPE_2__ {unsigned int size; } ;
struct hva_ctx {unsigned int max_stream_size; TYPE_1__ frameinfo; int name; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct device* FUNC_0 (struct hva_ctx*) ;
 int FUNC_1 (struct device*,char*,int ,int ,unsigned int) ;
 int FUNC_2 (scalar_t__) ;
 struct hva_ctx* FUNC_3 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_4(struct vb2_queue *VAR_2,
      unsigned int *VAR_3, unsigned int *VAR_4,
      unsigned int VAR_5[], struct device *VAR_6[])
{
 struct hva_ctx *VAR_7 = FUNC_3(VAR_2);
 struct device *VAR_8 = FUNC_0(VAR_7);
 unsigned int VAR_9;

 FUNC_1(VAR_8, "%s %s queue setup: num_buffers %d\n", VAR_7->name,
  FUNC_2(VAR_2->type), *VAR_3);

 VAR_9 = VAR_2->type == VAR_1 ?
  VAR_7->frameinfo.size : VAR_7->max_stream_size;

 if (*VAR_4)
  return VAR_5[0] < VAR_9 ? -VAR_0 : 0;


 *VAR_4 = 1;
 VAR_5[0] = VAR_9;

 return 0;
}
