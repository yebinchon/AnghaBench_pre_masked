
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mwifiex_sta_node {int is_11n_enabled; } ;
struct mwifiex_private {int dummy; } ;


 struct mwifiex_sta_node* FUNC_0 (struct mwifiex_private*,int const*) ;

__attribute__((used)) static inline u8
FUNC_1(struct mwifiex_private *VAR_0, const u8 *VAR_1)
{
 struct mwifiex_sta_node *VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2->is_11n_enabled;

 return 0;
}
