
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aq_vec_s {unsigned int tx_rings; int napi; struct aq_ring_s** ring; } ;
struct aq_ring_s {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct aq_ring_s*) ;
 int FUNC_1 (struct aq_vec_s*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct aq_vec_s *VAR_2)
{
 struct aq_ring_s *VAR_3 = ((void*)0);
 unsigned int VAR_4 = 0U;

 if (!VAR_2)
  goto err_exit;

 for (VAR_4 = 0U, VAR_3 = VAR_2->ring[0];
  VAR_2->tx_rings > VAR_4; ++VAR_4, VAR_3 = VAR_2->ring[VAR_4]) {
  FUNC_0(&VAR_3[VAR_1]);
  FUNC_0(&VAR_3[VAR_0]);
 }

 FUNC_2(&VAR_2->napi);

 FUNC_1(VAR_2);

err_exit:;
}
