
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ulong ;
struct scsi_qla_host {scalar_t__ nx_pcibase; } ;
struct crb_128M_2M_sub_block_map {scalar_t__ start_128M; scalar_t__ end_128M; scalar_t__ start_2M; scalar_t__ valid; } ;
struct TYPE_2__ {struct crb_128M_2M_sub_block_map* sub_block; } ;


 size_t FUNC_0 (scalar_t__) ;
 size_t FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;

int
FUNC_2(struct scsi_qla_host *VAR_6, ulong *VAR_7)
{
 struct crb_128M_2M_sub_block_map *VAR_8;

 if (*VAR_7 >= VAR_0)
  return -1;

 if (*VAR_7 >= VAR_1 && (*VAR_7 < VAR_3)) {
  *VAR_7 = (*VAR_7 - VAR_1) +
      VAR_2 + VAR_6->nx_pcibase;
  return 0;
 }

 if (*VAR_7 < VAR_4)
  return -1;

 *VAR_7 -= VAR_4;




 VAR_8 = &VAR_5[FUNC_0(*VAR_7)].sub_block[FUNC_1(*VAR_7)];

 if (VAR_8->valid && (VAR_8->start_128M <= *VAR_7) && (VAR_8->end_128M > *VAR_7)) {
  *VAR_7 = *VAR_7 + VAR_8->start_2M - VAR_8->start_128M + VAR_6->nx_pcibase;
  return 0;
 }




 return 1;
}
