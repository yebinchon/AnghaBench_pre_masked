
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccw_device {int handler; } ;


 int FUNC_0 (int ,struct ccw_device*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct ccw_device*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct ccw_device *VAR_2)
{
 VAR_2->handler = VAR_1;

 if (FUNC_1(VAR_2))
  FUNC_0(VAR_0, VAR_2);
 return 0;
}
