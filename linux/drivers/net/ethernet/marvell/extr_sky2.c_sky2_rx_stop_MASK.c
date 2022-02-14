
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sky2_port {size_t port; int netdev; struct sky2_hw* hw; } ;
struct sky2_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (unsigned int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (int ,char*) ;
 unsigned int* VAR_9 ;
 scalar_t__ FUNC_4 (struct sky2_hw*,int ) ;
 int FUNC_5 (struct sky2_hw*,int ,int) ;
 int FUNC_6 (struct sky2_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct sky2_port *VAR_10)
{
 struct sky2_hw *VAR_11 = VAR_10->hw;
 unsigned VAR_12 = VAR_9[VAR_10->port];
 int VAR_13;


 FUNC_6(VAR_11, FUNC_1(VAR_12, VAR_7), VAR_8);

 for (VAR_13 = 0; VAR_13 < 0xffff; VAR_13++)
  if (FUNC_4(VAR_11, FUNC_1(VAR_12, VAR_6))
      == FUNC_4(VAR_11, FUNC_1(VAR_12, VAR_5)))
   goto stopped;

 FUNC_3(VAR_10->netdev, "receiver stop failed\n");
stopped:
 FUNC_5(VAR_11, FUNC_0(VAR_12, VAR_4), VAR_1 | VAR_0);


 FUNC_5(VAR_11, FUNC_2(VAR_12, VAR_2), VAR_3);
}
