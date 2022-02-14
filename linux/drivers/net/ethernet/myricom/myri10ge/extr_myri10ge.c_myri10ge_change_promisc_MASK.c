
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct myri10ge_priv {int dev; } ;
struct myri10ge_cmd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct myri10ge_priv*,int,struct myri10ge_cmd*,int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void
FUNC_2(struct myri10ge_priv *VAR_2, int VAR_3, int VAR_4)
{
 struct myri10ge_cmd VAR_5;
 int VAR_6, VAR_7;

 VAR_7 = VAR_3 ? VAR_1 : VAR_0;
 VAR_6 = FUNC_0(VAR_2, VAR_7, &VAR_5, VAR_4);
 if (VAR_6)
  FUNC_1(VAR_2->dev, "Failed to set promisc mode\n");
}
