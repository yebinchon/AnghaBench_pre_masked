
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mwifiex_tdls_config {int enable; } ;
struct mwifiex_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mwifiex_private*,int ,int ,int ,struct mwifiex_tdls_config*,int) ;

__attribute__((used)) static int FUNC_2(struct mwifiex_private *VAR_2, u8 VAR_3)
{
 struct mwifiex_tdls_config VAR_4;

 VAR_4.enable = FUNC_0(VAR_3);
 return FUNC_1(VAR_2, VAR_1,
    VAR_0, 0, &VAR_4, 1);
}
