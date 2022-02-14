
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct bnx2x {int max_cos; int * prio_to_cos; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*) ;
 int FUNC_4 (int,char*,int,int,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct bnx2x*,int*,int*) ;
 struct bnx2x* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (struct net_device*,int) ;
 int FUNC_9 (struct net_device*,int,int ) ;
 int FUNC_10 (struct net_device*,int,int,int) ;

int FUNC_11(struct net_device *VAR_4, u8 VAR_5)
{
 struct bnx2x *VAR_6 = FUNC_6(VAR_4);
 u8 VAR_7[VAR_0], VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;


 FUNC_0();


 if (!VAR_5) {
  FUNC_7(VAR_4);
  return 0;
 }


 if (VAR_5 > VAR_6->max_cos) {
  FUNC_1("support for too many traffic classes requested: %d. Max supported is %d\n",
     VAR_5, VAR_6->max_cos);
  return -VAR_2;
 }


 if (FUNC_8(VAR_4, VAR_5)) {
  FUNC_1("failed to declare %d traffic classes\n", VAR_5);
  return -VAR_2;
 }

 FUNC_5(VAR_6, VAR_7, &VAR_8);


 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  int VAR_13 = VAR_7[VAR_10];

  FUNC_9(VAR_4, VAR_10, VAR_6->prio_to_cos[VAR_13]);
  FUNC_4(VAR_1 | VAR_3,
     "mapping priority %d to tc %d\n",
     VAR_13, VAR_6->prio_to_cos[VAR_13]);
 }
 for (VAR_9 = 0; VAR_9 < VAR_6->max_cos; VAR_9++) {
  VAR_11 = FUNC_2(VAR_6);
  VAR_12 = VAR_9 * FUNC_3(VAR_6);
  FUNC_10(VAR_4, VAR_9, VAR_11, VAR_12);
  FUNC_4(VAR_1 | VAR_3,
     "mapping tc %d to offset %d count %d\n",
     VAR_9, VAR_12, VAR_11);
 }

 return 0;
}
