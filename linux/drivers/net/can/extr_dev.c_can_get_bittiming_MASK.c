
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct can_bittiming_const {int dummy; } ;
struct can_bittiming {scalar_t__ bitrate; scalar_t__ tq; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,struct can_bittiming*,struct can_bittiming_const const*) ;
 int FUNC_1 (struct net_device*,struct can_bittiming*,struct can_bittiming_const const*) ;
 int FUNC_2 (struct net_device*,struct can_bittiming*,int const*,unsigned int const) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, struct can_bittiming *VAR_2,
        const struct can_bittiming_const *VAR_3,
        const u32 *VAR_4,
        const unsigned int VAR_5)
{
 int VAR_6;






 if (!VAR_2->tq && VAR_2->bitrate && VAR_3)
  VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3);
 else if (VAR_2->tq && !VAR_2->bitrate && VAR_3)
  VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3);
 else if (!VAR_2->tq && VAR_2->bitrate && VAR_4)
  VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_4,
        VAR_5);
 else
  VAR_6 = -VAR_0;

 return VAR_6;
}
