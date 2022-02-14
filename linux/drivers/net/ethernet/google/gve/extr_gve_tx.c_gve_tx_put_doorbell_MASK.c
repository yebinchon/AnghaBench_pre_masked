
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gve_queue_resources {int db_index; } ;
struct gve_priv {int * db_bar2; } ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static inline void FUNC_2(struct gve_priv *VAR_0,
           struct gve_queue_resources *VAR_1,
           u32 VAR_2)
{
 FUNC_1(VAR_2, &VAR_0->db_bar2[FUNC_0(VAR_1->db_index)]);
}
