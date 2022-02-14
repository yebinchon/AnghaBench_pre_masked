
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct oid_par_priv {scalar_t__ type_of_oid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct oid_par_priv*) ;
 int FUNC_1 (struct oid_par_priv*) ;

uint FUNC_2(struct oid_par_priv *VAR_2)
{
 uint VAR_3 = VAR_1;

 if (VAR_2->type_of_oid == VAR_0)
  VAR_3 = FUNC_0(VAR_2);
 else
  VAR_3 = FUNC_1(VAR_2);
 return VAR_3;
}
