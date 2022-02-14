
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u16 ;
struct xenvif_queue {size_t* pending_ring; int response_lock; int pending_prod; struct pending_tx_info* pending_tx_info; } ;
struct pending_tx_info {int extra_count; int req; } ;
typedef size_t pending_ring_idx_t ;


 int FUNC_0 (struct xenvif_queue*,int *,int ,int ) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (struct xenvif_queue*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct xenvif_queue *VAR_0, u16 VAR_1,
          u8 VAR_2)
{
 struct pending_tx_info *VAR_3;
 pending_ring_idx_t VAR_4;
 unsigned long VAR_5;

 VAR_3 = &VAR_0->pending_tx_info[VAR_1];

 FUNC_3(&VAR_0->response_lock, VAR_5);

 FUNC_0(VAR_0, &VAR_3->req,
    VAR_3->extra_count, VAR_2);





 VAR_4 = FUNC_1(VAR_0->pending_prod++);
 VAR_0->pending_ring[VAR_4] = VAR_1;

 FUNC_2(VAR_0);

 FUNC_4(&VAR_0->response_lock, VAR_5);
}
