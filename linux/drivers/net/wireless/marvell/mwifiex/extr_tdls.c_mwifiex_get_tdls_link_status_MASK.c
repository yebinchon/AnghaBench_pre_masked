
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mwifiex_sta_node {int tdls_status; } ;
struct mwifiex_private {int dummy; } ;


 int VAR_0 ;
 struct mwifiex_sta_node* FUNC_0 (struct mwifiex_private*,int const*) ;

int FUNC_1(struct mwifiex_private *VAR_1, const u8 *VAR_2)
{
 struct mwifiex_sta_node *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3->tdls_status;

 return VAR_0;
}
