
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct octeon_ioq_vector {int iq_index; int droq_index; int ioq_num; int affinity_mask; int mbox; struct octeon_device* oct_dev; } ;
struct TYPE_2__ {int pf_srn; } ;
struct octeon_device {scalar_t__ chip_id; TYPE_1__ sriov_info; int * mbox; struct octeon_ioq_vector* ioq_vector; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 () ;
 struct octeon_ioq_vector* FUNC_2 (int) ;

int
FUNC_3(struct octeon_device *VAR_1, u32 VAR_2)
{
 struct octeon_ioq_vector *VAR_3;
 int VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_5 = sizeof(struct octeon_ioq_vector) * VAR_2;

 VAR_1->ioq_vector = FUNC_2(VAR_5);
 if (!VAR_1->ioq_vector)
  return -1;
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_3 = &VAR_1->ioq_vector[VAR_6];
  VAR_3->oct_dev = VAR_1;
  VAR_3->iq_index = VAR_6;
  VAR_3->droq_index = VAR_6;
  VAR_3->mbox = VAR_1->mbox[VAR_6];

  VAR_4 = VAR_6 % FUNC_1();
  FUNC_0(VAR_4, &VAR_3->affinity_mask);

  if (VAR_1->chip_id == VAR_0)
   VAR_3->ioq_num = VAR_6 + VAR_1->sriov_info.pf_srn;
  else
   VAR_3->ioq_num = VAR_6;
 }

 return 0;
}
