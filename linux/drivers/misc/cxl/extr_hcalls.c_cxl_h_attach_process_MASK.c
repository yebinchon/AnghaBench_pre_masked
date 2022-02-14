
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct cxl_process_element_hcall {int dummy; } ;


 int FUNC_0 (long,unsigned long*,int ,unsigned long,int ) ;
 long VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,char*,long) ;
 int FUNC_2 (long,char*,unsigned long,int ,long) ;
 int FUNC_3 (struct cxl_process_element_hcall*,int) ;
 int FUNC_4 (char*,unsigned long,unsigned long,unsigned long) ;
 int FUNC_5 (unsigned long,int ,unsigned long,unsigned long,unsigned long,long) ;
 int FUNC_6 (struct cxl_process_element_hcall*) ;

long FUNC_7(u64 VAR_4,
   struct cxl_process_element_hcall *VAR_5,
   u64 *VAR_6, u64 *VAR_7, u64 *VAR_8)
{
 unsigned long VAR_9[VAR_3];
 long VAR_10;

 FUNC_0(VAR_10, VAR_9, VAR_2, VAR_4, FUNC_6(VAR_5));
 FUNC_2(VAR_10, "cxl_h_attach_process(%#.16llx, %#.16lx): %li\n",
  VAR_4, FUNC_6(VAR_5), VAR_10);
 FUNC_5(VAR_4, FUNC_6(VAR_5), VAR_9[0], VAR_9[1], VAR_9[2], VAR_10);

 FUNC_4("token: 0x%.8lx mmio_addr: 0x%lx mmio_size: 0x%lx\nProcess Element Structure:\n",
  VAR_9[0], VAR_9[1], VAR_9[2]);
 FUNC_3(VAR_5, sizeof(*VAR_5));

 switch (VAR_10) {
 case 128:
  *VAR_6 = VAR_9[0];
  if (VAR_7)
   *VAR_7 = VAR_9[1];
  if (VAR_8)
   *VAR_8 = VAR_9[2];
  return 0;
 case 131:
 case 133:
  return -VAR_1;
 case 135:
 case 130:
 case 132:
 case 129:
 case 134:
  return -VAR_0;
 default:
  FUNC_1(1, "Unexpected return code: %lx", VAR_10);
  return -VAR_1;
 }
}
