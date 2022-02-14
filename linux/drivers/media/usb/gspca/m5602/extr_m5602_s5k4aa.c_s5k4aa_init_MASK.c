
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int dummy; } ;


 int FUNC_0 (int**) ;

 int VAR_0 ;


 scalar_t__ VAR_1 ;
 int** VAR_2 ;
 int FUNC_1 (struct sd*,int,int) ;
 int FUNC_2 (struct sd*,int,int*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct sd*) ;

int FUNC_5(struct sd *VAR_3)
{
 int VAR_4, VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2) && !VAR_5; VAR_4++) {
  u8 VAR_6[2] = {0x00, 0x00};

  switch (VAR_2[VAR_4][0]) {
  case 130:
   VAR_5 = FUNC_1(VAR_3,
    VAR_2[VAR_4][1],
    VAR_2[VAR_4][2]);
   break;

  case 129:
   VAR_6[0] = VAR_2[VAR_4][2];
   VAR_5 = FUNC_2(VAR_3,
    VAR_2[VAR_4][1], VAR_6, 1);
   break;

  case 128:
   VAR_6[0] = VAR_2[VAR_4][2];
   VAR_6[1] = VAR_2[VAR_4][3];
   VAR_5 = FUNC_2(VAR_3,
    VAR_2[VAR_4][1], VAR_6, 2);
   break;
  default:
   FUNC_3("Invalid stream command, exiting init\n");
   return -VAR_0;
  }
 }

 if (VAR_1)
  FUNC_4(VAR_3);

 return VAR_5;
}
