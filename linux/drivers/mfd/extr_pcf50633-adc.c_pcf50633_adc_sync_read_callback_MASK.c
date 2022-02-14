
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcf50633_adc_sync_request {int result; int completion; } ;
struct pcf50633 {int dummy; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct pcf50633 *VAR_0, void *VAR_1,
 int VAR_2)
{
 struct pcf50633_adc_sync_request *VAR_3 = VAR_1;

 VAR_3->result = VAR_2;
 FUNC_0(&VAR_3->completion);
}
