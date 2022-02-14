
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u64 ;
struct vmci_queue {TYPE_3__* kernel_if; } ;
struct ppn_set {int initialized; size_t num_produce_pages; size_t num_consume_pages; size_t* produce_ppns; size_t* consume_ppns; } ;
struct TYPE_4__ {size_t* pas; } ;
struct TYPE_5__ {TYPE_1__ g; } ;
struct TYPE_6__ {TYPE_2__ u; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (size_t*) ;
 size_t* FUNC_1 (size_t,int,int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_6,
       u64 VAR_7,
       void *VAR_8,
       u64 VAR_9, struct ppn_set *VAR_10)
{
 u64 *VAR_11;
 u64 *VAR_12;
 struct vmci_queue *VAR_13 = VAR_6;
 struct vmci_queue *VAR_14 = VAR_8;
 u64 VAR_15;

 if (!VAR_13 || !VAR_7 || !VAR_14 ||
     !VAR_9 || !VAR_10)
  return VAR_3;

 if (VAR_10->initialized)
  return VAR_2;

 VAR_11 =
     FUNC_1(VAR_7, sizeof(*VAR_11),
     VAR_0);
 if (!VAR_11)
  return VAR_4;

 VAR_12 =
     FUNC_1(VAR_9, sizeof(*VAR_12),
     VAR_0);
 if (!VAR_12) {
  FUNC_0(VAR_11);
  return VAR_4;
 }

 for (VAR_15 = 0; VAR_15 < VAR_7; VAR_15++)
  VAR_11[VAR_15] =
   VAR_13->kernel_if->u.g.pas[VAR_15] >> VAR_1;

 for (VAR_15 = 0; VAR_15 < VAR_9; VAR_15++)
  VAR_12[VAR_15] =
   VAR_14->kernel_if->u.g.pas[VAR_15] >> VAR_1;

 VAR_10->num_produce_pages = VAR_7;
 VAR_10->num_consume_pages = VAR_9;
 VAR_10->produce_ppns = VAR_11;
 VAR_10->consume_ppns = VAR_12;
 VAR_10->initialized = 1;
 return VAR_5;
}
