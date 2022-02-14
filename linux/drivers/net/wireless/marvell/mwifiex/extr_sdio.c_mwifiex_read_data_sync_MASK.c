
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct sdio_mmc_card {int func; } ;
struct mwifiex_adapter {struct sdio_mmc_card* card; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__*,int,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct mwifiex_adapter *VAR_5, u8 *VAR_6,
      u32 VAR_7, u32 VAR_8, u8 VAR_9)
{
 struct sdio_mmc_card *VAR_10 = VAR_5->card;
 int VAR_11;
 u8 VAR_12 = (VAR_8 & VAR_3) ? VAR_1
         : VAR_0;
 u32 VAR_13 = (VAR_12 == VAR_0) ? VAR_2 : 1;
 u32 VAR_14 = (VAR_12 == VAR_0) ? (VAR_7 / VAR_2)
   : VAR_7;
 u32 VAR_15 = (VAR_8 & VAR_4);

 if (VAR_9)
  FUNC_0(VAR_10->func);

 VAR_11 = FUNC_1(VAR_10->func, VAR_6, VAR_15, VAR_14 * VAR_13);

 if (VAR_9)
  FUNC_2(VAR_10->func);

 return VAR_11;
}
