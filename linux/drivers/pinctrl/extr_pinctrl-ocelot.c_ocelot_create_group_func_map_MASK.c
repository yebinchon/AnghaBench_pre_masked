
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct ocelot_pinctrl {TYPE_3__* desc; TYPE_1__* func; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int npins; TYPE_2__* pins; } ;
struct TYPE_5__ {int name; } ;
struct TYPE_4__ {int ngroups; int * groups; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (struct device*,int,int,int ) ;
 size_t* FUNC_1 (int,int,int ) ;
 int FUNC_2 (size_t*) ;
 scalar_t__ FUNC_3 (struct ocelot_pinctrl*,int,int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_3,
     struct ocelot_pinctrl *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 u8 *VAR_8 = FUNC_1(VAR_4->desc->npins, sizeof(u8), VAR_2);

 if (!VAR_8)
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  for (VAR_6 = 0, VAR_7 = 0; VAR_7 < VAR_4->desc->npins; VAR_7++) {
   if (FUNC_3(VAR_4, VAR_7, VAR_5) >= 0)
    VAR_8[VAR_6++] = VAR_7;
  }

  if (!VAR_6)
   continue;

  VAR_4->func[VAR_5].ngroups = VAR_6;
  VAR_4->func[VAR_5].groups = FUNC_0(VAR_3, VAR_6, sizeof(char *),
          VAR_2);
  if (!VAR_4->func[VAR_5].groups) {
   FUNC_2(VAR_8);
   return -VAR_0;
  }

  for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
   VAR_4->func[VAR_5].groups[VAR_7] = VAR_4->desc->pins[VAR_8[VAR_7]].name;
 }

 FUNC_2(VAR_8);

 return 0;
}
