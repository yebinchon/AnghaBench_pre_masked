
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pxa3xx_gcu_priv {int shared_phys; int base_time; TYPE_1__* shared; } ;
struct TYPE_2__ {int buffer_phys; int magic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct pxa3xx_gcu_priv*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct pxa3xx_gcu_priv *VAR_10)
{
 FUNC_0("RESET");


 FUNC_1(VAR_10, VAR_5, 0);


 FUNC_1(VAR_10, VAR_4, VAR_0);
 FUNC_1(VAR_10, VAR_4, 0);

 FUNC_3(VAR_10->shared, 0, VAR_9);
 VAR_10->shared->buffer_phys = VAR_10->shared_phys;
 VAR_10->shared->magic = VAR_3;

 FUNC_2(&VAR_10->base_time);


 FUNC_1(VAR_10, VAR_7, 0);
 FUNC_1(VAR_10, VAR_6, VAR_10->shared_phys);
 FUNC_1(VAR_10, VAR_8, VAR_10->shared_phys);


 FUNC_1(VAR_10, VAR_5, VAR_1 & ~VAR_2);
}
