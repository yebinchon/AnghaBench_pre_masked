
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_query_join_packet {int dummy; } ;
union dlm_query_join_response {struct dlm_query_join_packet packet; int intval; } ;
typedef int u32 ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(u32 VAR_0,
       struct dlm_query_join_packet *VAR_1)
{
 union dlm_query_join_response VAR_2;

 VAR_2.intval = FUNC_0(VAR_0);
 *VAR_1 = VAR_2.packet;
}
