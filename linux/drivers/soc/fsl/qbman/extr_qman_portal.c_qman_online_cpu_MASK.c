
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qman_portal {int dummy; } ;
struct qm_portal_config {int irq; } ;


 struct qman_portal** VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,int ) ;
 struct qm_portal_config* FUNC_2 (struct qman_portal*) ;
 int FUNC_3 (struct qm_portal_config const*,unsigned int) ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_1)
{
 struct qman_portal *VAR_2;
 const struct qm_portal_config *VAR_3;

 VAR_2 = VAR_0[VAR_1];
 if (VAR_2) {
  VAR_3 = FUNC_2(VAR_2);
  if (VAR_3) {
   FUNC_1(VAR_3->irq, FUNC_0(VAR_1));
   FUNC_3(VAR_3, VAR_1);
  }
 }
 return 0;
}
