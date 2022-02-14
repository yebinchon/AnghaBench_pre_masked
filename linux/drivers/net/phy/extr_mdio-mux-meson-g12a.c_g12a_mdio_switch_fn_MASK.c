
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g12a_mdio_mux {int dummy; } ;


 int VAR_0 ;


 struct g12a_mdio_mux* FUNC_0 (void*) ;
 int FUNC_1 (struct g12a_mdio_mux*) ;
 int FUNC_2 (struct g12a_mdio_mux*) ;

__attribute__((used)) static int FUNC_3(int VAR_1, int VAR_2,
          void *VAR_3)
{
 struct g12a_mdio_mux *VAR_4 = FUNC_0(VAR_3);

 if (VAR_1 == VAR_2)
  return 0;

 switch (VAR_2) {
 case 129:
  return FUNC_1(VAR_4);
 case 128:
  return FUNC_2(VAR_4);
 default:
  return -VAR_0;
 }
}
