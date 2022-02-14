
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sk_buff {int * data; } ;
struct lbs_private {int card; TYPE_2__* dev; } ;
struct TYPE_3__ {int rx_dropped; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sk_buff* FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int *,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (TYPE_2__*,char*,int) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,int) ;

__attribute__((used)) static struct sk_buff *FUNC_8(struct lbs_private *VAR_6)
{
 struct sk_buff *VAR_7 = ((void*)0);
 u16 VAR_8;
 u8 *VAR_9;

 VAR_8 = FUNC_1(VAR_6->card, VAR_4);
 if (VAR_8 == 0 || VAR_8 > VAR_5) {
  FUNC_5(VAR_6->dev,
      "card data buffer has invalid # of bytes (%d)\n",
      VAR_8);
  VAR_6->dev->stats.rx_dropped++;
  goto dat_err;
 }

 VAR_7 = FUNC_0(VAR_5 + 2);
 if (!VAR_7)
  goto out;
 FUNC_6(VAR_7, VAR_8);
 FUNC_7(VAR_7, 2);
 VAR_9 = VAR_7->data;


 FUNC_2(VAR_6->card, VAR_3, VAR_9, VAR_8/sizeof(u16));
 if (VAR_8 & 1)
  VAR_9[VAR_8-1] = FUNC_3(VAR_6->card, VAR_3);

dat_err:
 FUNC_4(VAR_6->card, VAR_2, VAR_0);
 FUNC_4(VAR_6->card, VAR_1, VAR_0);

out:
 return VAR_7;
}
