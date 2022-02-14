
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bman_portal {int dummy; } ;
struct bm_portal_config {int irq; } ;


 struct bman_portal** VAR_0 ;
 struct bm_portal_config* FUNC_0 (struct bman_portal*) ;
 int VAR_1 ;
 unsigned int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_2)
{
 struct bman_portal *VAR_3 = VAR_0[VAR_2];
 const struct bm_portal_config *VAR_4;

 if (!VAR_3)
  return 0;

 VAR_4 = FUNC_0(VAR_3);
 if (!VAR_4)
  return 0;


 VAR_2 = FUNC_1(VAR_1, VAR_2);
 FUNC_3(VAR_4->irq, FUNC_2(VAR_2));
 return 0;
}
