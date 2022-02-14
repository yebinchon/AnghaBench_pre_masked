
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ena_stats {char* name; } ;
struct ena_adapter {int num_queues; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ena_stats* VAR_3 ;
 struct ena_stats* VAR_4 ;
 int FUNC_0 (int *,int ,char*,int,char*) ;

__attribute__((used)) static void FUNC_1(struct ena_adapter *VAR_5, u8 **VAR_6)
{
 const struct ena_stats *VAR_7;
 int VAR_8, VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_5->num_queues; VAR_8++) {

  for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
   VAR_7 = &VAR_4[VAR_9];

   FUNC_0(*VAR_6, VAR_2,
     "queue_%u_tx_%s", VAR_8, VAR_7->name);
    (*VAR_6) += VAR_2;
  }

  for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
   VAR_7 = &VAR_3[VAR_9];

   FUNC_0(*VAR_6, VAR_2,
     "queue_%u_rx_%s", VAR_8, VAR_7->name);
   (*VAR_6) += VAR_2;
  }
 }
}
