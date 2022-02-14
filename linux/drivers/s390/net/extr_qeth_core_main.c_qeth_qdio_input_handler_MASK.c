
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_card {int dummy; } ;
struct ccw_device {int dummy; } ;


 int FUNC_0 (struct qeth_card*,int,char*,unsigned int) ;
 scalar_t__ FUNC_1 (struct qeth_card*,int) ;
 int FUNC_2 (struct qeth_card*,unsigned int,int,int,int) ;
 int FUNC_3 (struct qeth_card*) ;

__attribute__((used)) static void FUNC_4(struct ccw_device *VAR_0,
        unsigned int VAR_1, int VAR_2,
        int VAR_3, int VAR_4,
        unsigned long VAR_5)
{
 struct qeth_card *VAR_6 = (struct qeth_card *)VAR_5;

 FUNC_0(VAR_6, 2, "qihq%d", VAR_2);
 FUNC_0(VAR_6, 2, "qiec%d", VAR_1);

 if (FUNC_1(VAR_6, VAR_2))
  FUNC_2(VAR_6, VAR_1, VAR_2, VAR_3, VAR_4);
 else if (VAR_1)
  FUNC_3(VAR_6);
}
