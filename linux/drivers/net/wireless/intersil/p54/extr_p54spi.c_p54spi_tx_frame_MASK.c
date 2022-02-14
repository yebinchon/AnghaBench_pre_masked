
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; scalar_t__ data; } ;
struct p54s_priv {int hw; TYPE_1__* spi; } ;
struct p54_hdr {int req_id; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,struct sk_buff*) ;
 int FUNC_3 (struct p54s_priv*,int ) ;
 int FUNC_4 (struct p54s_priv*) ;
 int FUNC_5 (struct p54s_priv*,int ,scalar_t__,int ) ;
 int FUNC_6 (struct p54s_priv*,int ,int ) ;
 scalar_t__ FUNC_7 (struct p54s_priv*) ;

__attribute__((used)) static int FUNC_8(struct p54s_priv *VAR_4, struct sk_buff *VAR_5)
{
 struct p54_hdr *VAR_6 = (struct p54_hdr *) VAR_5->data;
 int VAR_7 = 0;

 if (FUNC_7(VAR_4) < 0)
  return -VAR_1;

 VAR_7 = FUNC_5(VAR_4, VAR_6->req_id, VAR_5->data, VAR_5->len);
 if (VAR_7 < 0)
  goto out;

 if (!FUNC_6(VAR_4, VAR_2,
        VAR_3)) {
  FUNC_1(&VAR_4->spi->dev, "WR_READY timeout\n");
  VAR_7 = -VAR_0;
  goto out;
 }

 FUNC_3(VAR_4, VAR_3);

 if (FUNC_0(VAR_5))
  FUNC_2(VAR_4->hw, VAR_5);
out:
 FUNC_4(VAR_4);
 return VAR_7;
}
