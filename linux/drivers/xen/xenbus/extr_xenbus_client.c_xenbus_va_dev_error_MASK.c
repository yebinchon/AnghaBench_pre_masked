
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct xenbus_device {int nodename; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,char*) ;
 char* FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (scalar_t__,int ) ;
 unsigned int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,scalar_t__,char const*,int ) ;
 int FUNC_6 (int ,char*,char*,char*) ;

__attribute__((used)) static void FUNC_7(struct xenbus_device *VAR_3, int VAR_4,
    const char *VAR_5, va_list VAR_6)
{
 unsigned int VAR_7;
 char *VAR_8;
 char *VAR_9;



 VAR_8 = FUNC_3(4096, VAR_0);
 if (!VAR_8)
  return;

 VAR_7 = FUNC_4(VAR_8, "%i ", -VAR_4);
 FUNC_5(VAR_8 + VAR_7, 4096 - VAR_7, VAR_5, VAR_6);

 FUNC_0(&VAR_3->dev, "%s\n", VAR_8);

 VAR_9 = FUNC_1(VAR_0, "error/%s", VAR_3->nodename);
 if (VAR_9)
  FUNC_6(VAR_2, VAR_9, "error", VAR_8);

 FUNC_2(VAR_8);
 FUNC_2(VAR_9);
}
