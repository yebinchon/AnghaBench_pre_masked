
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct rvu_pfvf {int nixlf; } ;
struct rvu {int rsrc_lock; int hw; } ;
struct nix_txsch_alloc_rsp {int* schq_contig; int* schq; size_t** schq_list; size_t** schq_contig_list; } ;
struct TYPE_2__ {size_t pcifunc; } ;
struct nix_txsch_alloc_req {int* schq_contig; int* schq; TYPE_1__ hdr; } ;
struct nix_txsch {int schq; int * pfvf_map; } ;
struct nix_hw {struct nix_txsch* txsch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (size_t,int ) ;
 struct nix_hw* FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct rvu*,int,int,size_t) ;
 int FUNC_5 (struct rvu*,int,int,size_t) ;
 size_t FUNC_6 (int *) ;
 size_t FUNC_7 (int *,int) ;
 int FUNC_8 (struct rvu*,int ,size_t) ;
 struct rvu_pfvf* FUNC_9 (struct rvu*,size_t) ;
 scalar_t__ FUNC_10 (struct rvu*,int,size_t,size_t*,int*) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *) ;

int FUNC_13(struct rvu *VAR_7,
         struct nix_txsch_alloc_req *VAR_8,
         struct nix_txsch_alloc_rsp *VAR_9)
{
 u16 VAR_10 = VAR_8->hdr.pcifunc;
 struct nix_txsch *VAR_11;
 int VAR_12, VAR_13, VAR_14;
 struct rvu_pfvf *VAR_15;
 struct nix_hw *VAR_16;
 int VAR_17, VAR_18 = 0;
 u32 *VAR_19;
 u16 VAR_20;

 VAR_15 = FUNC_9(VAR_7, VAR_10);
 VAR_17 = FUNC_8(VAR_7, VAR_0, VAR_10);
 if (!VAR_15->nixlf || VAR_17 < 0)
  return VAR_3;

 VAR_16 = FUNC_1(VAR_7->hw, VAR_17);
 if (!VAR_16)
  return -VAR_1;

 FUNC_2(&VAR_7->rsrc_lock);
 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  VAR_11 = &VAR_16->txsch[VAR_12];
  VAR_14 = VAR_8->schq_contig[VAR_12] + VAR_8->schq[VAR_12];
  VAR_19 = VAR_11->pfvf_map;

  if (!VAR_14)
   continue;


  if (VAR_12 == VAR_6) {
   if (VAR_8->schq_contig[VAR_12] ||
       VAR_8->schq[VAR_12] > 2 ||
       FUNC_10(VAR_7, VAR_17,
           VAR_10, ((void*)0), ((void*)0)))
    goto err;
   continue;
  }


  if (VAR_14 > VAR_2)
   goto err;


  if (VAR_8->schq_contig[VAR_12] &&
      !FUNC_11(&VAR_11->schq, VAR_8->schq_contig[VAR_12]))
   goto err;


  if (VAR_14 >= FUNC_12(&VAR_11->schq))
   goto err;
 }

 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  VAR_11 = &VAR_16->txsch[VAR_12];
  VAR_9->schq_contig[VAR_12] = VAR_8->schq_contig[VAR_12];
  VAR_19 = VAR_11->pfvf_map;
  VAR_9->schq[VAR_12] = VAR_8->schq[VAR_12];

  if (!VAR_8->schq[VAR_12] && !VAR_8->schq_contig[VAR_12])
   continue;






  if (VAR_12 == VAR_6) {
   VAR_9->schq_contig[VAR_12] = 0;
   FUNC_10(VAR_7, VAR_17, VAR_10,
       &VAR_9->schq_list[VAR_12][0],
       &VAR_9->schq[VAR_12]);
   continue;
  }


  if (VAR_8->schq_contig[VAR_12]) {
   VAR_20 = FUNC_7(&VAR_11->schq,
           VAR_8->schq_contig[VAR_12]);

   for (VAR_13 = 0; VAR_13 < VAR_8->schq_contig[VAR_12]; VAR_13++) {
    VAR_19[VAR_20] = FUNC_0(VAR_10, 0);
    FUNC_4(VAR_7, VAR_17, VAR_12, VAR_20);
    FUNC_5(VAR_7, VAR_17, VAR_12, VAR_20);
    VAR_9->schq_contig_list[VAR_12][VAR_13] = VAR_20;
    VAR_20++;
   }
  }


  for (VAR_13 = 0; VAR_13 < VAR_8->schq[VAR_12]; VAR_13++) {
   VAR_20 = FUNC_6(&VAR_11->schq);
   VAR_19[VAR_20] = FUNC_0(VAR_10, 0);
   FUNC_4(VAR_7, VAR_17, VAR_12, VAR_20);
   FUNC_5(VAR_7, VAR_17, VAR_12, VAR_20);
   VAR_9->schq_list[VAR_12][VAR_13] = VAR_20;
  }
 }
 goto exit;
err:
 VAR_18 = VAR_4;
exit:
 FUNC_3(&VAR_7->rsrc_lock);
 return VAR_18;
}
