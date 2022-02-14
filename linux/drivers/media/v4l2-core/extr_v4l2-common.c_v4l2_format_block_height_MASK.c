
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_format_info {unsigned int* block_h; } ;



__attribute__((used)) static inline unsigned int FUNC_0(const struct v4l2_format_info *VAR_0, int VAR_1)
{
 if (!VAR_0->block_h[VAR_1])
  return 1;
 return VAR_0->block_h[VAR_1];
}
