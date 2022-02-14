
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_jpeg_buffer {scalar_t__ curr; scalar_t__ size; scalar_t__ data; } ;



__attribute__((used)) static int FUNC_0(struct s5p_jpeg_buffer *VAR_0)
{
 if (VAR_0->curr >= VAR_0->size)
  return -1;

 return ((unsigned char *)VAR_0->data)[VAR_0->curr++];
}
