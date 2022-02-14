
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wiphy {int dummy; } ;
struct regulatory_request {scalar_t__ initiator; int alpha2; } ;
struct ath_regulatory {int current_rd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ath_regulatory*) ;
 int FUNC_1 (struct ath_regulatory*) ;
 int FUNC_2 (struct wiphy*,scalar_t__,struct ath_regulatory*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct wiphy *VAR_3,
     struct ath_regulatory *VAR_4,
     struct regulatory_request *VAR_5)
{
 u16 VAR_6;

 if (VAR_5->initiator == VAR_2 &&
     !FUNC_1(VAR_4))
  return -VAR_1;

 VAR_6 = FUNC_3(VAR_5->alpha2);
 if (VAR_6 == (u16) -1)
  return -VAR_1;

 VAR_4->current_rd = VAR_0;
 VAR_4->current_rd |= VAR_6;

 FUNC_0(VAR_4);

 FUNC_2(VAR_3, VAR_5->initiator, VAR_4);

 return 0;
}
