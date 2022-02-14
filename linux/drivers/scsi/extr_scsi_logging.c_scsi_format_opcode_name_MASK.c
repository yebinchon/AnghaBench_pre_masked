
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 size_t FUNC_1 (char*,size_t,char*,...) ;
 int FUNC_2 (int,int,char const**,char const**) ;
 int FUNC_3 (unsigned char const*) ;

__attribute__((used)) static size_t FUNC_4(char *VAR_2, size_t VAR_3,
          const unsigned char *VAR_4)
{
 int VAR_5, VAR_6;
 const char *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
 size_t VAR_9;

 VAR_6 = VAR_4[0];
 if (VAR_6 == VAR_0) {
  int VAR_10 = FUNC_3(VAR_4);

  if (VAR_10 < 10) {
   VAR_9 = FUNC_1(VAR_2, VAR_3,
     "short variable length command, len=%d",
     VAR_10);
   return VAR_9;
  }
  VAR_5 = (VAR_4[8] << 8) + VAR_4[9];
 } else
  VAR_5 = VAR_4[1] & 0x1f;

 if (!FUNC_2(VAR_6, VAR_5, &VAR_7, &VAR_8)) {
  if (VAR_7)
   VAR_9 = FUNC_1(VAR_2, VAR_3, "%s", VAR_7);
  else {
   VAR_9 = FUNC_1(VAR_2, VAR_3, "opcode=0x%x", VAR_6);
   if (FUNC_0(VAR_9 >= VAR_3))
    return VAR_9;
   if (VAR_6 >= VAR_1)
    VAR_9 += FUNC_1(VAR_2 + VAR_9, VAR_3 - VAR_9,
       " (vendor)");
   else if (VAR_6 >= 0x60 && VAR_6 < 0x7e)
    VAR_9 += FUNC_1(VAR_2 + VAR_9, VAR_3 - VAR_9,
       " (reserved)");
  }
 } else {
  if (VAR_8)
   VAR_9 = FUNC_1(VAR_2, VAR_3, "%s", VAR_8);
  else if (VAR_7)
   VAR_9 = FUNC_1(VAR_2, VAR_3, "%s, sa=0x%x",
     VAR_7, VAR_5);
  else
   VAR_9 = FUNC_1(VAR_2, VAR_3,
     "opcode=0x%x, sa=0x%x", VAR_6, VAR_5);
 }
 FUNC_0(VAR_9 >= VAR_3);
 return VAR_9;
}
