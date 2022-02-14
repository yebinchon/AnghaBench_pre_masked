
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct iavf_adapter {size_t rss_lut_size; size_t* rss_lut; size_t num_active_queues; } ;



__attribute__((used)) static void FUNC_0(struct iavf_adapter *VAR_0)
{
 u16 VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->rss_lut_size; VAR_1++)
  VAR_0->rss_lut[VAR_1] = VAR_1 % VAR_0->num_active_queues;
}
