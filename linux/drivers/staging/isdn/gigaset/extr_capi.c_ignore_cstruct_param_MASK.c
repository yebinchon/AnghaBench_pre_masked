
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cardstate {int dev; } ;
typedef scalar_t__* _cstruct ;


 int FUNC_0 (int ,char*,char*,char*) ;

__attribute__((used)) static inline void FUNC_1(struct cardstate *VAR_0, _cstruct VAR_1,
     char *VAR_2, char *VAR_3)
{
 if (VAR_1 && *VAR_1)
  FUNC_0(VAR_0->dev, "%s: ignoring unsupported parameter: %s\n",
    VAR_2, VAR_3);
}
