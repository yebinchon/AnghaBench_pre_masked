
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slic_stat_queue {unsigned int active_array; size_t done_idx; int len; int * paddr; struct slic_stat_desc** descs; } ;
struct slic_stat_desc {scalar_t__ status; scalar_t__ hnd; } ;
struct slic_device {struct slic_stat_queue stq; } ;
typedef int dma_addr_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct slic_device*) ;
 size_t FUNC_3 (size_t,int) ;
 int FUNC_4 (struct slic_device*,int ,int) ;

__attribute__((used)) static unsigned int FUNC_5(struct slic_device *VAR_3)
{
 struct slic_stat_queue *VAR_4 = &VAR_3->stq;
 unsigned int VAR_5 = VAR_4->active_array;
 struct slic_stat_desc *VAR_6;
 struct slic_stat_desc *VAR_7;
 unsigned int VAR_8;

 VAR_6 = VAR_4->descs[VAR_5];
 VAR_7 = &VAR_6[VAR_4->done_idx];

 if (!VAR_7->status)
  return VAR_0;

 VAR_8 = (FUNC_0(VAR_7->hnd) & 0xffff) - 1;

 VAR_7->hnd = 0;
 VAR_7->status = 0;

 VAR_4->done_idx = FUNC_3(VAR_4->done_idx, VAR_4->len);

 if (!VAR_4->done_idx) {
  dma_addr_t VAR_9 = VAR_4->paddr[VAR_5];

  FUNC_4(VAR_3, VAR_2, FUNC_1(VAR_9) |
      VAR_4->len);

  FUNC_2(VAR_3);
  VAR_5++;
  VAR_5 &= (VAR_1 - 1);
  VAR_4->active_array = VAR_5;
 }
 return VAR_8;
}
