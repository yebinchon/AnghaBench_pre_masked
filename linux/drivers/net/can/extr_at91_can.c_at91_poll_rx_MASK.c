
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct at91_priv {scalar_t__ rx_next; } ;


 int VAR_0 ;
 int FUNC_0 (struct at91_priv*) ;
 int FUNC_1 (struct at91_priv*,unsigned int) ;
 int FUNC_2 (struct at91_priv*,int ) ;
 int FUNC_3 (struct net_device*,unsigned int) ;
 unsigned int FUNC_4 (unsigned long const*,unsigned int,scalar_t__) ;
 scalar_t__ FUNC_5 (struct at91_priv*) ;
 unsigned int FUNC_6 (struct at91_priv*) ;
 scalar_t__ FUNC_7 (struct at91_priv*) ;
 int FUNC_8 (struct at91_priv*) ;
 unsigned int FUNC_9 (struct at91_priv*) ;
 int FUNC_10 (struct net_device*,char*) ;
 struct at91_priv* FUNC_11 (struct net_device*) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_1, int VAR_2)
{
 struct at91_priv *VAR_3 = FUNC_11(VAR_1);
 u32 VAR_4 = FUNC_2(VAR_3, VAR_0);
 const unsigned long *VAR_5 = (unsigned long *)&VAR_4;
 unsigned int VAR_6;
 int VAR_7 = 0;

 if (VAR_3->rx_next > FUNC_7(VAR_3) &&
     VAR_4 & FUNC_8(VAR_3))
  FUNC_10(VAR_1,
   "order of incoming frames cannot be guaranteed\n");

 again:
 for (VAR_6 = FUNC_4(VAR_5, FUNC_9(VAR_3), VAR_3->rx_next);
      VAR_6 < FUNC_9(VAR_3) && VAR_2 > 0;
      VAR_4 = FUNC_2(VAR_3, VAR_0),
      VAR_6 = FUNC_4(VAR_5, FUNC_9(VAR_3), ++VAR_3->rx_next)) {
  FUNC_3(VAR_1, VAR_6);


  if (VAR_6 == FUNC_7(VAR_3))

   FUNC_0(VAR_3);
  else if (VAR_6 > FUNC_7(VAR_3))

   FUNC_1(VAR_3, VAR_6);

  VAR_7++;
  VAR_2--;
 }


 if (VAR_3->rx_next > FUNC_7(VAR_3) &&
     VAR_6 > FUNC_6(VAR_3)) {
  VAR_3->rx_next = FUNC_5(VAR_3);
  if (VAR_2 > 0)
   goto again;
 }

 return VAR_7;
}
