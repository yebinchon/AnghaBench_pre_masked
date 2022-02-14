
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenvif_queue {int pages_to_map; int tx_map_ops; int tx_copy_ops; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int ,int *,int ,unsigned int) ;
 int FUNC_3 (struct xenvif_queue*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct xenvif_queue*,int,unsigned int*,unsigned int*) ;
 int FUNC_6 (struct xenvif_queue*) ;

int FUNC_7(struct xenvif_queue *VAR_0, int VAR_1)
{
 unsigned VAR_2, VAR_3 = 0;
 int VAR_4, VAR_5;

 if (FUNC_4(!FUNC_3(VAR_0)))
  return 0;

 FUNC_5(VAR_0, VAR_1, &VAR_3, &VAR_2);

 if (VAR_3 == 0)
  return 0;

 FUNC_1(VAR_0->tx_copy_ops, VAR_3);
 if (VAR_2 != 0) {
  VAR_5 = FUNC_2(VAR_0->tx_map_ops,
          ((void*)0),
          VAR_0->pages_to_map,
          VAR_2);
  FUNC_0(VAR_5);
 }

 VAR_4 = FUNC_6(VAR_0);

 return VAR_4;
}
