
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct jme_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct jme_adapter*,int ) ;
 int FUNC_1 (struct jme_adapter*,int ,int) ;
 struct jme_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;

__attribute__((used)) static int
FUNC_8(struct net_device *VAR_6, int VAR_7, int VAR_8)
{
 struct jme_adapter *VAR_9 = FUNC_2(VAR_6);
 int VAR_10, VAR_11, VAR_12 = (VAR_8 == VAR_2) ? 1 : 0;

read_again:
 FUNC_1(VAR_9, VAR_1, VAR_5 |
    FUNC_4(VAR_7) |
    FUNC_5(VAR_8));

 FUNC_7();
 for (VAR_10 = VAR_0 * 50 ; VAR_10 > 0 ; --VAR_10) {
  FUNC_6(20);
  VAR_11 = FUNC_0(VAR_9, VAR_1);
  if ((VAR_11 & VAR_5) == 0)
   break;
 }

 if (VAR_10 == 0) {
  FUNC_3("phy(%d) read timeout : %d\n", VAR_7, VAR_8);
  return 0;
 }

 if (VAR_12--)
  goto read_again;

 return (VAR_11 & VAR_3) >> VAR_4;
}
