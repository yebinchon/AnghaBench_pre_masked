
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pvr2_hdw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (char const*,unsigned int,char const**,unsigned int*) ;
 scalar_t__ FUNC_1 (char const*,unsigned int,char*) ;
 int FUNC_2 (char const*,unsigned int,int*) ;
 int FUNC_3 (struct pvr2_hdw*) ;
 int FUNC_4 (struct pvr2_hdw*) ;
 int FUNC_5 (struct pvr2_hdw*) ;
 int FUNC_6 (struct pvr2_hdw*,int,int) ;
 int FUNC_7 (struct pvr2_hdw*,int) ;
 int FUNC_8 (struct pvr2_hdw*) ;
 int FUNC_9 (struct pvr2_hdw*) ;
 int FUNC_10 (struct pvr2_hdw*,int,int) ;
 int FUNC_11 (struct pvr2_hdw*,int,int) ;
 int FUNC_12 (struct pvr2_hdw*) ;
 int FUNC_13 (int ,int *,int) ;
 int FUNC_14 (int ,char*,unsigned int,char const*) ;
 int FUNC_15 (struct pvr2_hdw*) ;

__attribute__((used)) static int FUNC_16(struct pvr2_hdw *VAR_2,const char *VAR_3,
    unsigned int VAR_4)
{
 const char *VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7;

 VAR_7 = FUNC_0(VAR_3,VAR_4,&VAR_5,&VAR_6);
 if (!VAR_7) return 0;
 VAR_4 -= VAR_7; VAR_3 += VAR_7;
 if (!VAR_5) return 0;

 FUNC_14(VAR_1,"debugifc cmd: \"%.*s\"",VAR_6,VAR_5);
 if (FUNC_1(VAR_5,VAR_6,"reset")) {
  VAR_7 = FUNC_0(VAR_3,VAR_4,&VAR_5,&VAR_6);
  if (!VAR_7) return -VAR_0;
  VAR_4 -= VAR_7; VAR_3 += VAR_7;
  if (!VAR_5) return -VAR_0;
  if (FUNC_1(VAR_5,VAR_6,"cpu")) {
   FUNC_7(VAR_2,!0);
   FUNC_7(VAR_2,0);
   return 0;
  } else if (FUNC_1(VAR_5,VAR_6,"bus")) {
   FUNC_8(VAR_2);
  } else if (FUNC_1(VAR_5,VAR_6,"soft")) {
   return FUNC_5(VAR_2);
  } else if (FUNC_1(VAR_5,VAR_6,"deep")) {
   return FUNC_4(VAR_2);
  } else if (FUNC_1(VAR_5,VAR_6,"firmware")) {
   return FUNC_15(VAR_2);
  } else if (FUNC_1(VAR_5,VAR_6,"decoder")) {
   return FUNC_3(VAR_2);
  } else if (FUNC_1(VAR_5,VAR_6,"worker")) {
   return FUNC_12(VAR_2);
  } else if (FUNC_1(VAR_5,VAR_6,"usbstats")) {
   FUNC_13(FUNC_9(VAR_2),
           ((void*)0), !0);
   return 0;
  }
  return -VAR_0;
 } else if (FUNC_1(VAR_5,VAR_6,"cpufw")) {
  VAR_7 = FUNC_0(VAR_3,VAR_4,&VAR_5,&VAR_6);
  if (!VAR_7) return -VAR_0;
  VAR_4 -= VAR_7; VAR_3 += VAR_7;
  if (!VAR_5) return -VAR_0;
  if (FUNC_1(VAR_5,VAR_6,"fetch")) {
   VAR_7 = FUNC_0(VAR_3,VAR_4,&VAR_5,&VAR_6);
   if (VAR_7 && VAR_5) {
    VAR_4 -= VAR_7; VAR_3 += VAR_7;
    if (FUNC_1(VAR_5, VAR_6,
          "prom")) {
     FUNC_6(VAR_2, 2, !0);
    } else if (FUNC_1(VAR_5, VAR_6,
          "ram8k")) {
     FUNC_6(VAR_2, 0, !0);
    } else if (FUNC_1(VAR_5, VAR_6,
          "ram16k")) {
     FUNC_6(VAR_2, 1, !0);
    } else {
     return -VAR_0;
    }
   }
   FUNC_6(VAR_2,0,!0);
   return 0;
  } else if (FUNC_1(VAR_5,VAR_6,"done")) {
   FUNC_6(VAR_2,0,0);
   return 0;
  } else {
   return -VAR_0;
  }
 } else if (FUNC_1(VAR_5,VAR_6,"gpio")) {
  int VAR_8 = 0;
  int VAR_9;
  u32 VAR_10,VAR_11;
  VAR_7 = FUNC_0(VAR_3,VAR_4,&VAR_5,&VAR_6);
  if (!VAR_7) return -VAR_0;
  VAR_4 -= VAR_7; VAR_3 += VAR_7;
  if (!VAR_5) return -VAR_0;
  if (FUNC_1(VAR_5,VAR_6,"dir")) {
   VAR_8 = !0;
  } else if (!FUNC_1(VAR_5,VAR_6,"out")) {
   return -VAR_0;
  }
  VAR_7 = FUNC_0(VAR_3,VAR_4,&VAR_5,&VAR_6);
  if (!VAR_7) return -VAR_0;
  VAR_4 -= VAR_7; VAR_3 += VAR_7;
  if (!VAR_5) return -VAR_0;
  VAR_9 = FUNC_2(VAR_5,VAR_6,&VAR_10);
  if (VAR_9) return VAR_9;
  VAR_7 = FUNC_0(VAR_3,VAR_4,&VAR_5,&VAR_6);
  if (VAR_5) {
   VAR_9 = FUNC_2(VAR_5,VAR_6,&VAR_11);
   if (VAR_9) return VAR_9;
  } else {
   VAR_11 = VAR_10;
   VAR_10 = 0xffffffff;
  }
  if (VAR_8) {
   VAR_9 = FUNC_10(VAR_2,VAR_10,VAR_11);
  } else {
   VAR_9 = FUNC_11(VAR_2,VAR_10,VAR_11);
  }
  return VAR_9;
 }
 FUNC_14(VAR_1,
     "debugifc failed to recognize cmd: \"%.*s\"",VAR_6,VAR_5);
 return -VAR_0;
}
