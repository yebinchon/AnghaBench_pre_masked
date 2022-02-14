
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct synquacer_spi {int dev; scalar_t__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 unsigned long VAR_4 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct synquacer_spi *VAR_5,
         bool VAR_6)
{
 u32 VAR_7;
 unsigned long VAR_8 = VAR_4 +
  FUNC_1(VAR_1);


 do {
  VAR_7 = FUNC_2(VAR_5->regs + VAR_3) &
        VAR_2;
  if (VAR_6 && VAR_7)
   return 0;
  if (!VAR_6 && !VAR_7)
   return 0;
 } while (FUNC_3(VAR_4, VAR_8));

 FUNC_0(VAR_5->dev, "timeout occurs in updating Module Enable Status\n");
 return -VAR_0;
}
