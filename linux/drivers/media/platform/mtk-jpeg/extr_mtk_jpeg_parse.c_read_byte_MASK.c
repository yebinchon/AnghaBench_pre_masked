
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_jpeg_stream {scalar_t__ curr; scalar_t__ size; int* addr; } ;



__attribute__((used)) static int FUNC_0(struct mtk_jpeg_stream *VAR_0)
{
 if (VAR_0->curr >= VAR_0->size)
  return -1;
 return VAR_0->addr[VAR_0->curr++];
}
