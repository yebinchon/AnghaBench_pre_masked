
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx25821_dev {int _max_num_decoders; int * i2c_bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct cx25821_dev*,int,int ) ;
 int FUNC_3 (struct cx25821_dev*) ;

int FUNC_4(struct cx25821_dev *VAR_6)
{
 u32 VAR_7 = 0, VAR_8 = 0;
 int VAR_9 = 0;
 int VAR_10 = 0;


 VAR_7 = FUNC_0(&VAR_6->i2c_bus[0], VAR_4, &VAR_8);
 VAR_7 &= 0xFFFFF0FF;
 VAR_9 = FUNC_1(&VAR_6->i2c_bus[0], VAR_4, VAR_7);

 if (VAR_9 < 0)
  goto error;


 VAR_7 = FUNC_0(&VAR_6->i2c_bus[0], VAR_4, &VAR_8);
 VAR_7 &= 0xFFFFFFDF;
 VAR_9 = FUNC_1(&VAR_6->i2c_bus[0], VAR_4, VAR_7);

 if (VAR_9 < 0)
  goto error;







 for (VAR_10 = 0; VAR_10 < VAR_6->_max_num_decoders; VAR_10++)
  FUNC_2(VAR_6, VAR_10, 0);


 VAR_7 = FUNC_0(&VAR_6->i2c_bus[0], VAR_2, &VAR_8);
 VAR_7 &= 0xFF70FF70;
 VAR_7 |= 0x00090008;
 VAR_9 = FUNC_1(&VAR_6->i2c_bus[0], VAR_2, VAR_7);

 if (VAR_9 < 0)
  goto error;


 VAR_7 = FUNC_0(&VAR_6->i2c_bus[0], VAR_1, &VAR_8);
 VAR_7 |= 0x00040100;
 VAR_9 = FUNC_1(&VAR_6->i2c_bus[0], VAR_1, VAR_7);

 if (VAR_9 < 0)
  goto error;


 VAR_7 = FUNC_0(&VAR_6->i2c_bus[0], VAR_0, &VAR_8);
 VAR_7 &= 0x83FFFFFF;
 VAR_9 = FUNC_1(&VAR_6->i2c_bus[0], VAR_0,
   VAR_7 | 0x10000000);

 if (VAR_9 < 0)
  goto error;


 VAR_7 = FUNC_0(&VAR_6->i2c_bus[0], VAR_5, &VAR_8);
 VAR_7 &= 0xFEF0FE00;
 if (VAR_6->_max_num_decoders == VAR_3) {






  VAR_7 |= 0x010001F8;
 } else {

  VAR_7 |= 0x010F0108;
 }

 VAR_7 |= 7;
 VAR_9 = FUNC_1(&VAR_6->i2c_bus[0], VAR_5, VAR_7);

 if (VAR_9 < 0)
  goto error;

 VAR_9 = FUNC_3(VAR_6);

error:
 return VAR_9;
}
