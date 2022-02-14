
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rocker_dma_ring_info {size_t size; unsigned int type; int mapaddr; int * desc; TYPE_1__* desc_info; scalar_t__ tail; scalar_t__ head; } ;
struct rocker {int pdev; } ;
struct TYPE_3__ {int * desc; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_4 (size_t,int,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int * FUNC_6 (int ,int,int *) ;
 size_t FUNC_7 (size_t) ;
 int FUNC_8 (struct rocker const*,int ,int) ;
 int FUNC_9 (struct rocker const*,int ,int ) ;

__attribute__((used)) static int FUNC_10(const struct rocker *VAR_3,
      unsigned int VAR_4,
      size_t VAR_5,
      struct rocker_dma_ring_info *VAR_6)
{
 int VAR_7;

 FUNC_0(VAR_5 != FUNC_7(VAR_5));
 VAR_6->size = VAR_5;
 VAR_6->type = VAR_4;
 VAR_6->head = 0;
 VAR_6->tail = 0;
 VAR_6->desc_info = FUNC_4(VAR_6->size, sizeof(*VAR_6->desc_info),
      VAR_1);
 if (!VAR_6->desc_info)
  return -VAR_0;

 VAR_6->desc = FUNC_6(VAR_3->pdev,
       VAR_6->size * sizeof(*VAR_6->desc),
       &VAR_6->mapaddr);
 if (!VAR_6->desc) {
  FUNC_5(VAR_6->desc_info);
  return -VAR_0;
 }

 for (VAR_7 = 0; VAR_7 < VAR_6->size; VAR_7++)
  VAR_6->desc_info[VAR_7].desc = &VAR_6->desc[VAR_7];

 FUNC_8(VAR_3, FUNC_2(VAR_6->type),
         VAR_2);
 FUNC_9(VAR_3, FUNC_1(VAR_6->type), VAR_6->mapaddr);
 FUNC_8(VAR_3, FUNC_3(VAR_6->type), VAR_6->size);

 return 0;
}
