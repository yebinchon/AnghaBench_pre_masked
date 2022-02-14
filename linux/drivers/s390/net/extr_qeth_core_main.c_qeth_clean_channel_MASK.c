
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_channel {struct ccw_device* ccwdev; } ;
struct ccw_device {int * handler; } ;


 int FUNC_0 (int ,int,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct ccw_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct qeth_channel *VAR_1)
{
 struct ccw_device *VAR_2 = VAR_1->ccwdev;

 FUNC_0(VAR_0, 2, "freech");

 FUNC_2(FUNC_1(VAR_2));
 VAR_2->handler = ((void*)0);
 FUNC_3(FUNC_1(VAR_2));
}
