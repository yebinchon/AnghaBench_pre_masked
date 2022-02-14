
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xcan_priv {scalar_t__ (* read_reg ) (struct xcan_priv*,int ) ;} ;
struct net_device {int dummy; } ;
struct can_frame {scalar_t__* data; } ;
typedef enum can_state { ____Placeholder_can_state } can_state ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct net_device*,struct can_frame*,int,int) ;
 struct xcan_priv* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct xcan_priv*,int ) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_5,
     enum can_state VAR_6,
     struct can_frame *VAR_7)
{
 struct xcan_priv *VAR_8 = FUNC_2(VAR_5);
 u32 VAR_9 = VAR_8->read_reg(VAR_8, VAR_1);
 u32 VAR_10 = VAR_9 & VAR_3;
 u32 VAR_11 = (VAR_9 & VAR_2) >> VAR_4;
 enum can_state VAR_12 = VAR_10 >= VAR_11 ? VAR_6 : 0;
 enum can_state VAR_13 = VAR_10 <= VAR_11 ? VAR_6 : 0;


 if (FUNC_0(VAR_6 > VAR_0))
  return;

 FUNC_1(VAR_5, VAR_7, VAR_12, VAR_13);

 if (VAR_7) {
  VAR_7->data[6] = VAR_10;
  VAR_7->data[7] = VAR_11;
 }
}
