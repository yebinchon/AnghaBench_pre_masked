
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bman_portal {int dummy; } ;
struct bm_portal_config {int irq; } ;


 struct bman_portal** VAR_0 ;
 struct bm_portal_config* FUNC_0 (struct bman_portal*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_1)
{
 struct bman_portal *VAR_2 = VAR_0[VAR_1];
 const struct bm_portal_config *VAR_3;

 if (!VAR_2)
  return 0;

 VAR_3 = FUNC_0(VAR_2);
 if (!VAR_3)
  return 0;

 FUNC_2(VAR_3->irq, FUNC_1(VAR_1));
 return 0;
}
