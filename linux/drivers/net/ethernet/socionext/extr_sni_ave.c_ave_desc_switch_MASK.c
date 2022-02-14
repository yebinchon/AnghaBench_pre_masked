
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ave_private {scalar_t__ base; } ;
typedef enum desc_state { ____Placeholder_desc_state } desc_state ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct net_device*,char*) ;
 struct ave_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int,int,int,int) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_7, enum desc_state VAR_8)
{
 struct ave_private *VAR_9 = FUNC_1(VAR_7);
 int VAR_10 = 0;
 u32 VAR_11;

 switch (VAR_8) {
 case 129:
  FUNC_4(VAR_4 | VAR_1, VAR_9->base + VAR_0);
  break;

 case 128:
  FUNC_4(0, VAR_9->base + VAR_0);
  if (FUNC_3(VAR_9->base + VAR_0, VAR_11, !VAR_11,
           150, 15000)) {
   FUNC_0(VAR_7, "can't stop descriptor\n");
   VAR_10 = -VAR_5;
  }
  break;

 case 130:
  VAR_11 = FUNC_2(VAR_9->base + VAR_0);
  VAR_11 |= VAR_2;
  VAR_11 &= ~VAR_3;
  FUNC_4(VAR_11, VAR_9->base + VAR_0);
  if (FUNC_3(VAR_9->base + VAR_0, VAR_11,
           VAR_11 & (VAR_2 << 16),
           150, 150000)) {
   FUNC_0(VAR_7, "can't suspend descriptor\n");
   VAR_10 = -VAR_5;
  }
  break;

 case 131:
  VAR_11 = FUNC_2(VAR_9->base + VAR_0);
  VAR_11 &= ~VAR_2;
  VAR_11 &= ~VAR_3;
  FUNC_4(VAR_11, VAR_9->base + VAR_0);
  break;

 default:
  VAR_10 = -VAR_6;
  break;
 }

 return VAR_10;
}
