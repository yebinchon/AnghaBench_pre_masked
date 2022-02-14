
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {scalar_t__ context; } ;
struct sk_buff {int dummy; } ;
struct ar9170 {int tx_anch; int tx_cmd; int tx_wait; } ;


 int VAR_0 ;
 int FUNC_0 (struct ar9170*,struct sk_buff*) ;
 int FUNC_1 (struct ar9170*,struct sk_buff*) ;
 int FUNC_2 (struct ar9170*) ;
 int FUNC_3 (struct urb*) ;
 struct urb* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7(struct ar9170 *VAR_1)
{
 struct urb *VAR_2;
 int VAR_3, VAR_4 = 0;

 while ((VAR_2 = FUNC_4(&VAR_1->tx_wait))) {
  struct sk_buff *VAR_5 = (void *)VAR_2->context;
  FUNC_1(VAR_1, VAR_5);
  FUNC_0(VAR_1, VAR_5);
  FUNC_3(VAR_2);
 }

 VAR_3 = FUNC_6(&VAR_1->tx_cmd, 1000);
 if (VAR_3 == 0)
  VAR_4 = -VAR_0;


 VAR_3 = FUNC_6(&VAR_1->tx_anch, 1000);
 if (VAR_3 == 0)
  VAR_4 = -VAR_0;

 FUNC_5(&VAR_1->tx_anch);
 FUNC_2(VAR_1);

 return VAR_4;
}
