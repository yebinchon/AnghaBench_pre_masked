
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_device {int pg_event; int wait_pg; int dev; } ;


 int VAR_0 ;

 void* VAR_1 ;

 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (struct mei_device*) ;
 scalar_t__ FUNC_3 (struct mei_device*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct mei_device *VAR_3)
{
 if (FUNC_3(VAR_3) != VAR_2 ||
     (VAR_3->pg_event != 128 &&
      VAR_3->pg_event != 129)) {
  FUNC_1(VAR_3->dev, "hbm: pg exit response: state mismatch [%s, %d]\n",
   FUNC_4(FUNC_3(VAR_3)), VAR_3->pg_event);
  return -VAR_0;
 }

 switch (VAR_3->pg_event) {
 case 128:
  VAR_3->pg_event = VAR_1;
  FUNC_5(&VAR_3->wait_pg);
  break;
 case 129:





  VAR_3->pg_event = VAR_1;
  FUNC_2(VAR_3);
  break;
 default:
  FUNC_0(1, "hbm: pg exit response: unexpected pg event = %d\n",
       VAR_3->pg_event);
  return -VAR_0;
 }

 return 0;
}
