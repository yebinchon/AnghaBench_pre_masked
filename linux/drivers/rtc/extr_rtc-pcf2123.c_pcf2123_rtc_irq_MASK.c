
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcf2123_data {TYPE_1__* rtc; int map; } ;
struct mutex {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {struct mutex ops_lock; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct pcf2123_data* FUNC_0 (void*) ;
 int FUNC_1 (struct mutex*) ;
 int FUNC_2 (struct mutex*) ;
 int FUNC_3 (int ,int ,unsigned int*) ;
 int FUNC_4 (int ,int ,unsigned int,int ) ;
 int FUNC_5 (TYPE_1__*,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_6, void *VAR_7)
{
 struct pcf2123_data *VAR_8 = FUNC_0(VAR_7);
 struct mutex *VAR_9 = &VAR_8->rtc->ops_lock;
 unsigned int VAR_10 = 0;
 int VAR_11 = VAR_2;

 FUNC_1(VAR_9);
 FUNC_3(VAR_8->map, VAR_3, &VAR_10);


 if (VAR_10 & VAR_0) {
  VAR_11 = VAR_1;


  FUNC_4(VAR_8->map, VAR_3, VAR_0, 0);

  FUNC_5(VAR_8->rtc, 1, VAR_5 | VAR_4);
 }

 FUNC_2(VAR_9);

 return VAR_11;
}
