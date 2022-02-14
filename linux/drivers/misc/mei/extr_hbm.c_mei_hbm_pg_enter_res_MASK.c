
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_device {scalar_t__ pg_event; int wait_pg; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (struct mei_device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct mei_device *VAR_4)
{
 if (FUNC_1(VAR_4) != VAR_3 ||
     VAR_4->pg_event != VAR_2) {
  FUNC_0(VAR_4->dev, "hbm: pg entry response: state mismatch [%s, %d]\n",
   FUNC_2(FUNC_1(VAR_4)), VAR_4->pg_event);
  return -VAR_0;
 }

 VAR_4->pg_event = VAR_1;
 FUNC_3(&VAR_4->wait_pg);

 return 0;
}
