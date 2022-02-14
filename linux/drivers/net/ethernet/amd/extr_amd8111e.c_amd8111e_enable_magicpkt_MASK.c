
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amd8111e_priv {scalar_t__ mmio; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct amd8111e_priv *VAR_6)
{
 FUNC_1( VAR_5|VAR_3, VAR_6->mmio + VAR_0);
 FUNC_1( VAR_4|VAR_2, VAR_6->mmio + VAR_1);


 FUNC_0(VAR_6->mmio + VAR_1);
 return 0;
}
