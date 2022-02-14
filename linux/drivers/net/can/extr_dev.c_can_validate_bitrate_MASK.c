
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct can_priv {unsigned int bitrate_const_cnt; } ;
struct can_bittiming {scalar_t__ const bitrate; } ;


 int VAR_0 ;
 struct can_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int
FUNC_1(struct net_device *VAR_1, struct can_bittiming *VAR_2,
       const u32 *VAR_3,
       const unsigned int VAR_4)
{
 struct can_priv *VAR_5 = FUNC_0(VAR_1);
 unsigned int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  if (VAR_2->bitrate == VAR_3[VAR_6])
   break;
 }

 if (VAR_6 >= VAR_5->bitrate_const_cnt)
  return -VAR_0;

 return 0;
}
