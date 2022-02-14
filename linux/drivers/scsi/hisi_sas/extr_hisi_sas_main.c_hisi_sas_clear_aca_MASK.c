
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hisi_sas_tmf_task {int tmf; } ;
struct domain_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct domain_device*,int *,struct hisi_sas_tmf_task*) ;

__attribute__((used)) static int FUNC_1(struct domain_device *VAR_1, u8 *VAR_2)
{
 struct hisi_sas_tmf_task VAR_3;
 int VAR_4;

 VAR_3.tmf = VAR_0;
 VAR_4 = FUNC_0(VAR_1, VAR_2, &VAR_3);

 return VAR_4;
}
