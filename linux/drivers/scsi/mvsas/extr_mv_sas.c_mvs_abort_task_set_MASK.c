
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mvs_tmf_task {int tmf; } ;
struct domain_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct domain_device*,int *,struct mvs_tmf_task*) ;

int FUNC_1(struct domain_device *VAR_2, u8 *VAR_3)
{
 int VAR_4 = VAR_1;
 struct mvs_tmf_task VAR_5;

 VAR_5.tmf = VAR_0;
 VAR_4 = FUNC_0(VAR_2, VAR_3, &VAR_5);

 return VAR_4;
}
