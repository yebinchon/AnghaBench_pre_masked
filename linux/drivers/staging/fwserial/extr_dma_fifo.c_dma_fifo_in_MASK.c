
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_fifo {int avail; int in; int capacity; int done; int out; scalar_t__ data; scalar_t__ corrupt; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dma_fifo*,int,char*,int,int ,int ,int,int) ;
 scalar_t__ FUNC_1 (int ,int,int) ;
 int FUNC_2 (char*,int,int ,int ,int,int) ;
 int FUNC_3 (scalar_t__,void const*,int) ;
 int FUNC_4 (int,int) ;

int FUNC_5(struct dma_fifo *VAR_2, const void *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;

 if (!VAR_2->data)
  return -VAR_0;
 if (VAR_2->corrupt)
  return -VAR_1;

 if (VAR_4 > VAR_2->avail)
  VAR_4 = VAR_2->avail;
 if (VAR_4 <= 0)
  return 0;

 VAR_5 = VAR_2->in % VAR_2->capacity;
 VAR_6 = FUNC_4(VAR_4, VAR_2->capacity - VAR_5);
 FUNC_3(VAR_2->data + VAR_5, VAR_3, VAR_6);
 FUNC_3(VAR_2->data, VAR_3 + VAR_6, VAR_4 - VAR_6);

 if (FUNC_0(VAR_2, FUNC_1(VAR_2->done, VAR_2->in, VAR_2->in + VAR_4) ||
   VAR_2->avail < VAR_4,
   "fifo corrupt: in:%u out:%u done:%u n:%d avail:%d",
   VAR_2->in, VAR_2->out, VAR_2->done, VAR_4, VAR_2->avail))
  return -VAR_1;

 VAR_2->in += VAR_4;
 VAR_2->avail -= VAR_4;

 FUNC_2("in:%u out:%u done:%u n:%d avail:%d", VAR_2->in, VAR_2->out,
   VAR_2->done, VAR_4, VAR_2->avail);

 return VAR_4;
}
