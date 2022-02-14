
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethoc_bd {int stat; } ;
struct ethoc {int dty_tx; int num_tx; int cur_tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ethoc*,int ) ;
 int FUNC_1 (struct ethoc*,unsigned int,struct ethoc_bd*) ;
 int FUNC_2 (struct ethoc*,struct ethoc_bd*) ;
 struct ethoc* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2, int VAR_3)
{
 struct ethoc *VAR_4 = FUNC_3(VAR_2);
 int VAR_5;
 struct ethoc_bd VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5) {
  unsigned int VAR_7;

  VAR_7 = VAR_4->dty_tx & (VAR_4->num_tx-1);

  FUNC_1(VAR_4, VAR_7, &VAR_6);

  if (VAR_6.stat & VAR_1 || (VAR_4->dty_tx == VAR_4->cur_tx)) {
   FUNC_0(VAR_4, VAR_0);







   FUNC_1(VAR_4, VAR_7, &VAR_6);
   if (VAR_6.stat & VAR_1 ||
       (VAR_4->dty_tx == VAR_4->cur_tx))
    break;
  }

  FUNC_2(VAR_4, &VAR_6);
  VAR_4->dty_tx++;
 }

 if ((VAR_4->cur_tx - VAR_4->dty_tx) <= (VAR_4->num_tx / 2))
  FUNC_4(VAR_2);

 return VAR_5;
}
