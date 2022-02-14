
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xilinx_spi {int (* read_fn ) (scalar_t__) ;int done; scalar_t__ regs; int (* write_fn ) (int,scalar_t__) ;} ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 struct xilinx_spi *VAR_6 = VAR_5;
 u32 VAR_7;


 VAR_7 = VAR_6->read_fn(VAR_6->regs + VAR_2);
 VAR_6->write_fn(VAR_7, VAR_6->regs + VAR_2);

 if (VAR_7 & VAR_3) {
  FUNC_0(&VAR_6->done);
  return VAR_0;
 }

 return VAR_1;
}
