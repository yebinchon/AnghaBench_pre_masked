
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct mlx4_en_priv {TYPE_1__* dev; } ;
struct ethhdr {int h_proto; int h_source; int h_dest; } ;
struct TYPE_3__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct sk_buff*,TYPE_1__*) ;
 struct sk_buff* FUNC_4 (TYPE_1__*,scalar_t__) ;
 void* FUNC_5 (struct sk_buff*,unsigned int) ;
 int FUNC_6 (struct sk_buff*,scalar_t__) ;
 int FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_8(struct mlx4_en_priv *VAR_6)
{
 struct sk_buff *VAR_7;
 struct ethhdr *VAR_8;
 unsigned char *VAR_9;
 unsigned int VAR_10 = VAR_4;
 unsigned int VAR_11;
 int VAR_12;



 VAR_7 = FUNC_4(VAR_6->dev, VAR_4 + VAR_2 + VAR_5);
 if (!VAR_7)
  return -VAR_0;

 FUNC_6(VAR_7, VAR_5);

 VAR_8 = FUNC_5(VAR_7, sizeof(struct ethhdr));
 VAR_9 = FUNC_5(VAR_7, VAR_10);
 FUNC_2(VAR_8->h_dest, VAR_6->dev->dev_addr, VAR_1);
 FUNC_0(VAR_8->h_source);
 VAR_8->h_proto = FUNC_1(VAR_3);
 FUNC_7(VAR_7);
 for (VAR_11 = 0; VAR_11 < VAR_10; ++VAR_11)
  VAR_9[VAR_11] = (unsigned char)(VAR_11 & 0xff);


 VAR_12 = FUNC_3(VAR_7, VAR_6->dev);
 return VAR_12;
}
