
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_qdio {unsigned long long req_q_time; int req_q_util; int req_q_free; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 unsigned long long FUNC_1 () ;

__attribute__((used)) static inline void FUNC_2(struct zfcp_qdio *VAR_1)
{
 unsigned long long VAR_2, VAR_3;
 int VAR_4;

 VAR_2 = FUNC_1();
 VAR_3 = (VAR_2 - VAR_1->req_q_time) >> 12;
 VAR_4 = VAR_0 - FUNC_0(&VAR_1->req_q_free);
 VAR_1->req_q_util += VAR_4 * VAR_3;
 VAR_1->req_q_time = VAR_2;
}
