
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct enc28j60_net {int max_pk_counter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct enc28j60_net*,int ) ;
 int FUNC_2 (int ,struct net_device*,char*,int) ;
 struct enc28j60_net* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct enc28j60_net*) ;
 scalar_t__ FUNC_5 (struct enc28j60_net*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2)
{
 struct enc28j60_net *VAR_3 = FUNC_3(VAR_2);
 int VAR_4, VAR_5;

 VAR_4 = FUNC_1(VAR_3, VAR_0);
 if (VAR_4 && FUNC_4(VAR_3))
  FUNC_2(VAR_1, VAR_2, "intRX, pk_cnt: %d\n",
         VAR_4);
 if (VAR_4 > VAR_3->max_pk_counter) {

  VAR_3->max_pk_counter = VAR_4;
  if (FUNC_5(VAR_3) && VAR_3->max_pk_counter > 1)
   FUNC_2(VAR_1, VAR_2, "RX max_pk_cnt: %d\n",
          VAR_3->max_pk_counter);
 }
 VAR_5 = VAR_4;
 while (VAR_4-- > 0)
  FUNC_0(VAR_2);

 return VAR_5;
}
