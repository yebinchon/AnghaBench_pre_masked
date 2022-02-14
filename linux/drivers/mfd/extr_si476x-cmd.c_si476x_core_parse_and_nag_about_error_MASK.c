
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct si476x_core {scalar_t__ revision; TYPE_1__* client; } ;
typedef int buffer ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct si476x_core*,int ,int*,int) ;

__attribute__((used)) static int FUNC_2(struct si476x_core *VAR_5)
{
 int VAR_6;
 char *VAR_7;
 u8 VAR_8[2];

 if (VAR_5->revision != VAR_4) {
  VAR_6 = FUNC_1(VAR_5, VAR_3,
        VAR_8, sizeof(VAR_8));
  if (VAR_6 == sizeof(VAR_8)) {
   switch (VAR_8[1]) {
   case 132:
    VAR_7 = "Bad command";
    VAR_6 = -VAR_1;
    break;
   case 137:
    VAR_7 = "Bad argument #1";
    VAR_6 = -VAR_1;
    break;
   case 136:
    VAR_7 = "Bad argument #2";
    VAR_6 = -VAR_1;
    break;
   case 135:
    VAR_7 = "Bad argument #3";
    VAR_6 = -VAR_1;
    break;
   case 134:
    VAR_7 = "Bad argument #4";
    VAR_6 = -VAR_1;
    break;
   case 128:
    VAR_7 = "Chip is busy";
    VAR_6 = -VAR_0;
    break;
   case 131:
    VAR_7 = "Bad internal memory";
    VAR_6 = -VAR_2;
    break;
   case 130:
    VAR_7 = "Bad patch";
    VAR_6 = -VAR_1;
    break;
   case 133:
    VAR_7 = "Bad boot mode";
    VAR_6 = -VAR_1;
    break;
   case 129:
    VAR_7 = "Bad property";
    VAR_6 = -VAR_1;
    break;
   default:
    VAR_7 = "Unknown";
    VAR_6 = -VAR_2;
   }

   FUNC_0(&VAR_5->client->dev,
    "[Chip error status]: %s\n", VAR_7);
  } else {
   FUNC_0(&VAR_5->client->dev,
    "Failed to fetch error code\n");
   VAR_6 = (VAR_6 >= 0) ? -VAR_2 : VAR_6;
  }
 } else {
  VAR_6 = -VAR_2;
 }

 return VAR_6;
}
