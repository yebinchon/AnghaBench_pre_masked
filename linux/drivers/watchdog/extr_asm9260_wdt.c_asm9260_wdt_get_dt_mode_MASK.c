
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct asm9260_wdt_priv {TYPE_1__* dev; void* mode; } ;
struct TYPE_2__ {int of_node; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*,char const*) ;
 int FUNC_1 (int ,char*,char const**) ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static void FUNC_3(struct asm9260_wdt_priv *VAR_3)
{
 const char *VAR_4;
 int VAR_5;


 VAR_3->mode = VAR_1;

 VAR_5 = FUNC_1(VAR_3->dev->of_node,
          "alphascale,mode", &VAR_4);
 if (VAR_5 < 0)
  return;

 if (!FUNC_2(VAR_4, "hw"))
  VAR_3->mode = VAR_1;
 else if (!FUNC_2(VAR_4, "sw"))
  VAR_3->mode = VAR_2;
 else if (!FUNC_2(VAR_4, "debug"))
  VAR_3->mode = VAR_0;
 else
  FUNC_0(VAR_3->dev, "unknown reset-type: %s. Using default \"hw\" mode.",
    VAR_4);
}
