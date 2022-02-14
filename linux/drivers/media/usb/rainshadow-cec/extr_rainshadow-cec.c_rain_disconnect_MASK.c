
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {int dev; } ;
struct rain {int adap; int work; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct rain*) ;
 int FUNC_4 (struct serio*) ;
 struct rain* FUNC_5 (struct serio*) ;
 int FUNC_6 (struct serio*,int *) ;

__attribute__((used)) static void FUNC_7(struct serio *VAR_0)
{
 struct rain *VAR_1 = FUNC_5(VAR_0);

 FUNC_0(&VAR_1->work);
 FUNC_1(VAR_1->adap);
 FUNC_2(&VAR_0->dev, "disconnected\n");
 FUNC_4(VAR_0);
 FUNC_6(VAR_0, ((void*)0));
 FUNC_3(VAR_1);
}
