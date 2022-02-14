
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mei_me_hw {int pg_state; } ;
struct mei_device {int dev; int pg_event; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mei_device*,int) ;
 int FUNC_2 (struct mei_device*) ;
 struct mei_me_hw* FUNC_3 (struct mei_device*) ;

__attribute__((used)) static int FUNC_4(struct mei_device *VAR_3)
{
 struct mei_me_hw *VAR_4 = FUNC_3(VAR_3);
 u32 VAR_5;

 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5 & VAR_0) {

  FUNC_0(VAR_3->dev, "already d0i3 : set not needed\n");
  goto on;
 }

 FUNC_1(VAR_3, 0);
on:
 VAR_4->pg_state = VAR_2;
 VAR_3->pg_event = VAR_1;
 FUNC_0(VAR_3->dev, "d0i3 enter\n");
 return 0;
}
