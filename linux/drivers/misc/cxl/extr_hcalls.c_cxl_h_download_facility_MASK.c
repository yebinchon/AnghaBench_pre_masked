
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int retbuf ;


 unsigned int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;




 int VAR_3 ;


 int FUNC_0 (long) ;





 int FUNC_1 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_2 (int,char*,long,...) ;
 int FUNC_3 (long,char*,scalar_t__,int ,scalar_t__,scalar_t__,unsigned long,long) ;
 unsigned int FUNC_4 (long) ;
 int FUNC_5 (unsigned long*,int ,int) ;
 int FUNC_6 (unsigned int) ;
 long FUNC_7 (int ,unsigned long*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_8 (scalar_t__,int ,scalar_t__,scalar_t__,unsigned long,long) ;

__attribute__((used)) static long FUNC_9(u64 VAR_5, u64 VAR_6,
        u64 VAR_7, u64 VAR_8,
        u64 *VAR_9)
{
 unsigned long VAR_10[VAR_4];
 unsigned int VAR_11, VAR_12 = 0;
 u64 VAR_13 = 0;
 long VAR_14;

 if (*VAR_9 != 0)
  VAR_13 = *VAR_9;

 FUNC_5(VAR_10, 0, sizeof(VAR_10));
 while (1) {
  VAR_14 = FUNC_7(VAR_3, VAR_10,
     VAR_5, VAR_6, VAR_7, VAR_8,
     VAR_13);
  VAR_13 = VAR_10[0];
  if (VAR_14 != 136 && !FUNC_0(VAR_14))
   break;

  if (VAR_14 != 136) {
   VAR_11 = FUNC_4(VAR_14);
   VAR_12 += VAR_11;
   if (VAR_12 > VAR_0) {
    FUNC_2(1, "Warning: Giving up waiting for CXL hcall "
     "%#x after %u msec\n",
     VAR_3, VAR_12);
    VAR_14 = 136;
    break;
   }
   FUNC_6(VAR_11);
  }
 }
 FUNC_3(VAR_14, "cxl_h_download_facility(%#.16llx, %s(%#llx, %#llx), %#lx): %li\n",
   VAR_5, FUNC_1(VAR_6), VAR_7, VAR_8, VAR_10[0], VAR_14);
 FUNC_8(VAR_5, FUNC_1(VAR_6), VAR_7, VAR_8, VAR_10[0], VAR_14);

 switch (VAR_14) {
 case 128:
  return 0;
 case 132:
 case 134:
 case 130:
 case 137:
  return -VAR_2;
 case 138:
 case 131:
 case 133:
 case 129:
 case 136:
  return -VAR_1;
 case 135:
  *VAR_9 = VAR_10[0];
  return 1;
 default:
  FUNC_2(1, "Unexpected return code: %lx", VAR_14);
  return -VAR_2;
 }
}
