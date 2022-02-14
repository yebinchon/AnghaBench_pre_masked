
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msix_entry {int vector; } ;
struct TYPE_4__ {int count; } ;
struct TYPE_3__ {int count; } ;
struct fm10k_q_vector {int itr; TYPE_2__ rx; TYPE_1__ tx; } ;
struct fm10k_intfc {int num_q_vectors; struct fm10k_q_vector** q_vector; struct msix_entry* msix_entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct fm10k_q_vector*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(struct fm10k_intfc *VAR_2)
{
 int VAR_3 = VAR_2->num_q_vectors;
 struct msix_entry *VAR_4;

 VAR_4 = &VAR_2->msix_entries[VAR_1 + VAR_3];

 while (VAR_3) {
  struct fm10k_q_vector *VAR_5;

  VAR_3--;
  VAR_4--;
  VAR_5 = VAR_2->q_vector[VAR_3];

  if (!VAR_5->tx.count && !VAR_5->rx.count)
   continue;


  FUNC_1(VAR_4->vector, ((void*)0));


  FUNC_2(VAR_0, VAR_5->itr);

  FUNC_0(VAR_4->vector, VAR_5);
 }
}
