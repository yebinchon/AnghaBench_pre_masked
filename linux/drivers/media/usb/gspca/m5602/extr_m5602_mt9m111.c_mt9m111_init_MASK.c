
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sd {int dummy; } ;


 int FUNC_0 (scalar_t__**) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__** VAR_2 ;
 int FUNC_1 (struct sd*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct sd*,scalar_t__,scalar_t__*,int) ;
 int FUNC_3 (struct sd*) ;

int FUNC_4(struct sd *VAR_3)
{
 int VAR_4, VAR_5 = 0;


 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2) && !VAR_5; VAR_4++) {
  u8 VAR_6[2];

  if (VAR_2[VAR_4][0] == VAR_0) {
   VAR_5 = FUNC_1(VAR_3,
    VAR_2[VAR_4][1],
    VAR_2[VAR_4][2]);
  } else {
   VAR_6[0] = VAR_2[VAR_4][2];
   VAR_6[1] = VAR_2[VAR_4][3];
   VAR_5 = FUNC_2(VAR_3,
    VAR_2[VAR_4][1], VAR_6, 2);
  }
 }

 if (VAR_1)
  FUNC_3(VAR_3);

 return 0;
}
