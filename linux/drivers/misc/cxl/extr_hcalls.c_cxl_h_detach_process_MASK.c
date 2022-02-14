
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int FUNC_0 (long,unsigned long*,int ,int ,int ) ;
 long VAR_0 ;
 long VAR_1 ;


 int VAR_2 ;





 int VAR_3 ;
 int FUNC_1 (int,char*,long) ;
 int FUNC_2 (long,char*,int ,int ,long) ;
 int FUNC_3 (int ,int ,long) ;

long FUNC_4(u64 VAR_4, u64 VAR_5)
{
 unsigned long VAR_6[VAR_3];
 long VAR_7;

 FUNC_0(VAR_7, VAR_6, VAR_2, VAR_4, VAR_5);
 FUNC_2(VAR_7, "cxl_h_detach_process(%#.16llx, 0x%.8llx): %li\n", VAR_4, VAR_5, VAR_7);
 FUNC_3(VAR_4, VAR_5, VAR_7);

 switch (VAR_7) {
 case 128:
  return 0;
 case 131:
  return -VAR_1;
 case 134:
 case 130:
 case 132:
 case 129:
 case 133:
  return -VAR_0;
 default:
  FUNC_1(1, "Unexpected return code: %lx", VAR_7);
  return -VAR_1;
 }
}
