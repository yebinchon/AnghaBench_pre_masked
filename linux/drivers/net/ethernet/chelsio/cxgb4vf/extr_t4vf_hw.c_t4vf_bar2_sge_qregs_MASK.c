
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u64 ;
struct TYPE_3__ {int sge_vf_hps; unsigned int sge_vf_eq_qpp; unsigned int sge_vf_iq_qpp; } ;
struct TYPE_4__ {TYPE_1__ sge; int chip; } ;
struct adapter {TYPE_2__ params; } ;
typedef enum t4_bar2_qtype { ____Placeholder_t4_bar2_qtype } t4_bar2_qtype ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;

int FUNC_1(struct adapter *VAR_3,
   unsigned int VAR_4,
   enum t4_bar2_qtype VAR_5,
   u64 *VAR_6,
   unsigned int *VAR_7)
{
 unsigned int VAR_8, VAR_9, VAR_10, VAR_11;
 u64 VAR_12, VAR_13;
 unsigned int VAR_14, VAR_15, VAR_16;



 if (FUNC_0(VAR_3->params.chip))
  return -VAR_0;



 VAR_8 = VAR_3->params.sge.sge_vf_hps + 10;
 VAR_9 = 1 << VAR_8;



 VAR_10 = (VAR_5 == VAR_2
       ? VAR_3->params.sge.sge_vf_eq_qpp
       : VAR_3->params.sge.sge_vf_iq_qpp);
 VAR_11 = (1 << VAR_10) - 1;






 VAR_12 = ((u64)(VAR_4 >> VAR_10) << VAR_8);
 VAR_14 = VAR_4 & VAR_11;
 VAR_15 = VAR_14 * VAR_1;
 VAR_13 = VAR_12;
 VAR_16 = (VAR_15 < VAR_9);
 if (VAR_16) {
  VAR_13 += VAR_15;
  VAR_14 = 0;
 }

 *VAR_6 = VAR_13;
 *VAR_7 = VAR_14;
 return 0;
}
