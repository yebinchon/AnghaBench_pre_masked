
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lan743x_tx {int * overflow_skb; int channel_number; int napi; struct lan743x_adapter* adapter; } ;
struct lan743x_adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct lan743x_adapter*,int ,int ,int ,int,int,int) ;
 int FUNC_7 (struct lan743x_adapter*,int ,int ) ;
 int FUNC_8 (struct lan743x_adapter*,int ) ;
 int FUNC_9 (struct lan743x_tx*) ;
 int FUNC_10 (struct lan743x_tx*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(struct lan743x_tx *VAR_4)
{
 struct lan743x_adapter *VAR_5 = VAR_4->adapter;

 FUNC_7(VAR_5,
     VAR_0,
     FUNC_0(VAR_4->channel_number));
 FUNC_8(VAR_5, VAR_4->channel_number);

 FUNC_7(VAR_5,
     VAR_1,
     FUNC_1(VAR_4->channel_number));
 FUNC_7(VAR_5, VAR_3,
     FUNC_4(VAR_4->channel_number));
 FUNC_11(&VAR_4->napi);
 FUNC_12(&VAR_4->napi);

 FUNC_7(VAR_5, VAR_2,
     FUNC_2(VAR_4->channel_number));
 FUNC_6(VAR_5, VAR_2,
     FUNC_3(VAR_4->channel_number),
     0, 1000, 20000, 100);

 FUNC_9(VAR_4);

 if (VAR_4->overflow_skb) {
  FUNC_5(VAR_4->overflow_skb);
  VAR_4->overflow_skb = ((void*)0);
 }

 FUNC_10(VAR_4);
}
