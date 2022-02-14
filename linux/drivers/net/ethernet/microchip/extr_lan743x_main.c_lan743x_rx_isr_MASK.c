
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lan743x_rx {int channel_number; int napi; struct lan743x_adapter* adapter; } ;
struct lan743x_adapter {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct lan743x_adapter*,int ) ;
 int FUNC_3 (struct lan743x_adapter*,int ,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(void *VAR_7, u32 VAR_8, u32 VAR_9)
{
 struct lan743x_rx *VAR_10 = VAR_7;
 struct lan743x_adapter *VAR_11 = VAR_10->adapter;
 bool VAR_12 = 1;

 if (VAR_9 & VAR_5) {
  FUNC_3(VAR_11, VAR_2,
      FUNC_1(VAR_10->channel_number));
 }

 if (VAR_8 & FUNC_1(VAR_10->channel_number)) {
  u32 VAR_13 = FUNC_0(VAR_10->channel_number);
  u32 VAR_14;
  u32 VAR_15;

  if (VAR_9 & VAR_6)
   VAR_14 = FUNC_2(VAR_11, VAR_1);
  else
   VAR_14 = VAR_13;
  if (VAR_9 & VAR_4)
   VAR_15 = FUNC_2(VAR_11,
             VAR_0);
  else
   VAR_15 = VAR_13;

  VAR_15 &= VAR_13;
  VAR_14 &= VAR_15;
  if (VAR_14 & VAR_13) {
   FUNC_4(&VAR_10->napi);
   VAR_12 = 0;
  }
 }

 if (VAR_12) {

  FUNC_3(VAR_11, VAR_3,
      FUNC_1(VAR_10->channel_number));
 }
}
