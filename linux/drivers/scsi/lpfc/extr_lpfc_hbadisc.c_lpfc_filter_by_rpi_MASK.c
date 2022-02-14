
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct lpfc_nodelist {scalar_t__ nlp_rpi; } ;


 int FUNC_0 (struct lpfc_nodelist*) ;

__attribute__((used)) static int
FUNC_1(struct lpfc_nodelist *VAR_0, void *VAR_1)
{
 uint16_t *VAR_2 = VAR_1;


 if (!FUNC_0(VAR_0))
  return 0;

 return VAR_0->nlp_rpi == *VAR_2;
}
