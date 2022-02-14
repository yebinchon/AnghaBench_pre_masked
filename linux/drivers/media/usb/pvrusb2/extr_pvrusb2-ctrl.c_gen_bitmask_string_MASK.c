
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (char*,unsigned int,char*,char*,...) ;

__attribute__((used)) static unsigned int FUNC_1(int VAR_0,int VAR_1,int VAR_2,
           const char **VAR_3,
           char *VAR_4,unsigned int VAR_5)
{
 unsigned int VAR_6;
 long VAR_7,VAR_8;
 int VAR_9;
 unsigned int VAR_10,VAR_11;
 const char *VAR_12;

 VAR_9 = 0;
 VAR_10 = 0;
 VAR_8 = 0;
 for (VAR_6 = 0, VAR_7 = 1; VAR_0; VAR_6++, VAR_7 <<= 1) {
  if (VAR_7 & VAR_0) {
   VAR_0 &= ~VAR_7;
   VAR_12 = VAR_3[VAR_6];
   if (VAR_12) {
    VAR_11 = FUNC_0(VAR_4,VAR_5,"%s%s%s",
      (VAR_9 ? " " : ""),
      (VAR_2 ? "" :
       ((VAR_1 & VAR_7) ? "+" : "-")),
      VAR_12);
    VAR_4 += VAR_11; VAR_5 -= VAR_11; VAR_10 += VAR_11;
    VAR_9 = !0;
   } else {
    VAR_8 |= VAR_7;
   }
  }
 }
 if (VAR_8) {
  if (VAR_2) {
   VAR_11 = FUNC_0(VAR_4,VAR_5,"%s0x%lx",
     (VAR_9 ? " " : ""),
     VAR_8);
   VAR_4 += VAR_11; VAR_5 -= VAR_11; VAR_10 += VAR_11;
   VAR_9 = !0;
  } else if (VAR_8 & VAR_1) {
   VAR_11 = FUNC_0(VAR_4,VAR_5,"%s+0x%lx",
     (VAR_9 ? " " : ""),
     VAR_8 & VAR_1);
   VAR_4 += VAR_11; VAR_5 -= VAR_11; VAR_10 += VAR_11;
   VAR_9 = !0;
  } else if (VAR_8 & ~VAR_1) {
   VAR_11 = FUNC_0(VAR_4,VAR_5,"%s+0x%lx",
     (VAR_9 ? " " : ""),
     VAR_8 & ~VAR_1);
   VAR_4 += VAR_11; VAR_5 -= VAR_11; VAR_10 += VAR_11;
   VAR_9 = !0;
  }
 }
 return VAR_10;
}
