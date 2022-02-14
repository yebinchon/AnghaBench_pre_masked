
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qman_portal {int dummy; } ;
struct qm_portal_config {int irq; } ;


 struct qman_portal** VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,int ) ;
 struct qm_portal_config* FUNC_3 (struct qman_portal*) ;
 int FUNC_4 (struct qm_portal_config const*,unsigned int) ;

__attribute__((used)) static int FUNC_5(unsigned int VAR_2)
{
 struct qman_portal *VAR_3;
 const struct qm_portal_config *VAR_4;

 VAR_3 = VAR_0[VAR_2];
 if (VAR_3) {
  VAR_4 = FUNC_3(VAR_3);
  if (VAR_4) {

   VAR_2 = FUNC_0(VAR_1, VAR_2);
   FUNC_2(VAR_4->irq, FUNC_1(VAR_2));
   FUNC_4(VAR_4, VAR_2);
  }
 }
 return 0;
}
