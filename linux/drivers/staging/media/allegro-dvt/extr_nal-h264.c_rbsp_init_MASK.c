
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbsp {size_t size; scalar_t__ error; struct nal_h264_ops* ops; scalar_t__ pos; void* data; } ;
struct nal_h264_ops {int dummy; } ;



__attribute__((used)) static void FUNC_0(struct rbsp *VAR_0, void *VAR_1, size_t VAR_2,
        struct nal_h264_ops *VAR_3)
{
 if (!VAR_0)
  return;

 VAR_0->data = VAR_1;
 VAR_0->size = VAR_2;
 VAR_0->pos = 0;
 VAR_0->ops = VAR_3;
 VAR_0->error = 0;
}
