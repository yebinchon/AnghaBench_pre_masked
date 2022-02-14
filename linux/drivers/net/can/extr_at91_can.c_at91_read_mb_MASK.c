
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct can_frame {int can_id; scalar_t__ data; int can_dlc; } ;
struct at91_priv {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int VAR_0 ;
 int FUNC_3 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct at91_priv const*,int ) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct at91_priv const*,int ,int) ;
 int FUNC_7 (int) ;
 unsigned int FUNC_8 (struct at91_priv const*) ;
 struct at91_priv* FUNC_9 (struct net_device*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct net_device *VAR_7, unsigned int VAR_8,
  struct can_frame *VAR_9)
{
 const struct at91_priv *VAR_10 = FUNC_9(VAR_7);
 u32 VAR_11, VAR_12;

 VAR_12 = FUNC_4(VAR_10, FUNC_2(VAR_8));
 if (VAR_12 & VAR_0)
  VAR_9->can_id = ((VAR_12 >> 0) & VAR_4) | VAR_3;
 else
  VAR_9->can_id = (VAR_12 >> 18) & VAR_6;

 VAR_11 = FUNC_4(VAR_10, FUNC_3(VAR_8));
 VAR_9->can_dlc = FUNC_7((VAR_11 >> 16) & 0xf);

 if (VAR_11 & VAR_2)
  VAR_9->can_id |= VAR_5;
 else {
  *(u32 *)(VAR_9->data + 0) = FUNC_4(VAR_10, FUNC_1(VAR_8));
  *(u32 *)(VAR_9->data + 4) = FUNC_4(VAR_10, FUNC_0(VAR_8));
 }


 FUNC_6(VAR_10, FUNC_2(VAR_8), VAR_0);

 if (FUNC_10(VAR_8 == FUNC_8(VAR_10) && VAR_11 & VAR_1))
  FUNC_5(VAR_7);
}
