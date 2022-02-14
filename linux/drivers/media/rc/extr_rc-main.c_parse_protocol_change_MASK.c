
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct rc_dev {int dev; } ;
struct TYPE_3__ {char* name; int type; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,...) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (char const*,char*) ;
 char* FUNC_3 (char**,char*) ;

__attribute__((used)) static int FUNC_4(struct rc_dev *VAR_2, u64 *VAR_3,
     const char *VAR_4)
{
 const char *VAR_5;
 unsigned VAR_6 = 0;
 bool VAR_7, VAR_8;
 u64 VAR_9;
 int VAR_10;

 while ((VAR_5 = FUNC_3((char **)&VAR_4, " \n")) != ((void*)0)) {
  if (!*VAR_5)
   break;

  if (*VAR_5 == '+') {
   VAR_7 = 1;
   VAR_8 = 0;
   VAR_5++;
  } else if (*VAR_5 == '-') {
   VAR_7 = 0;
   VAR_8 = 1;
   VAR_5++;
  } else {
   VAR_7 = 0;
   VAR_8 = 0;
  }

  for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_1); VAR_10++) {
   if (!FUNC_2(VAR_5, VAR_1[VAR_10].name)) {
    VAR_9 = VAR_1[VAR_10].type;
    break;
   }
  }

  if (VAR_10 == FUNC_0(VAR_1)) {
   if (!FUNC_2(VAR_5, "lirc"))
    VAR_9 = 0;
   else {
    FUNC_1(&VAR_2->dev, "Unknown protocol: '%s'\n",
     VAR_5);
    return -VAR_0;
   }
  }

  VAR_6++;

  if (VAR_7)
   *VAR_3 |= VAR_9;
  else if (VAR_8)
   *VAR_3 &= ~VAR_9;
  else
   *VAR_3 = VAR_9;
 }

 if (!VAR_6) {
  FUNC_1(&VAR_2->dev, "Protocol not specified\n");
  return -VAR_0;
 }

 return VAR_6;
}
