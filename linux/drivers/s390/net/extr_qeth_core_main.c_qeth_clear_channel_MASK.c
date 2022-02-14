
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_channel {scalar_t__ state; int ccwdev; } ;
struct qeth_card {int wait_q; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct qeth_card*,int,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int ) ;

__attribute__((used)) static int FUNC_6(struct qeth_card *VAR_6,
         struct qeth_channel *VAR_7)
{
 int VAR_8;

 FUNC_0(VAR_6, 3, "clearch");
 FUNC_3(FUNC_2(VAR_7->ccwdev));
 VAR_8 = FUNC_1(VAR_7->ccwdev, VAR_4);
 FUNC_4(FUNC_2(VAR_7->ccwdev));

 if (VAR_8)
  return VAR_8;
 VAR_8 = FUNC_5(VAR_6->wait_q,
   VAR_7->state == VAR_1, VAR_5);
 if (VAR_8 == -VAR_2)
  return VAR_8;
 if (VAR_7->state != VAR_1)
  return -VAR_3;
 VAR_7->state = VAR_0;
 return 0;
}
