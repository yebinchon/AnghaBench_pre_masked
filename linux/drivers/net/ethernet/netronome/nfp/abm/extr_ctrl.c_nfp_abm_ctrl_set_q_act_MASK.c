
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_abm_link {unsigned int queue_base; int abm; } ;
typedef enum nfp_abm_q_action { ____Placeholder_nfp_abm_q_action } nfp_abm_q_action ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,unsigned int,int) ;

int FUNC_1(struct nfp_abm_link *VAR_1, unsigned int VAR_2,
      unsigned int VAR_3, enum nfp_abm_q_action VAR_4)
{
 unsigned int VAR_5;

 VAR_5 = VAR_2 * VAR_0 + VAR_1->queue_base + VAR_3;

 return FUNC_0(VAR_1->abm, VAR_5, VAR_4);
}
