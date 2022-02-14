
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct myri10ge_priv {int pause; int dev; } ;
struct myri10ge_cmd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct myri10ge_priv*,int,struct myri10ge_cmd*,int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct myri10ge_priv *VAR_2, int VAR_3)
{
 struct myri10ge_cmd VAR_4;
 int VAR_5, VAR_6;

 VAR_6 = VAR_3 ? VAR_1 : VAR_0;
 VAR_5 = FUNC_0(VAR_2, VAR_6, &VAR_4, 0);

 if (VAR_5) {
  FUNC_1(VAR_2->dev, "Failed to set flow control mode\n");
  return VAR_5;
 }
 VAR_2->pause = VAR_3;
 return 0;
}
