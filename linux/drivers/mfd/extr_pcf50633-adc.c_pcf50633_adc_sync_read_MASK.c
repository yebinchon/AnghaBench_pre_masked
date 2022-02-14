
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcf50633_adc_sync_request {int result; int completion; } ;
struct pcf50633 {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct pcf50633*,int,int,int ,struct pcf50633_adc_sync_request*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;

int FUNC_3(struct pcf50633 *VAR_1, int VAR_2, int VAR_3)
{
 struct pcf50633_adc_sync_request VAR_4;
 int VAR_5;

 FUNC_0(&VAR_4.completion);

 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3,
  VAR_0, &VAR_4);
 if (VAR_5)
  return VAR_5;

 FUNC_2(&VAR_4.completion);

 return VAR_4.result;
}
