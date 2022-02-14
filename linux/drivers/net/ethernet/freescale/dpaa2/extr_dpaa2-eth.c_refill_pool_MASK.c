
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dpaa2_eth_priv {int dummy; } ;
struct dpaa2_eth_channel {scalar_t__ buf_count; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dpaa2_eth_priv*,struct dpaa2_eth_channel*,int ) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct dpaa2_eth_priv *VAR_3,
         struct dpaa2_eth_channel *VAR_4,
         u16 VAR_5)
{
 int VAR_6;

 if (FUNC_1(VAR_4->buf_count >= VAR_1))
  return 0;

 do {
  VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_5);
  if (FUNC_2(!VAR_6)) {

   break;
  }
  VAR_4->buf_count += VAR_6;
 } while (VAR_4->buf_count < VAR_0);

 if (FUNC_2(VAR_4->buf_count < VAR_0))
  return -VAR_2;

 return 0;
}
