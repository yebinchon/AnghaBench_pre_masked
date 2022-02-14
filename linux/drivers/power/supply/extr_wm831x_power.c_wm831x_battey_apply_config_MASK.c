
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x {int dev; } ;
struct chg_map {int val; int reg_val; } ;


 int FUNC_0 (int ,char*,char const*,int,char const*) ;
 int FUNC_1 (int ,char*,char const*,int,char const*) ;

__attribute__((used)) static void FUNC_2(struct wm831x *VAR_0,
           struct chg_map *VAR_1, int VAR_2, int VAR_3,
           int *VAR_4, const char *VAR_5,
           const char *VAR_6)
{
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
  if (VAR_3 == VAR_1[VAR_7].val)
   break;
 if (VAR_7 == VAR_2) {
  FUNC_1(VAR_0->dev, "Invalid %s %d%s\n",
   VAR_5, VAR_3, VAR_6);
 } else {
  *VAR_4 |= VAR_1[VAR_7].reg_val;
  FUNC_0(VAR_0->dev, "Set %s of %d%s\n", VAR_5, VAR_3, VAR_6);
 }
}
