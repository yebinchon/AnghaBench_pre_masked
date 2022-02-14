
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_cfg {scalar_t__ nvm_type; } ;
typedef int __le32 ;
typedef int __le16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(const struct iwl_cfg *VAR_3, const __le16 *VAR_4)
{
 if (VAR_3->nvm_type != VAR_0)
  return FUNC_0(VAR_4 + VAR_1);
 else
  return FUNC_1((__le32 *)(VAR_4 +
            VAR_2));
}
