
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scu_sgl_element {scalar_t__ address_lower; scalar_t__ address_upper; } ;
struct scu_sgl_element_pair {scalar_t__ next_pair_lower; scalar_t__ next_pair_upper; struct scu_sgl_element A; struct scu_sgl_element B; } ;
struct isci_stp_pio_sgl {scalar_t__ set; int index; } ;
struct isci_stp_request {struct isci_stp_pio_sgl sgl; } ;
struct isci_request {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct isci_request* FUNC_0 (struct isci_stp_request*) ;
 struct scu_sgl_element_pair* FUNC_1 (struct isci_request*,int ) ;

__attribute__((used)) static struct scu_sgl_element *FUNC_2(struct isci_stp_request *VAR_2)
{
 struct scu_sgl_element *VAR_3;
 struct scu_sgl_element_pair *VAR_4;
 struct isci_request *VAR_5 = FUNC_0(VAR_2);
 struct isci_stp_pio_sgl *VAR_6 = &VAR_2->sgl;

 VAR_4 = FUNC_1(VAR_5, VAR_6->index);
 if (!VAR_4)
  VAR_3 = ((void*)0);
 else if (VAR_6->set == VAR_0) {
  if (VAR_4->B.address_lower == 0 &&
      VAR_4->B.address_upper == 0) {
   VAR_3 = ((void*)0);
  } else {
   VAR_6->set = VAR_1;
   VAR_3 = &VAR_4->B;
  }
 } else {
  if (VAR_4->next_pair_lower == 0 &&
      VAR_4->next_pair_upper == 0) {
   VAR_3 = ((void*)0);
  } else {
   VAR_6->index++;
   VAR_6->set = VAR_0;
   VAR_4 = FUNC_1(VAR_5, VAR_6->index);
   VAR_3 = &VAR_4->A;
  }
 }

 return VAR_3;
}
