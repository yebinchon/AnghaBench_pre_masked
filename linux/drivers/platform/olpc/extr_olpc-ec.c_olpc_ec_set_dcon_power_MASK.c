
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct olpc_ec_priv {int dcon_enabled; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned char*,int,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct olpc_ec_priv *VAR_1, bool VAR_2)
{
 unsigned char VAR_3 = VAR_2;
 int VAR_4;

 if (VAR_1->dcon_enabled == VAR_2)
  return 0;

 VAR_4 = FUNC_0(VAR_0, &VAR_3, 1, ((void*)0), 0);
 if (VAR_4)
  return VAR_4;

 VAR_1->dcon_enabled = VAR_2;
 return 0;
}
