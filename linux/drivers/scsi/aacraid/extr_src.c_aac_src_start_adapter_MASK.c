
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* host_elapsed_seconds; } ;
struct TYPE_3__ {void* host_elapsed_seconds; } ;
union aac_init {TYPE_2__ r7; TYPE_1__ r8; } ;
typedef scalar_t__ ulong ;
typedef int u32 ;
struct aac_dev {int max_msix; int* host_rrq_idx; int vector_cap; scalar_t__ comm_interface; scalar_t__ init_pa; union aac_init* init; scalar_t__ fibs_pushed_no; int msix_counter; int * rrq_outstanding; } ;
struct _rrq {int dummy; } ;
struct _r8 {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct aac_dev*,int ,int ,int ,int,int ,int ,int ,int *,int *,int *,int *,int *) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct aac_dev *VAR_3)
{
 union aac_init *VAR_4;
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_3->max_msix; VAR_5++) {
  VAR_3->host_rrq_idx[VAR_5] = VAR_5 * VAR_3->vector_cap;
  FUNC_0(&VAR_3->rrq_outstanding[VAR_5], 0);
 }
 FUNC_0(&VAR_3->msix_counter, 0);
 VAR_3->fibs_pushed_no = 0;

 VAR_4 = VAR_3->init;
 if (VAR_3->comm_interface == VAR_0) {
  VAR_4->r8.host_elapsed_seconds =
   FUNC_1(FUNC_2());
  FUNC_4(VAR_3, VAR_2,
   FUNC_3(VAR_3->init_pa),
   FUNC_5(VAR_3->init_pa),
   sizeof(struct _r8) +
   (VAR_1 - 1) * sizeof(struct _rrq),
   0, 0, 0, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0));
 } else {
  VAR_4->r7.host_elapsed_seconds =
   FUNC_1(FUNC_2());

  FUNC_4(VAR_3, VAR_2,
   (u32)(ulong)VAR_3->init_pa, 0, 0, 0, 0, 0,
   ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0));
 }

}
