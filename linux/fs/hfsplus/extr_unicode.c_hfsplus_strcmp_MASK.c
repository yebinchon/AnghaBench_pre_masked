
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct hfsplus_unistr {int * unicode; int const length; } ;
typedef int hfsplus_unichr ;


 scalar_t__ FUNC_0 (int const) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

int FUNC_2(const struct hfsplus_unistr *VAR_0,
     const struct hfsplus_unistr *VAR_1)
{
 u16 VAR_2, VAR_3, VAR_4, VAR_5;
 const hfsplus_unichr *VAR_6, *VAR_7;
 int VAR_8;

 VAR_2 = FUNC_0(VAR_0->length);
 VAR_3 = FUNC_0(VAR_1->length);
 VAR_6 = VAR_0->unicode;
 VAR_7 = VAR_1->unicode;

 for (VAR_8 = FUNC_1(VAR_2, VAR_3); VAR_8 > 0; VAR_8--) {
  VAR_4 = FUNC_0(*VAR_6);
  VAR_5 = FUNC_0(*VAR_7);
  if (VAR_4 != VAR_5)
   return VAR_4 < VAR_5 ? -1 : 1;
  VAR_6++;
  VAR_7++;
 }

 return VAR_2 < VAR_3 ? -1 :
        VAR_2 > VAR_3 ? 1 : 0;
}
