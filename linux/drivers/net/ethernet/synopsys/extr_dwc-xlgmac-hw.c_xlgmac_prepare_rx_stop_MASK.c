
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_pdata {int netdev; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned int FUNC_0 (unsigned int,int ,int ) ;
 int FUNC_1 (struct xlgmac_pdata*,unsigned int,int ) ;
 unsigned long VAR_7 ;
 int FUNC_2 (int ,char*,unsigned int) ;
 unsigned int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(struct xlgmac_pdata *VAR_8,
       unsigned int VAR_9)
{
 unsigned int VAR_10, VAR_11, VAR_12;
 unsigned long VAR_13;





 VAR_13 = VAR_7 + (VAR_6 * VAR_0);
 while (FUNC_4(VAR_7, VAR_13)) {
  VAR_10 = FUNC_3(FUNC_1(VAR_8, VAR_9, VAR_1));
  VAR_11 = FUNC_0(VAR_10, VAR_3,
        VAR_2);
  VAR_12 = FUNC_0(VAR_10, VAR_5,
          VAR_4);
  if ((VAR_11 == 0) && (VAR_12 == 0))
   break;

  FUNC_5(500, 1000);
 }

 if (!FUNC_4(VAR_7, VAR_13))
  FUNC_2(VAR_8->netdev,
       "timed out waiting for Rx queue %u to empty\n",
       VAR_9);
}
