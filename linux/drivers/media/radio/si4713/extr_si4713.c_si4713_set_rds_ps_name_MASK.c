
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct si4713_device {scalar_t__ power_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct si4713_device*,int,char*) ;
 int FUNC_3 (struct si4713_device*,int ,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct si4713_device *VAR_5, char *VAR_6)
{
 int VAR_7 = 0, VAR_8;
 u8 VAR_9 = 0;


 if (!FUNC_4(VAR_6))
  FUNC_0(VAR_6, 0, VAR_1 + 1);

 if (VAR_5->power_state) {

  for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8 += (VAR_2 / 2)) {
   VAR_7 = FUNC_2(VAR_5, (VAR_8 / (VAR_2 / 2)),
      VAR_6 + VAR_8);
   if (VAR_7 < 0)
    return VAR_7;
  }


  if (FUNC_4(VAR_6))
   VAR_9 = FUNC_4(VAR_6) - 1;
  else
   VAR_9 = 1;

  VAR_7 = FUNC_3(VAR_5,
    VAR_3,
    FUNC_1(VAR_9));
  if (VAR_7 < 0)
   return VAR_7;

  VAR_7 = FUNC_3(VAR_5,
    VAR_4,
    VAR_0 * 2);
  if (VAR_7 < 0)
   return VAR_7;
 }

 return VAR_7;
}
