
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ushort ;
typedef int uchar ;
typedef int PortAddr ;
typedef int ASCEEP_CONFIG ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(PortAddr VAR_5, ASCEEP_CONFIG *VAR_6,
          ushort VAR_7)
{
 int VAR_8;
 ushort *VAR_9;
 ushort VAR_10;
 ushort VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15 = VAR_2 - 2;

 VAR_9 = (ushort *)VAR_6;
 VAR_8 = 0;
 VAR_11 = 0;

 for (VAR_12 = 0; VAR_12 < 2; VAR_12++, VAR_9++) {
  VAR_11 += *VAR_9;
  if (*VAR_9 != FUNC_1(VAR_5, (uchar)VAR_12, *VAR_9)) {
   VAR_8++;
  }
 }
 if (VAR_7 & VAR_4) {
  VAR_13 = VAR_1;
  VAR_14 = VAR_3;
 } else {
  VAR_13 = VAR_0;
  VAR_14 = VAR_2;
 }
 for (VAR_12 = VAR_13; VAR_12 <= (VAR_14 - 1); VAR_12++, VAR_9++) {
  if (VAR_12 <= VAR_15) {




   VAR_10 = FUNC_2(*VAR_9);
   if (VAR_10 !=
       FUNC_1(VAR_5, (uchar)VAR_12, VAR_10)) {
    VAR_8++;
   }
  } else {

   if (*VAR_9 !=
       FUNC_1(VAR_5, (uchar)VAR_12, *VAR_9)) {
    VAR_8++;
   }
  }
  VAR_11 += *VAR_9;
 }

 *VAR_9 = VAR_11;
 if (VAR_11 != FUNC_1(VAR_5, (uchar)VAR_12, VAR_11)) {
  VAR_8++;
 }


 VAR_9 = (ushort *)VAR_6;



 for (VAR_12 = 0; VAR_12 < 2; VAR_12++, VAR_9++) {
  if (*VAR_9 != FUNC_0(VAR_5, (uchar)VAR_12)) {
   VAR_8++;
  }
 }
 if (VAR_7 & VAR_4) {
  VAR_13 = VAR_1;
  VAR_14 = VAR_3;
 } else {
  VAR_13 = VAR_0;
  VAR_14 = VAR_2;
 }
 for (VAR_12 = VAR_13; VAR_12 <= (VAR_14 - 1); VAR_12++, VAR_9++) {
  if (VAR_12 <= VAR_15) {




   VAR_10 =
       FUNC_3(FUNC_0
     (VAR_5, (uchar)VAR_12));
  } else {

   VAR_10 = FUNC_0(VAR_5, (uchar)VAR_12);
  }
  if (*VAR_9 != VAR_10) {
   VAR_8++;
  }
 }

 if (FUNC_0(VAR_5, (uchar)VAR_12) != VAR_11) {
  VAR_8++;
 }
 return VAR_8;
}
