
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bbc_i2c_client {unsigned char address; unsigned char bus; struct bbc_i2c_bus* bp; } ;
struct bbc_i2c_bus {int * i2c_control_regs; int * i2c_bussel_reg; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct bbc_i2c_bus*,unsigned char*) ;
 int FUNC_2 (unsigned char,int *) ;

int FUNC_3(struct bbc_i2c_client *VAR_5, unsigned char *VAR_6, int VAR_7)
{
 struct bbc_i2c_bus *VAR_8 = VAR_5->bp;
 unsigned char VAR_9 = VAR_5->address, VAR_10;
 int VAR_11 = -1;

 if (VAR_8->i2c_bussel_reg != ((void*)0))
  FUNC_2(VAR_5->bus, VAR_8->i2c_bussel_reg);

 FUNC_2(VAR_9, VAR_8->i2c_control_regs + 0x1);
 FUNC_2(VAR_3, VAR_8->i2c_control_regs + 0x0);
 if (FUNC_1(VAR_8, &VAR_10))
  goto out;

 FUNC_2(VAR_7, VAR_8->i2c_control_regs + 0x1);
 if (FUNC_1(VAR_8, &VAR_10) ||
     (VAR_10 & VAR_2) != 0)
  goto out;

 FUNC_2(VAR_4, VAR_8->i2c_control_regs + 0x0);

 VAR_9 |= 0x1;

 FUNC_2(VAR_9, VAR_8->i2c_control_regs + 0x1);
 FUNC_2(VAR_3, VAR_8->i2c_control_regs + 0x0);
 if (FUNC_1(VAR_8, &VAR_10))
  goto out;




 (void) FUNC_0(VAR_8->i2c_control_regs + 0x1);
 if (FUNC_1(VAR_8, &VAR_10))
  goto out;

 FUNC_2(VAR_1 | VAR_0, VAR_8->i2c_control_regs + 0x0);
 *VAR_6 = FUNC_0(VAR_8->i2c_control_regs + 0x1);
 if (FUNC_1(VAR_8, &VAR_10))
  goto out;

 VAR_11 = 0;

out:
 FUNC_2(VAR_4, VAR_8->i2c_control_regs + 0x0);
 (void) FUNC_0(VAR_8->i2c_control_regs + 0x1);

 return VAR_11;
}
