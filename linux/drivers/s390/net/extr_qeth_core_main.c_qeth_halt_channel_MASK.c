
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_channel {scalar_t__ state; int ccwdev; } ;
struct qeth_card {int wait_q; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qeth_card*,int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int ) ;

__attribute__((used)) static int FUNC_6(struct qeth_card *VAR_5,
        struct qeth_channel *VAR_6)
{
 int VAR_7;

 FUNC_0(VAR_5, 3, "haltch");
 FUNC_3(FUNC_2(VAR_6->ccwdev));
 VAR_7 = FUNC_1(VAR_6->ccwdev, VAR_3);
 FUNC_4(FUNC_2(VAR_6->ccwdev));

 if (VAR_7)
  return VAR_7;
 VAR_7 = FUNC_5(VAR_5->wait_q,
   VAR_6->state == VAR_0, VAR_4);
 if (VAR_7 == -VAR_1)
  return VAR_7;
 if (VAR_6->state != VAR_0)
  return -VAR_2;
 return 0;
}
