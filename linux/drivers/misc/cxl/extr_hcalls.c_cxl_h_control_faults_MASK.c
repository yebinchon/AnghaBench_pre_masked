
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int retbuf ;


 long VAR_0 ;
 long VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;






 int VAR_4 ;
 int FUNC_0 (int,char*,long) ;
 int FUNC_1 (long,char*,int ,int ,int ,int ,long,unsigned long) ;
 int FUNC_2 (unsigned long*,int ,int) ;
 long FUNC_3 (int ,unsigned long*,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ,unsigned long,long) ;

long FUNC_5(u64 VAR_5, u64 VAR_6,
     u64 VAR_7, u64 VAR_8)
{
 unsigned long VAR_9[VAR_4];
 long VAR_10;

 FUNC_2(VAR_9, 0, sizeof(VAR_9));

 VAR_10 = FUNC_3(VAR_2, VAR_9, VAR_5,
   VAR_3, VAR_6,
   VAR_7, VAR_8);
 FUNC_1(VAR_10, "cxl_h_control_faults(%#.16llx, 0x%llx, %#llx, %#llx): %li (%#lx)\n",
  VAR_5, VAR_6, VAR_7, VAR_8,
  VAR_10, VAR_9[0]);
 FUNC_4(VAR_5, VAR_6,
    VAR_7, VAR_8, VAR_9[0], VAR_10);

 switch (VAR_10) {
 case 128:
  return 0;
 case 130:
  return -VAR_1;
 case 132:
 case 129:
 case 134:
  return -VAR_0;
 case 133:
 case 131:
  return -VAR_1;
 default:
  FUNC_0(1, "Unexpected return code: %lx", VAR_10);
  return -VAR_1;
 }
}
