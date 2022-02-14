
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;


 int FUNC_0 (long,unsigned long*,int ,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long) ;
 long VAR_0 ;
 long VAR_1 ;


 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_1 (unsigned long) ;
 int VAR_6 ;
 int FUNC_2 (int,char*,long) ;
 int FUNC_3 (long,char*,unsigned long,int ,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,long) ;
 int FUNC_4 (unsigned long,int ,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,long) ;

__attribute__((used)) static long FUNC_5(u64 VAR_7, u64 VAR_8,
       u64 VAR_9, u64 VAR_10, u64 VAR_11, u64 VAR_12, u64 *VAR_13)
{
 unsigned long VAR_14[VAR_6];
 long VAR_15;

 FUNC_0(VAR_15, VAR_14, VAR_2, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
 FUNC_3(VAR_15, "cxl_h_control_function(%#.16llx, %s(%#llx, %#llx, %#llx, %#llx, R4: %#lx)): %li\n",
  VAR_7, FUNC_1(VAR_8), VAR_9, VAR_10, VAR_11, VAR_12, VAR_14[0], VAR_15);
 FUNC_4(VAR_7, FUNC_1(VAR_8), VAR_9, VAR_10, VAR_11, VAR_12, VAR_14[0], VAR_15);

 switch (VAR_15) {
 case 128:
  if ((VAR_8 == VAR_4 ||
       VAR_8 == VAR_5 ||
       VAR_8 == VAR_3))
   *VAR_13 = VAR_14[0];
  return 0;
 case 132:
 case 136:
 case 133:
 case 134:
 case 130:
  return -VAR_1;
 case 138:
 case 131:
 case 135:
 case 129:
 case 137:
  return -VAR_0;
 default:
  FUNC_2(1, "Unexpected return code: %lx", VAR_15);
  return -VAR_1;
 }
}
