
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct de_private {int ring_dma; struct net_device* dev; } ;
struct de_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct de_private*) ;
 int VAR_8 ;
 int FUNC_1 (struct de_private*) ;
 int FUNC_2 (struct de_private*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6 (struct de_private *VAR_9)
{
 struct net_device *VAR_10 = VAR_9->dev;
 u32 VAR_11;
 int VAR_12;

 FUNC_0(VAR_9);

 VAR_11 = FUNC_4(VAR_2) & ~VAR_3;

 VAR_12 = FUNC_1(VAR_9);
 if (VAR_12)
  return VAR_12;

 FUNC_2(VAR_9);

 FUNC_5(VAR_5, VAR_9->ring_dma);
 FUNC_5(VAR_7, VAR_9->ring_dma + (sizeof(struct de_desc) * VAR_0));

 FUNC_5(VAR_2, VAR_6 | VAR_11);

 FUNC_4(VAR_4);

 FUNC_5(VAR_1, VAR_8);

 FUNC_3(VAR_10);

 return 0;
}
