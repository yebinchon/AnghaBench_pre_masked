
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bbc_i2c_client {int address; unsigned char bus; struct bbc_i2c_bus* bp; } ;
struct bbc_i2c_bus {int * i2c_control_regs; int * i2c_bussel_reg; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 scalar_t__ FUNC_0 (struct bbc_i2c_bus*,int*) ;
 int FUNC_1 (unsigned char,int *) ;

int FUNC_2(struct bbc_i2c_client *VAR_3, unsigned char VAR_4, int VAR_5)
{
 struct bbc_i2c_bus *VAR_6 = VAR_3->bp;
 int VAR_7 = VAR_3->address;
 u8 VAR_8;
 int VAR_9 = -1;

 if (VAR_6->i2c_bussel_reg != ((void*)0))
  FUNC_1(VAR_3->bus, VAR_6->i2c_bussel_reg);

 FUNC_1(VAR_7, VAR_6->i2c_control_regs + 0x1);
 FUNC_1(VAR_1, VAR_6->i2c_control_regs + 0x0);
 if (FUNC_0(VAR_6, &VAR_8))
  goto out;

 FUNC_1(VAR_5, VAR_6->i2c_control_regs + 0x1);
 if (FUNC_0(VAR_6, &VAR_8) ||
     (VAR_8 & VAR_0) != 0)
  goto out;

 FUNC_1(VAR_4, VAR_6->i2c_control_regs + 0x1);
 if (FUNC_0(VAR_6, &VAR_8))
  goto out;

 VAR_9 = 0;

out:
 FUNC_1(VAR_2, VAR_6->i2c_control_regs + 0x0);
 return VAR_9;
}
