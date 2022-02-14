
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ring_desc {int bd_dma; int list; struct buf_desc* bd; } ;
struct pic32_sqi {int bd_dma; struct ring_desc* ring; int bd_list_free; int bd_list_used; scalar_t__ bd; TYPE_1__* master; } ;
struct buf_desc {int bd_nextp; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *,int,int*,int ) ;
 int FUNC_3 (int *,int,scalar_t__,int) ;
 struct ring_desc* FUNC_4 (int,int,int ) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static int FUNC_6(struct pic32_sqi *VAR_3)
{
 struct ring_desc *VAR_4;
 struct buf_desc *VAR_5;
 int VAR_6;


 VAR_3->bd = FUNC_2(&VAR_3->master->dev,
         sizeof(*VAR_5) * VAR_2,
         &VAR_3->bd_dma, VAR_1);
 if (!VAR_3->bd) {
  FUNC_1(&VAR_3->master->dev, "failed allocating dma buffer\n");
  return -VAR_0;
 }


 VAR_3->ring = FUNC_4(VAR_2, sizeof(*VAR_4), VAR_1);
 if (!VAR_3->ring) {
  FUNC_3(&VAR_3->master->dev,
      sizeof(*VAR_5) * VAR_2,
      VAR_3->bd, VAR_3->bd_dma);
  return -VAR_0;
 }

 VAR_5 = (struct buf_desc *)VAR_3->bd;

 FUNC_0(&VAR_3->bd_list_free);
 FUNC_0(&VAR_3->bd_list_used);


 for (VAR_6 = 0, VAR_4 = VAR_3->ring; VAR_6 < VAR_2; VAR_6++, VAR_4++) {
  FUNC_0(&VAR_4->list);
  VAR_4->bd = &VAR_5[VAR_6];
  VAR_4->bd_dma = VAR_3->bd_dma + (void *)&VAR_5[VAR_6] - (void *)VAR_5;
  FUNC_5(&VAR_4->list, &VAR_3->bd_list_free);
 }


 for (VAR_6 = 0, VAR_4 = VAR_3->ring; VAR_6 < VAR_2 - 1; VAR_6++)
  VAR_5[VAR_6].bd_nextp = VAR_4[VAR_6 + 1].bd_dma;
 VAR_5[VAR_2 - 1].bd_nextp = 0;

 return 0;
}
