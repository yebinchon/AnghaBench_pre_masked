
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ushort ;
typedef int uchar ;
typedef int PortAddr ;
typedef int ASCEEP_CONFIG ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static ushort FUNC_2(PortAddr VAR_5, ASCEEP_CONFIG *VAR_6,
         ushort VAR_7)
{
 ushort VAR_8;
 ushort VAR_9;
 ushort *VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13 = VAR_2 - 2;
 int VAR_14;

 VAR_10 = (ushort *)VAR_6;
 VAR_9 = 0;

 for (VAR_14 = 0; VAR_14 < 2; VAR_14++, VAR_10++) {
  *VAR_10 = FUNC_0(VAR_5, (uchar)VAR_14);
  VAR_9 += *VAR_10;
 }
 if (VAR_7 & VAR_4) {
  VAR_11 = VAR_1;
  VAR_12 = VAR_3;
 } else {
  VAR_11 = VAR_0;
  VAR_12 = VAR_2;
 }
 for (VAR_14 = VAR_11; VAR_14 <= (VAR_12 - 1); VAR_14++, VAR_10++) {
  VAR_8 = FUNC_0(VAR_5, (uchar)VAR_14);
  if (VAR_14 <= VAR_13) {




   *VAR_10 = FUNC_1(VAR_8);
  } else {

   *VAR_10 = VAR_8;
  }
  VAR_9 += VAR_8;
 }




 *VAR_10 = FUNC_0(VAR_5, (uchar)VAR_14);
 return VAR_9;
}
