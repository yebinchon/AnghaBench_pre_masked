
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5c73m3 {int i2c_client; scalar_t__ i2c_write_address; scalar_t__ i2c_read_address; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct s5c73m3*,int) ;
 int FUNC_2 (struct s5c73m3*,int) ;

__attribute__((used)) static int FUNC_3(struct s5c73m3 *VAR_2)
{
 int VAR_3;

 VAR_2->i2c_read_address = 0;
 VAR_2->i2c_write_address = 0;

 VAR_3 = FUNC_0(VAR_2->i2c_client, VAR_0, 0x3310);
 if (VAR_3 < 0)
  return VAR_3;

 if (VAR_1)
  return FUNC_1(VAR_2, 1);
 else
  return FUNC_2(VAR_2, 1);
}
