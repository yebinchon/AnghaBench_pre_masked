
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ushort ;
typedef scalar_t__ uchar ;
typedef int PortAddr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char*,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(PortAddr VAR_3)
{
 ushort VAR_4;

 FUNC_0(1, "AscGetChipSignatureByte(0x%x) 0x%x\n",
   VAR_3, FUNC_1(VAR_3));
 if (FUNC_1(VAR_3) == (uchar)VAR_2) {
  FUNC_0(1, "AscGetChipSignatureWord(0x%x) 0x%x\n",
    VAR_3, FUNC_2(VAR_3));
  VAR_4 = FUNC_2(VAR_3);
  if ((VAR_4 == (ushort)VAR_0) ||
      (VAR_4 == (ushort)VAR_1)) {
   return (1);
  }
 }
 return (0);
}
