
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx25821_dev {int tvnorm; int * i2c_bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct cx25821_dev*) ;
 int FUNC_3 (struct cx25821_dev*) ;
 int FUNC_4 (int ,int) ;

int FUNC_5(struct cx25821_dev *VAR_4)
{
 int VAR_5 = 0;
 u32 VAR_6 = 0, VAR_7 = 0;

 if (VAR_4->tvnorm & VAR_2 || VAR_4->tvnorm & VAR_3)
  VAR_5 = FUNC_3(VAR_4);
 else
  VAR_5 = FUNC_2(VAR_4);


 VAR_6 = FUNC_0(&VAR_4->i2c_bus[0], VAR_0, &VAR_7);
 VAR_6 = FUNC_4(VAR_6, 4);
 VAR_5 = FUNC_1(&VAR_4->i2c_bus[0], VAR_0, VAR_6);


 VAR_6 = FUNC_0(&VAR_4->i2c_bus[0], VAR_1, &VAR_7);
 VAR_6 = FUNC_4(VAR_6, 4);
 VAR_5 = FUNC_1(&VAR_4->i2c_bus[0], VAR_1, VAR_6);

 return VAR_5;
}
