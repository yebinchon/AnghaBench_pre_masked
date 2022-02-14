
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct qede_rx_queue {int dummy; } ;
struct qede_fastpath {int napi; } ;
struct qede_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_3(struct qede_dev *VAR_1,
        struct qede_fastpath *VAR_2,
        struct qede_rx_queue *VAR_3,
        struct sk_buff *VAR_4, u16 VAR_5)
{
 if (VAR_5)
  FUNC_0(VAR_4, FUNC_1(VAR_0), VAR_5);

 FUNC_2(&VAR_2->napi, VAR_4);
}
