
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wil6210_priv {int** ring2cid_tid; TYPE_1__* sta; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int addr; } ;


 int FUNC_0 (int *,int ) ;
 int * FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct wil6210_priv *VAR_0,
     struct sk_buff *VAR_1, int VAR_2)
{
 u8 *VAR_3 = FUNC_1(VAR_1);
 int VAR_4 = VAR_0->ring2cid_tid[VAR_2][0];

 FUNC_0(VAR_3, VAR_0->sta[VAR_4].addr);
}
