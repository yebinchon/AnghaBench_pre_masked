
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct TYPE_2__ {int lock; } ;
struct ns83820 {TYPE_1__ rx_info; } ;
struct net_device {int dummy; } ;
typedef scalar_t__ gfp_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 struct ns83820* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 scalar_t__ VAR_3 ;
 struct sk_buff* FUNC_2 (struct net_device*,scalar_t__,scalar_t__) ;
 int FUNC_3 (char*,struct net_device*) ;
 int FUNC_4 (struct ns83820*) ;
 long FUNC_5 (struct ns83820*,struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,scalar_t__) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static inline int FUNC_10(struct net_device *VAR_4, gfp_t VAR_5)
{
 struct ns83820 *VAR_6 = FUNC_0(VAR_4);
 unsigned VAR_7;
 unsigned long VAR_8 = 0;

 if (FUNC_9(FUNC_4(VAR_6) <= 2))
  return 0;

 FUNC_3("rx_refill(%p)\n", VAR_4);
 if (VAR_5 == VAR_1)
  FUNC_7(&VAR_6->rx_info.lock, VAR_8);
 for (VAR_7=0; VAR_7<VAR_2; VAR_7++) {
  struct sk_buff *VAR_9;
  long VAR_10;


  VAR_9 = FUNC_2(VAR_4, VAR_3+16, VAR_5);
  if (FUNC_9(!VAR_9))
   break;

  FUNC_6(VAR_9, VAR_9->data - FUNC_1(VAR_9->data, 16));
  if (VAR_5 != VAR_1)
   FUNC_7(&VAR_6->rx_info.lock, VAR_8);
  VAR_10 = FUNC_5(VAR_6, VAR_9);
  if (VAR_5 != VAR_1)
   FUNC_8(&VAR_6->rx_info.lock, VAR_8);
  if (VAR_10) {
   VAR_7 = 1;
   break;
  }
 }
 if (VAR_5 == VAR_1)
  FUNC_8(&VAR_6->rx_info.lock, VAR_8);

 return VAR_7 ? 0 : -VAR_0;
}
