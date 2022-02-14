
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sas_ssp_task {int LUN; } ;
struct mvs_tmf_task {int dummy; } ;
struct domain_device {int tproto; } ;
typedef int ssp_task ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (struct domain_device*,struct sas_ssp_task*,int,struct mvs_tmf_task*) ;

__attribute__((used)) static int FUNC_2(struct domain_device *VAR_2,
    u8 *VAR_3, struct mvs_tmf_task *VAR_4)
{
 struct sas_ssp_task VAR_5;
 if (!(VAR_2->tproto & VAR_0))
  return VAR_1;

 FUNC_0(VAR_5.LUN, VAR_3, 8);

 return FUNC_1(VAR_2, &VAR_5,
    sizeof(VAR_5), VAR_4);
}
