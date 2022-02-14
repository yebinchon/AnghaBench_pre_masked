
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct savagefb_i2c_chan {scalar_t__ reg; scalar_t__ ioaddr; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(void *VAR_1, int VAR_2)
{
 struct savagefb_i2c_chan *VAR_3 = VAR_1;
 unsigned int VAR_4;

 VAR_4 = FUNC_0(VAR_3->ioaddr + VAR_3->reg);
 if(VAR_2)
  VAR_4 |= VAR_0;
 else
  VAR_4 &= ~VAR_0;
 FUNC_1(VAR_4, VAR_3->ioaddr + VAR_3->reg);
 FUNC_0(VAR_3->ioaddr + VAR_3->reg);
}
