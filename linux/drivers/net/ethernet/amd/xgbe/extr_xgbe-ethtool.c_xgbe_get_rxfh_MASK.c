
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct xgbe_prv_data {int rss_key; int * rss_table; } ;
struct net_device {int dummy; } ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *,int ,int) ;
 struct xgbe_prv_data* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3, u32 *VAR_4, u8 *VAR_5,
    u8 *VAR_6)
{
 struct xgbe_prv_data *VAR_7 = FUNC_3(VAR_3);
 unsigned int VAR_8;

 if (VAR_4) {
  for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_7->rss_table); VAR_8++)
   VAR_4[VAR_8] = FUNC_1(VAR_7->rss_table[VAR_8],
        VAR_2, VAR_0);
 }

 if (VAR_5)
  FUNC_2(VAR_5, VAR_7->rss_key, sizeof(VAR_7->rss_key));

 if (VAR_6)
  *VAR_6 = VAR_1;

 return 0;
}
