
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p54_common {int hw; int led_work; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct p54_common*,int,char*,int ) ;
 int FUNC_6 (struct p54_common*) ;
 int VAR_0 ;

int FUNC_7(struct p54_common *VAR_1)
{
 int VAR_2;







 FUNC_0(&VAR_1->led_work, VAR_0);

 VAR_2 = FUNC_5(VAR_1, 0, "assoc",
          FUNC_1(VAR_1->hw));
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_5(VAR_1, 1, "tx",
          FUNC_4(VAR_1->hw));
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_5(VAR_1, 2, "rx",
          FUNC_3(VAR_1->hw));
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_5(VAR_1, 3, "radio",
          FUNC_2(VAR_1->hw));
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_6(VAR_1);
 return VAR_2;
}
