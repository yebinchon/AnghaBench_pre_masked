
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {struct sk_buff* next; } ;
struct octeon_ethernet {TYPE_1__* tx_free_list; scalar_t__ fau; int port; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*) ;
 struct octeon_ethernet* FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_12(struct net_device *VAR_2)
{
 int VAR_3;
 int VAR_4, VAR_5;
 int VAR_6 = 0;
 int VAR_7 = 0;
 unsigned long VAR_8;
 struct octeon_ethernet *VAR_9 = FUNC_6(VAR_2);

 VAR_5 = FUNC_4(VAR_9->port);

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  if (FUNC_9(&VAR_9->tx_free_list[VAR_4]) == 0)
   continue;
  VAR_3 = FUNC_3(VAR_9->fau + VAR_4 * 4,
             VAR_1);
  VAR_3 = FUNC_1(VAR_3,
        VAR_9->fau + VAR_4 * 4);
  VAR_6 += VAR_3;
  if (VAR_3 > 0) {
   struct sk_buff *VAR_10 = ((void*)0);

   FUNC_10(&VAR_9->tx_free_list[VAR_4].lock, VAR_8);
   while (VAR_3 > 0) {
    struct sk_buff *VAR_11;

    VAR_11 = FUNC_0(&VAR_9->tx_free_list[VAR_4]);
    VAR_11->next = VAR_10;
    VAR_10 = VAR_11;
    VAR_3--;
   }
   FUNC_11(&VAR_9->tx_free_list[VAR_4].lock,
            VAR_8);

   while (VAR_10) {
    struct sk_buff *VAR_12 = VAR_10;

    VAR_10 = VAR_10->next;
    FUNC_5(VAR_12);
   }
  }
  VAR_7 += FUNC_9(&VAR_9->tx_free_list[VAR_4]);
 }
 if (VAR_7 < VAR_0 && FUNC_7(VAR_2))
  FUNC_8(VAR_2);
 if (VAR_7)
  FUNC_2();
}
