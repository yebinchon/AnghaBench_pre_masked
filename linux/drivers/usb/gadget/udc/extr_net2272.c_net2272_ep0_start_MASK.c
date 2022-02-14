
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net2272_ep {int dummy; } ;
struct net2272 {int softconnect; struct net2272_ep* ep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct net2272_ep*,int ,int) ;
 int FUNC_1 (struct net2272*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct net2272 *VAR_18)
{
 struct net2272_ep *VAR_19 = &VAR_18->ep[0];

 FUNC_0(VAR_19, VAR_5,
  (1 << VAR_10) |
  (1 << VAR_0));
 FUNC_0(VAR_19, VAR_4,
  (1 << VAR_6) |
  (1 << VAR_1));
 FUNC_1(VAR_18, VAR_14,
  (VAR_18->softconnect << VAR_15) |
  (1 << VAR_16) |
  (1 << VAR_7));
 FUNC_1(VAR_18, VAR_8,
  (1 << VAR_12) |
  (1 << VAR_3) |
  (1 << VAR_2));
 FUNC_1(VAR_18, VAR_9,
  (1 << VAR_17) |
  (1 << VAR_11) |
  (1 << VAR_13));
}
