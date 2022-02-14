
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef size_t u16 ;
struct net_device {int dummy; } ;
struct mlx4_err_cqe {int syndrome; int vendor_err_syndrome; } ;
struct mlx4_en_tx_ring {int size_mask; int (* free_tx_desc ) (struct mlx4_en_priv*,struct mlx4_en_tx_ring*,size_t,int ,int) ;int size; int wake_queue; int tx_queue; int cons; int last_nr_txbb; TYPE_1__* tx_info; } ;
struct mlx4_en_priv {int cqe_factor; int tx_work_limit; int cqe_size; int port_up; struct mlx4_en_tx_ring*** tx_ring; } ;
struct mlx4_cq {int cons_index; } ;
struct mlx4_en_cq {size_t type; size_t ring; int size; struct mlx4_cqe* buf; struct mlx4_cq mcq; } ;
struct mlx4_cqe {int owner_sr_opcode; int wqe_index; } ;
struct TYPE_2__ {int ts_requested; scalar_t__ nr_bytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 size_t VAR_3 ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct mlx4_en_priv*,char*,int ,int ) ;
 int FUNC_6 (struct mlx4_cq*) ;
 struct mlx4_cqe* FUNC_7 (struct mlx4_cqe*,size_t,int ) ;
 int FUNC_8 (struct mlx4_cqe*) ;
 int FUNC_9 (struct mlx4_en_tx_ring*) ;
 int FUNC_10 (struct mlx4_en_priv*,struct mlx4_en_tx_ring*,size_t,int) ;
 struct mlx4_en_priv* FUNC_11 (struct net_device*) ;
 int FUNC_12 (int ,int,int) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct mlx4_en_priv*,struct mlx4_en_tx_ring*,size_t,int ,int) ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 () ;

bool FUNC_19(struct net_device *VAR_4,
      struct mlx4_en_cq *VAR_5, int VAR_6)
{
 struct mlx4_en_priv *VAR_7 = FUNC_11(VAR_4);
 struct mlx4_cq *VAR_8 = &VAR_5->mcq;
 struct mlx4_en_tx_ring *VAR_9 = VAR_7->tx_ring[VAR_5->type][VAR_5->ring];
 struct mlx4_cqe *VAR_10;
 u16 VAR_11, VAR_12, VAR_13;
 u32 VAR_14 = 0;
 u32 VAR_15 = 0;
 u32 VAR_16 = VAR_8->cons_index;
 int VAR_17 = VAR_5->size;
 u32 VAR_18 = VAR_9->size_mask;
 struct mlx4_cqe *VAR_19 = VAR_5->buf;
 u32 VAR_20 = 0;
 u32 VAR_21 = 0;
 int VAR_22 = VAR_7->cqe_factor;
 int VAR_23 = 0;
 int VAR_24 = VAR_7->tx_work_limit;
 u32 VAR_25;
 u32 VAR_26;

 if (FUNC_17(!VAR_7->port_up))
  return 1;

 FUNC_13(VAR_9->tx_queue);

 VAR_11 = VAR_16 & VAR_18;
 VAR_10 = FUNC_7(VAR_19, VAR_11, VAR_7->cqe_size) + VAR_22;
 VAR_25 = FUNC_0(VAR_9->last_nr_txbb);
 VAR_26 = FUNC_0(VAR_9->cons);
 VAR_12 = VAR_26 & VAR_18;
 VAR_13 = VAR_12;


 while (FUNC_2(VAR_10->owner_sr_opcode & VAR_2,
   VAR_16 & VAR_17) && (VAR_23 < VAR_24)) {
  u16 VAR_27;





  FUNC_4();

  if (FUNC_17((VAR_10->owner_sr_opcode & VAR_1) ==
        VAR_0)) {
   struct mlx4_err_cqe *VAR_28 = (struct mlx4_err_cqe *)VAR_10;

   FUNC_5(VAR_7, "CQE error - vendor syndrome: 0x%x syndrome: 0x%x\n",
          VAR_28->vendor_err_syndrome,
          VAR_28->syndrome);
  }


  VAR_27 = FUNC_3(VAR_10->wqe_index) & VAR_18;

  do {
   u64 VAR_29 = 0;

   VAR_14 += VAR_25;
   VAR_12 = (VAR_12 + VAR_25) & VAR_18;

   if (FUNC_17(VAR_9->tx_info[VAR_12].ts_requested))
    VAR_29 = FUNC_8(VAR_10);


   VAR_25 = VAR_9->free_tx_desc(
     VAR_7, VAR_9, VAR_12,
     VAR_29, VAR_6);

   FUNC_10(VAR_7, VAR_9, VAR_13,
       !!((VAR_26 + VAR_15) &
      VAR_9->size));
   VAR_13 = VAR_12;
   VAR_15 = VAR_14;
   VAR_20++;
   VAR_21 += VAR_9->tx_info[VAR_12].nr_bytes;
  } while ((++VAR_23 < VAR_24) && (VAR_12 != VAR_27));

  ++VAR_16;
  VAR_11 = VAR_16 & VAR_18;
  VAR_10 = FUNC_7(VAR_19, VAR_11, VAR_7->cqe_size) + VAR_22;
 }





 VAR_8->cons_index = VAR_16;
 FUNC_6(VAR_8);
 FUNC_18();


 FUNC_1(VAR_9->last_nr_txbb, VAR_25);
 FUNC_1(VAR_9->cons, VAR_26 + VAR_14);

 if (VAR_5->type == VAR_3)
  return VAR_23 < VAR_24;

 FUNC_12(VAR_9->tx_queue, VAR_20, VAR_21);



 if (FUNC_14(VAR_9->tx_queue) &&
     !FUNC_9(VAR_9)) {
  FUNC_15(VAR_9->tx_queue);
  VAR_9->wake_queue++;
 }

 return VAR_23 < VAR_24;
}
