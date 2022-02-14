
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnt_private {scalar_t__ byBBVGACurrent; scalar_t__* abyBBVGA; scalar_t__ byRFType; scalar_t__ byLocalID; scalar_t__ byBBType; int byCurrentCh; int lock; scalar_t__ PortOffset; int byCurPwr; scalar_t__ bEnablePSMode; scalar_t__ bUpdateBBVGA; } ;
struct ieee80211_channel {int hw_value; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct vnt_private*,scalar_t__) ;
 int FUNC_1 (struct vnt_private*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (struct vnt_private*,int ,int ) ;
 int FUNC_6 (struct vnt_private*,scalar_t__,int ) ;
 int FUNC_7 (struct vnt_private*,int ,int ) ;
 int FUNC_8 (struct vnt_private*,scalar_t__,int ) ;
 int FUNC_9 (scalar_t__,int ) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

bool FUNC_12(struct vnt_private *VAR_9, struct ieee80211_channel *VAR_10)
{
 bool VAR_11 = 1;

 if (VAR_9->byCurrentCh == VAR_10->hw_value)
  return VAR_11;


 if (VAR_9->bUpdateBBVGA &&
     VAR_9->byBBVGACurrent != VAR_9->abyBBVGA[0]) {
  VAR_9->byBBVGACurrent = VAR_9->abyBBVGA[0];

  FUNC_0(VAR_9, VAR_9->byBBVGACurrent);
 }


 FUNC_2(VAR_9->PortOffset, VAR_2, VAR_1);





 if (VAR_9->byRFType == VAR_8)
  FUNC_5(VAR_9, VAR_9->byCurrentCh,
        VAR_10->hw_value);

 VAR_9->byCurrentCh = VAR_10->hw_value;
 VAR_11 &= FUNC_6(VAR_9, VAR_9->byRFType,
    VAR_10->hw_value);


 if (VAR_9->bEnablePSMode)
  FUNC_8(VAR_9, VAR_9->byRFType, VAR_10->hw_value);

 FUNC_1(VAR_9);

 if (VAR_9->byLocalID > VAR_7) {
  unsigned long VAR_12;

  FUNC_10(&VAR_9->lock, VAR_12);


  FUNC_4(VAR_9->PortOffset);
  FUNC_7(VAR_9, VAR_5, VAR_9->byCurrentCh);
  FUNC_9(VAR_9->PortOffset + VAR_3,
        VAR_9->byCurPwr);
  FUNC_7(VAR_9, VAR_6, VAR_9->byCurrentCh);
  FUNC_9(VAR_9->PortOffset + VAR_4,
        VAR_9->byCurPwr);
  FUNC_3(VAR_9->PortOffset);

  FUNC_11(&VAR_9->lock, VAR_12);
 }

 if (VAR_9->byBBType == VAR_0)
  FUNC_7(VAR_9, VAR_5, VAR_9->byCurrentCh);
 else
  FUNC_7(VAR_9, VAR_6, VAR_9->byCurrentCh);

 return VAR_11;
}
