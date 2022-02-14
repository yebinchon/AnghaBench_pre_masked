
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_rf {int (* switch_radio_on ) (struct zd_rf*) ;} ;
struct zd_chip {int mutex; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct zd_rf*) ;
 int FUNC_3 (struct zd_chip*) ;
 int FUNC_4 (struct zd_chip*) ;
 struct zd_chip* FUNC_5 (struct zd_rf*) ;

int FUNC_6(struct zd_rf *VAR_0)
{
 int VAR_1, VAR_2;
 struct zd_chip *VAR_3 = FUNC_5(VAR_0);

 FUNC_0(FUNC_1(&VAR_3->mutex));
 VAR_1 = FUNC_3(VAR_3);
 if (VAR_1)
  return VAR_1;
 VAR_2 = VAR_0->switch_radio_on(VAR_0);
 VAR_1 = FUNC_4(VAR_3);
 if (VAR_2)
  VAR_1 = VAR_2;
 return VAR_1;
}
