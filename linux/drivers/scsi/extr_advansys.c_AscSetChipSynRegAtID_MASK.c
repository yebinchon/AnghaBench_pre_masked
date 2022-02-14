
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uchar ;
typedef int PortAddr ;
typedef int ASC_SCSI_BIT_ID_TYPE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static bool FUNC_5(PortAddr VAR_1, uchar VAR_2, uchar VAR_3)
{
 ASC_SCSI_BIT_ID_TYPE VAR_4;
 int VAR_5;
 bool VAR_6 = 1;

 FUNC_2(VAR_1, 1);
 VAR_4 = FUNC_1(VAR_1);
 for (VAR_5 = 0; VAR_5 <= VAR_0; VAR_5++) {
  if (VAR_4 == (0x01 << VAR_5))
   break;
 }
 VAR_4 = (ASC_SCSI_BIT_ID_TYPE) VAR_5;
 FUNC_4(VAR_1, VAR_2);
 if (FUNC_1(VAR_1) == (0x01 << VAR_2)) {
  FUNC_2(VAR_1, 0);
  FUNC_3(VAR_1, VAR_3);
  if (FUNC_0(VAR_1) != VAR_3) {
   VAR_6 = 0;
  }
 } else {
  VAR_6 = 0;
 }
 FUNC_2(VAR_1, 1);
 FUNC_4(VAR_1, VAR_4);
 FUNC_2(VAR_1, 0);
 return (VAR_6);
}
