
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvin_dev {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rvin_dev*) ;
 int FUNC_1 (struct rvin_dev*,int) ;
 int FUNC_2 (struct rvin_dev*) ;
 int FUNC_3 (struct rvin_dev*,int ,int ) ;
 int FUNC_4 (struct rvin_dev*,char*) ;

__attribute__((used)) static int FUNC_5(struct rvin_dev *VAR_4)
{
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  FUNC_1(VAR_4, VAR_5);

 FUNC_0(VAR_4);

 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6)
  return VAR_6;

 FUNC_4(VAR_4, "Starting to capture\n");


 FUNC_3(VAR_4, VAR_2, VAR_3);

 VAR_4->state = VAR_1;

 return 0;
}
