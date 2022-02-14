
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct sge_params {unsigned int hps; unsigned int eq_qpp; unsigned int iq_qpp; } ;
struct TYPE_2__ {struct sge_params sge; } ;
struct adapter {unsigned int pf; TYPE_1__ params; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int FUNC_0 (struct adapter*,int ) ;

int FUNC_1(struct adapter *VAR_9)
{
 struct sge_params *VAR_10 = &VAR_9->params.sge;
 u32 VAR_11, VAR_12;
 unsigned int VAR_13, VAR_14;



 VAR_11 = FUNC_0(VAR_9, VAR_7);
 VAR_13 = (VAR_1 +
   (VAR_2 - VAR_1) * VAR_9->pf);
 VAR_10->hps = ((VAR_11 >> VAR_13) & VAR_0);



 VAR_14 = (VAR_4 +
  (VAR_5 - VAR_4) * VAR_9->pf);
 VAR_12 = FUNC_0(VAR_9, VAR_6);
 VAR_10->eq_qpp = ((VAR_12 >> VAR_14) & VAR_3);
 VAR_12 = FUNC_0(VAR_9, VAR_8);
 VAR_10->iq_qpp = ((VAR_12 >> VAR_14) & VAR_3);

 return 0;
}
