
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,int,char*,int) ;
 int FUNC_3 (int*,int,char*,int) ;
 int FUNC_4 (int*,int,char*,char*) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static u32 FUNC_7(struct qed_hwfn *VAR_0,
    u32 *VAR_1,
    bool VAR_2,
    const char *VAR_3,
    u32 VAR_4,
    u32 VAR_5,
    u32 VAR_6,
    bool VAR_7,
    const char *VAR_8,
    bool VAR_9, char VAR_10)
{
 u8 VAR_11 = 3;
 u32 VAR_12 = 0;
 char VAR_13[64];

 if (!VAR_5)
  FUNC_0(VAR_0,
     "Unexpected GRC Dump error: dumped memory size must be non-zero\n");

 if (VAR_6)
  VAR_11++;
 if (VAR_7)
  VAR_11++;


 VAR_12 += FUNC_3(VAR_1 + VAR_12,
           VAR_2, "grc_mem", VAR_11);

 if (VAR_3) {

  if (VAR_9) {
   FUNC_5(VAR_13, "?STORM_");
   VAR_13[0] = VAR_10;
   FUNC_5(VAR_13 + FUNC_6(VAR_13), VAR_3);
  } else {
   FUNC_5(VAR_13, VAR_3);
  }

  VAR_12 += FUNC_4(VAR_1 + VAR_12,
          VAR_2, "name", VAR_13);
 } else {

  u32 VAR_14 = FUNC_1(VAR_4);

  VAR_12 += FUNC_2(VAR_1 + VAR_12,
          VAR_2, "addr", VAR_14);
 }


 VAR_12 += FUNC_2(VAR_1 + VAR_12, VAR_2, "len", VAR_5);


 if (VAR_6)
  VAR_12 += FUNC_2(VAR_1 + VAR_12,
          VAR_2, "width", VAR_6);


 if (VAR_7)
  VAR_12 += FUNC_2(VAR_1 + VAR_12,
          VAR_2, "packed", 1);


 if (VAR_9) {
  FUNC_5(VAR_13, "?STORM_");
  VAR_13[0] = VAR_10;
  FUNC_5(VAR_13 + FUNC_6(VAR_13), VAR_8);
 } else {
  FUNC_5(VAR_13, VAR_8);
 }

 VAR_12 += FUNC_4(VAR_1 + VAR_12, VAR_2, "type", VAR_13);

 return VAR_12;
}
