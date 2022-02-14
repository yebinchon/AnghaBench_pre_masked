
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sierra_net_data {int tx_hdr_template; } ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int const,int *) ;

__attribute__((used)) static void FUNC_2(u8 *VAR_0, const u16 VAR_1,
  struct sierra_net_data *VAR_2)
{



 FUNC_1(VAR_1, VAR_0);
 FUNC_0(VAR_0+2, VAR_2->tx_hdr_template, sizeof(VAR_2->tx_hdr_template));
}
