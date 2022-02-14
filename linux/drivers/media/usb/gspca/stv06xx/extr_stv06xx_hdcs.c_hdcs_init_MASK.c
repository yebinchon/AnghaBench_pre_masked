
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {scalar_t__ bridge; struct hdcs* sensor_priv; } ;
struct TYPE_2__ {int height; int width; } ;
struct hdcs {int psmp; TYPE_1__ array; } ;


 int FUNC_0 (int**) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct sd*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct sd*) ;
 int VAR_3 ;
 int FUNC_4 (struct sd*) ;
 int FUNC_5 (struct sd*,int ,int ) ;
 int FUNC_6 (struct sd*,int,int) ;
 int FUNC_7 (struct sd*,int,int) ;
 int** VAR_4 ;
 int** VAR_5 ;

__attribute__((used)) static int FUNC_8(struct sd *VAR_6)
{
 struct hdcs *VAR_7 = VAR_6->sensor_priv;
 int VAR_8, VAR_9 = 0;


 if (VAR_6->bridge == VAR_0)
  FUNC_6(VAR_6, VAR_3, 1);


 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_4) && !VAR_9; VAR_8++) {
  VAR_9 = FUNC_6(VAR_6, VAR_4[VAR_8][0],
        VAR_4[VAR_8][1]);
 }
 if (VAR_9 < 0)
  return VAR_9;


 FUNC_4(VAR_6);


 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_5) && !VAR_9; VAR_8++) {
  VAR_9 = FUNC_7(VAR_6, VAR_5[VAR_8][0],
          VAR_5[VAR_8][1]);
 }
 if (VAR_9 < 0)
  return VAR_9;


 VAR_9 = FUNC_7(VAR_6, FUNC_2(VAR_6), FUNC_1(3));
 if (VAR_9 < 0)
  return VAR_9;



 if (FUNC_3(VAR_6))
  VAR_9 = FUNC_7(VAR_6, VAR_2,
    (VAR_1 << 6) | VAR_7->psmp);
 else
  VAR_9 = FUNC_7(VAR_6, VAR_2,
    (VAR_1 << 5) | VAR_7->psmp);
 if (VAR_9 < 0)
  return VAR_9;

 return FUNC_5(VAR_6, VAR_7->array.width, VAR_7->array.height);
}
