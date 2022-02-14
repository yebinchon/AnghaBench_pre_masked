
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tifm_adapter {int id; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct tifm_adapter*,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_8(struct tifm_adapter *VAR_4)
{
 int VAR_5;

 FUNC_3(VAR_0);
 FUNC_6(&VAR_3);
 VAR_5 = FUNC_2(&VAR_2, VAR_4, 0, 0, VAR_1);
 if (VAR_5 >= 0)
  VAR_4->id = VAR_5;
 FUNC_7(&VAR_3);
 FUNC_4();
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_0(&VAR_4->dev, "tifm%u", VAR_4->id);
 VAR_5 = FUNC_1(&VAR_4->dev);
 if (VAR_5) {
  FUNC_6(&VAR_3);
  FUNC_5(&VAR_2, VAR_4->id);
  FUNC_7(&VAR_3);
 }

 return VAR_5;
}
