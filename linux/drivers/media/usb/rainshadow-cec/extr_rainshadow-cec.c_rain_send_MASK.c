
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rain {int serio; int dev; } ;


 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (int ,char) ;

__attribute__((used)) static int FUNC_2(struct rain *VAR_0, const char *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0->serio, '!');

 FUNC_0(VAR_0->dev, "send: %s\n", VAR_1);
 while (!VAR_2 && *VAR_1)
  VAR_2 = FUNC_1(VAR_0->serio, *VAR_1++);
 if (!VAR_2)
  VAR_2 = FUNC_1(VAR_0->serio, '~');

 return VAR_2;
}
