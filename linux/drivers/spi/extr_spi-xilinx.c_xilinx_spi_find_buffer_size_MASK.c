
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xilinx_spi {int (* read_fn ) (scalar_t__) ;scalar_t__ regs; int (* write_fn ) (int ,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct xilinx_spi *VAR_5)
{
 u8 VAR_6;
 int VAR_7 = 0;





 VAR_5->write_fn(VAR_1,
  VAR_5->regs + VAR_0);


 do {
  VAR_5->write_fn(0, VAR_5->regs + VAR_4);
  VAR_6 = VAR_5->read_fn(VAR_5->regs + VAR_2);
  VAR_7++;
 } while (!(VAR_6 & VAR_3));

 return VAR_7;
}
