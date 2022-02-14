
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bnad {int cfg_flags; int num_tx; int num_txq_per_tx; int bna_lock; } ;
struct bna_intr_info {int num; TYPE_1__* idl; int intr_type; } ;
struct bna_intr_descr {int dummy; } ;
typedef enum bnad_intr_source { ____Placeholder_bnad_intr_source } bnad_intr_source ;
struct TYPE_2__ {int vector; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_1 (int,int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_4(struct bnad *VAR_8, enum bnad_intr_source VAR_9,
      u32 VAR_10, struct bna_intr_info *VAR_11)
{
 int VAR_12, VAR_13 = 0;
 u32 VAR_14;
 unsigned long VAR_15;

 FUNC_2(&VAR_8->bna_lock, VAR_15);
 VAR_14 = VAR_8->cfg_flags;
 FUNC_3(&VAR_8->bna_lock, VAR_15);

 if (VAR_14 & VAR_0) {
  VAR_11->intr_type = VAR_5;
  VAR_11->idl = FUNC_1(VAR_11->num,
     sizeof(struct bna_intr_descr),
     VAR_7);
  if (!VAR_11->idl)
   return -VAR_6;

  switch (VAR_9) {
  case 128:
   VAR_13 = VAR_3 + VAR_10;
   break;

  case 129:
   VAR_13 = VAR_3 +
     (VAR_8->num_tx * VAR_8->num_txq_per_tx) +
     VAR_10;
   break;

  default:
   FUNC_0();
  }

  for (VAR_12 = 0; VAR_12 < VAR_11->num; VAR_12++)
   VAR_11->idl[VAR_12].vector = VAR_13 + VAR_12;
 } else {
  VAR_11->intr_type = VAR_4;
  VAR_11->num = 1;
  VAR_11->idl = FUNC_1(VAR_11->num,
     sizeof(struct bna_intr_descr),
     VAR_7);
  if (!VAR_11->idl)
   return -VAR_6;

  switch (VAR_9) {
  case 128:
   VAR_11->idl[0].vector = VAR_2;
   break;

  case 129:
   VAR_11->idl[0].vector = VAR_1;
   break;
  }
 }
 return 0;
}
