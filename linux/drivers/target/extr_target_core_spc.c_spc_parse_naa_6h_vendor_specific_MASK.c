
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char* unit_serial; } ;
struct se_device {TYPE_1__ t10_wwn; } ;


 int FUNC_0 (unsigned char) ;

void FUNC_1(struct se_device *VAR_0,
          unsigned char *VAR_1)
{
 unsigned char *VAR_2 = &VAR_0->t10_wwn.unit_serial[0];
 int VAR_3;
 bool VAR_4 = 1;
 for (VAR_3 = 0; *VAR_2 && VAR_3 < 13; VAR_2++) {
  int VAR_5 = FUNC_0(*VAR_2);

  if (VAR_5 < 0)
   continue;

  if (VAR_4) {
   VAR_4 = 0;
   VAR_1[VAR_3++] |= VAR_5;
  } else {
   VAR_4 = 1;
   VAR_1[VAR_3] = VAR_5 << 4;
  }
 }
}
