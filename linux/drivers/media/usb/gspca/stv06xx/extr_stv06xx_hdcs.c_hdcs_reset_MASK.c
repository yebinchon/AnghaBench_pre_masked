
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {struct hdcs* sensor_priv; } ;
struct hdcs {int state; } ;


 int FUNC_0 (struct sd*) ;
 int VAR_0 ;
 int FUNC_1 (struct sd*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct sd *VAR_1)
{
 struct hdcs *VAR_2 = VAR_1->sensor_priv;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, FUNC_0(VAR_1), 1);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_1, FUNC_0(VAR_1), 0);
 if (VAR_3 < 0)
  VAR_2->state = VAR_0;

 return VAR_3;
}
