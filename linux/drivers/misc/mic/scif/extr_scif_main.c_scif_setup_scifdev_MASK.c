
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scif_dev {int node; int spdev; int p2p; int qp_dwork; int p2p_dwork; int peer_add_work; int lock; int disconn_wq; int exit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 struct scif_dev* FUNC_5 (int,int,int ) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 struct scif_dev* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_7(void)
{


 int VAR_8;
 u8 VAR_9 = 129;

 VAR_5 = FUNC_5(VAR_9, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;
 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  struct scif_dev *VAR_10 = &VAR_5[VAR_8];

  VAR_10->node = VAR_8;
  VAR_10->exit = VAR_3;
  FUNC_4(&VAR_10->disconn_wq);
  FUNC_6(&VAR_10->lock);
  FUNC_2(&VAR_10->peer_add_work, VAR_4);
  FUNC_0(&VAR_10->p2p_dwork,
      VAR_6);
  FUNC_0(&VAR_10->qp_dwork,
      VAR_7);
  FUNC_1(&VAR_10->p2p);
  FUNC_3(VAR_10->spdev, ((void*)0));
 }
 return 0;
}
