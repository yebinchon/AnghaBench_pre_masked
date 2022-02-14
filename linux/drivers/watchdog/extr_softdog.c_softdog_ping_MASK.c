
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {scalar_t__ pretimeout; scalar_t__ timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_6(struct watchdog_device *VAR_5)
{
 if (!FUNC_2(&VAR_4))
  FUNC_1(VAR_2);
 FUNC_4(&VAR_4, FUNC_5(VAR_5->timeout, 0),
        VAR_1);

 if (FUNC_0(VAR_0)) {
  if (VAR_5->pretimeout)
   FUNC_4(&VAR_3,
          FUNC_5(VAR_5->timeout - VAR_5->pretimeout, 0),
          VAR_1);
  else
   FUNC_3(&VAR_3);
 }

 return 0;
}
