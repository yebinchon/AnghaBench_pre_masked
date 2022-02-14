
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7146_dev {int * ext_priv; } ;
struct budget {scalar_t__ dvb_frontend; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct budget*) ;
 int FUNC_3 (struct budget*) ;

__attribute__((used)) static int FUNC_4 (struct saa7146_dev* VAR_0)
{
 struct budget *VAR_1 = (struct budget*) VAR_0->ext_priv;
 int VAR_2;

 if (VAR_1->dvb_frontend) {
  FUNC_1(VAR_1->dvb_frontend);
  FUNC_0(VAR_1->dvb_frontend);
 }

 VAR_2 = FUNC_3 (VAR_1);

 FUNC_2 (VAR_1);
 VAR_0->ext_priv = ((void*)0);

 return VAR_2;
}
