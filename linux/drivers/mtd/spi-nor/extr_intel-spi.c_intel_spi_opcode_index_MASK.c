
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct intel_spi {scalar_t__* opcodes; scalar_t__ sregs; scalar_t__ locked; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct intel_spi *VAR_3, u8 VAR_4, int VAR_5)
{
 int VAR_6;
 int VAR_7;

 if (VAR_3->locked) {
  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3->opcodes); VAR_6++)
   if (VAR_3->opcodes[VAR_6] == VAR_4)
    return VAR_6;

  return -VAR_0;
 }


 FUNC_2(VAR_4, VAR_3->sregs + VAR_1);
 VAR_7 = FUNC_1(VAR_3->sregs + VAR_2);
 FUNC_2(VAR_5 << 16 | VAR_7, VAR_3->sregs + VAR_2);

 return 0;
}
