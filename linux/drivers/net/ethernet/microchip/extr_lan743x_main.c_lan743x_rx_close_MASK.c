
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lan743x_rx {int napi; int channel_number; struct lan743x_adapter* adapter; } ;
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
 int FUNC_5 (struct lan743x_adapter*,int ,int ,int ,int,int,int) ;
 int FUNC_6 (struct lan743x_adapter*,int ,int ) ;
 int FUNC_7 (struct lan743x_adapter*,int ) ;
 int FUNC_8 (struct lan743x_rx*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct lan743x_rx *VAR_4)
{
 struct lan743x_adapter *VAR_5 = VAR_4->adapter;

 FUNC_6(VAR_5, VAR_2,
     FUNC_2(VAR_4->channel_number));
 FUNC_5(VAR_5, VAR_2,
     FUNC_3(VAR_4->channel_number),
     0, 1000, 20000, 100);

 FUNC_6(VAR_5, VAR_0,
     FUNC_0(VAR_4->channel_number));
 FUNC_7(VAR_5, VAR_4->channel_number);

 FUNC_6(VAR_5, VAR_1,
     FUNC_1(VAR_4->channel_number));
 FUNC_6(VAR_5, VAR_3,
     FUNC_4(VAR_4->channel_number));
 FUNC_9(&VAR_4->napi);

 FUNC_10(&VAR_4->napi);

 FUNC_8(VAR_4);
}
