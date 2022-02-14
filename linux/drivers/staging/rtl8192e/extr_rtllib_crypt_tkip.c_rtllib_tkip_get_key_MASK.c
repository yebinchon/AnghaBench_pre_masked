
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct rtllib_tkip_data {scalar_t__ tx_iv16; int tx_iv32; int key; int key_set; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_1, int VAR_2, u8 *VAR_3, void *VAR_4)
{
 struct rtllib_tkip_data *VAR_5 = VAR_4;

 if (VAR_2 < VAR_0)
  return -1;

 if (!VAR_5->key_set)
  return 0;
 FUNC_0(VAR_1, VAR_5->key, VAR_0);

 if (VAR_3) {

  u16 VAR_6 = VAR_5->tx_iv16;
  u32 VAR_7 = VAR_5->tx_iv32;

  if (VAR_6 == 0)
   VAR_7--;
  VAR_6--;
  VAR_3[0] = VAR_5->tx_iv16;
  VAR_3[1] = VAR_5->tx_iv16 >> 8;
  VAR_3[2] = VAR_5->tx_iv32;
  VAR_3[3] = VAR_5->tx_iv32 >> 8;
  VAR_3[4] = VAR_5->tx_iv32 >> 16;
  VAR_3[5] = VAR_5->tx_iv32 >> 24;
 }

 return VAR_0;
}
