
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char*,size_t,char*,...) ;
 char* FUNC_1 (unsigned char,unsigned char,char const**) ;

__attribute__((used)) static size_t
FUNC_2(char *VAR_0, size_t VAR_1,
         unsigned char VAR_2, unsigned char VAR_3)
{
 size_t VAR_4 = 0;
 const char *VAR_5 = ((void*)0);
 const char *VAR_6 = FUNC_1(VAR_2, VAR_3,
           &VAR_5);

 if (VAR_6) {
  VAR_4 = FUNC_0(VAR_0, VAR_1, "Add. Sense: %s",
    VAR_6);
  if (VAR_5)
   VAR_4 += FUNC_0(VAR_0 + VAR_4, VAR_1 - VAR_4,
      "(%s%x)", VAR_5, VAR_3);
 } else {
  if (VAR_2 >= 0x80)
   VAR_4 = FUNC_0(VAR_0, VAR_1, "<<vendor>>");
  VAR_4 += FUNC_0(VAR_0 + VAR_4, VAR_1 - VAR_4,
     "ASC=0x%x ", VAR_2);
  if (VAR_3 >= 0x80)
   VAR_4 += FUNC_0(VAR_0 + VAR_4, VAR_1 - VAR_4,
      "<<vendor>>");
  VAR_4 += FUNC_0(VAR_0 + VAR_4, VAR_1 - VAR_4,
     "ASCQ=0x%x ", VAR_3);
 }
 return VAR_4;
}
