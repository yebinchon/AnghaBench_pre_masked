
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct niu_link_config {scalar_t__ loopback_mode; scalar_t__ active_speed; } ;
struct niu {int flags; struct niu_link_config link_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct niu *VAR_12)
{
 struct niu_link_config *VAR_13 = &VAR_12->link_config;
 u64 VAR_14;

 VAR_14 = VAR_6;

 if (VAR_13->loopback_mode == VAR_7)
  VAR_14 |= VAR_5;
 else
  VAR_14 &= ~VAR_5;

 if (VAR_13->active_speed == VAR_11)
  VAR_14 |= VAR_2;
 else
  VAR_14 &= ~VAR_2;

 VAR_14 &= ~(VAR_4 |
   VAR_3);

 if (!(VAR_12->flags & VAR_8) &&
     !(VAR_12->flags & VAR_9) &&
     VAR_13->active_speed == VAR_10)
  VAR_14 |= VAR_1;
 else
  VAR_14 &= ~VAR_1;

 FUNC_0(VAR_0, VAR_14);
}
