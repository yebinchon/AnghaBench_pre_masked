
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_device {int* Regdot11HTOperationalRateSet; int dev; scalar_t__ (* GetHalfNmodeSupportByAPsHandler ) (int ) ;} ;


 int FUNC_0 (struct ieee80211_device*,int*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static u8 FUNC_2(struct ieee80211_device *VAR_0, u8 *VAR_1,
     u8 *VAR_2)
{
 u8 VAR_3 = 0;


 for (VAR_3 = 0; VAR_3 <= 15; VAR_3++)
  VAR_2[VAR_3] = VAR_0->Regdot11HTOperationalRateSet[VAR_3] & VAR_1[VAR_3];







 FUNC_0(VAR_0, VAR_2);


 if (VAR_0->GetHalfNmodeSupportByAPsHandler(VAR_0->dev))
  VAR_2[1] = 0;





 for (VAR_3 = 2; VAR_3 <= 15; VAR_3++)
  VAR_2[VAR_3] = 0;

 return 1;
}
