
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct samsung_laptop {int has_stepping_quirk; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct samsung_laptop*) ;
 int FUNC_2 (struct samsung_laptop*,int) ;

__attribute__((used)) static void FUNC_3(struct samsung_laptop *VAR_0)
{
 int VAR_1;
 int VAR_2;
 int VAR_3 = FUNC_1(VAR_0);
 if (VAR_3 == 0)
  FUNC_2(VAR_0, 1);

 VAR_1 = FUNC_1(VAR_0);

 if (VAR_1 <= 2)
  VAR_2 = VAR_1 + 2;
 else
  VAR_2 = VAR_1 - 2;

 VAR_0->has_stepping_quirk = 0;
 FUNC_2(VAR_0, VAR_2);

 if (FUNC_1(VAR_0) != VAR_2) {
  VAR_0->has_stepping_quirk = 1;
  FUNC_0("enabled workaround for brightness stepping quirk\n");
 }

 FUNC_2(VAR_0, VAR_3);
}
