
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u16 ;
struct lpc18xx_scu_data {TYPE_1__* func; } ;
struct device {int dummy; } ;
struct TYPE_5__ {int name; } ;
struct TYPE_4__ {int ngroups; int * groups; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (struct device*,int,int,int ) ;
 TYPE_2__* VAR_3 ;
 scalar_t__ FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_4,
      struct lpc18xx_scu_data *VAR_5)
{
 u16 VAR_6[FUNC_0(VAR_3)];
 int VAR_7, VAR_8, VAR_9;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  for (VAR_8 = 0, VAR_9 = 0; VAR_9 < FUNC_0(VAR_3); VAR_9++) {
   if (FUNC_2(VAR_9, VAR_7))
    VAR_6[VAR_8++] = VAR_9;
  }

  VAR_5->func[VAR_7].ngroups = VAR_8;
  VAR_5->func[VAR_7].groups = FUNC_1(VAR_4,
            VAR_8, sizeof(char *),
            VAR_2);
  if (!VAR_5->func[VAR_7].groups)
   return -VAR_0;

  for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
   VAR_5->func[VAR_7].groups[VAR_9] = VAR_3[VAR_6[VAR_9]].name;
 }

 return 0;
}
