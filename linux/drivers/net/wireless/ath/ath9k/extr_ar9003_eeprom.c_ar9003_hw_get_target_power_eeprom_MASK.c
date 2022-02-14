
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ath_hw {int dummy; } ;
struct ath_common {int dummy; } ;
struct ath9k_channel {int channel; } ;


 int FUNC_0 (struct ath9k_channel*) ;
 scalar_t__ FUNC_1 (struct ath9k_channel*) ;
 int VAR_0 ;
 int FUNC_2 (struct ath_hw*,int ,int *) ;
 int FUNC_3 (struct ath_hw*,int ,int *,int) ;
 int FUNC_4 (struct ath_hw*,int ,int *,int) ;
 int FUNC_5 (struct ath_hw*,int ,int *,int) ;
 unsigned int VAR_1 ;
 struct ath_common* FUNC_6 (struct ath_hw*) ;
 int FUNC_7 (struct ath_common*,int ,char*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_8(struct ath_hw *VAR_2,
           struct ath9k_channel *VAR_3,
           u8 *VAR_4)
{
 bool VAR_5 = FUNC_0(VAR_3);
 unsigned int VAR_6 = 0;
 struct ath_common *VAR_7 = FUNC_6(VAR_2);
 u16 VAR_8 = VAR_3->channel;

 if (VAR_5)
  FUNC_2(VAR_2, VAR_8, VAR_4);

 FUNC_5(VAR_2, VAR_8, VAR_4, VAR_5);
 FUNC_3(VAR_2, VAR_8, VAR_4, VAR_5);

 if (FUNC_1(VAR_3))
  FUNC_4(VAR_2, VAR_8, VAR_4,
       VAR_5);

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  FUNC_7(VAR_7, VAR_0, "TPC[%02d] 0x%08x\n",
   VAR_6, VAR_4[VAR_6]);
 }
}
