
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct av7110 {int feeding1; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,char*,struct av7110*) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct av7110 *VAR_3)
{
 FUNC_2(2, "budget: %p\n", VAR_3);

 if (--VAR_3->feeding1)
  return VAR_3->feeding1;
 FUNC_3(VAR_3->dev, VAR_2, VAR_1);
 FUNC_0(VAR_3->dev, VAR_0);
 FUNC_1(VAR_3->dev, VAR_0);
 return 0;
}
