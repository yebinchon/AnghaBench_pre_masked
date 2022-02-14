
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_chip {int mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct zd_chip*) ;
 int FUNC_3 (struct zd_chip*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct zd_chip*,int,int ,int ) ;
 int FUNC_6 (struct zd_chip*) ;

__attribute__((used)) static int FUNC_7(struct zd_chip *VAR_1)
{
 int VAR_2;

 FUNC_1(FUNC_6(VAR_1), "\n");
 FUNC_0(FUNC_4(&VAR_1->mutex));
 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2)
  return VAR_2;

 return FUNC_5(VAR_1, 100, 0, VAR_0);
}
