
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
typedef int u16 ;
struct NvRamType {int sub_class; int reserved; int cksum; int delay_time; scalar_t__ target; void** device_id; void** vendor_id; void** sub_sys_id; void** sub_vendor_id; } ;
struct TYPE_2__ {int value; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct NvRamType*) ;
 int FUNC_2 (struct NvRamType*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct NvRamType*,unsigned long) ;
 int FUNC_6 (struct NvRamType*,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct NvRamType *VAR_5, unsigned long VAR_6)
{
 u16 *VAR_7 = (u16 *)VAR_5;
 u16 VAR_8;
 u16 VAR_9;
 u32 VAR_10;
 u32 *VAR_11;

 FUNC_5(VAR_5, VAR_6);

 VAR_9 = 0;
 for (VAR_8 = 0, VAR_7 = (u16 *)VAR_5; VAR_8 < 64;
      VAR_8++, VAR_7++)
  VAR_9 += *VAR_7;
 if (VAR_9 != 0x1234) {




  FUNC_0(VAR_1,
   "EEProm checksum error: using default values and options.\n");
  VAR_5->sub_vendor_id[0] = (u8)VAR_3;
  VAR_5->sub_vendor_id[1] = (u8)(VAR_3 >> 8);
  VAR_5->sub_sys_id[0] = (u8)VAR_2;
  VAR_5->sub_sys_id[1] =
      (u8)(VAR_2 >> 8);
  VAR_5->sub_class = 0x00;
  VAR_5->vendor_id[0] = (u8)VAR_3;
  VAR_5->vendor_id[1] = (u8)(VAR_3 >> 8);
  VAR_5->device_id[0] = (u8)VAR_2;
  VAR_5->device_id[1] =
      (u8)(VAR_2 >> 8);
  VAR_5->reserved = 0x00;

  for (VAR_10 = 0, VAR_11 = (u32 *)VAR_5->target;
       VAR_10 < 16; VAR_10++, VAR_11++)
   *VAR_11 = 0x00000077;

  *VAR_11++ = 0x04000F07;
  *VAR_11++ = 0x00000015;
  for (VAR_10 = 0; VAR_10 < 12; VAR_10++, VAR_11++)
   *VAR_11 = 0x00;


  FUNC_4();
  FUNC_3();
  FUNC_2(VAR_5);

  VAR_5->cksum = 0x00;
  for (VAR_8 = 0, VAR_9 = 0, VAR_7 = (u16 *)VAR_5;
       VAR_8 < 63; VAR_8++, VAR_7++)
   VAR_9 += *VAR_7;

  *VAR_7 = 0x1234 - VAR_9;
  FUNC_6(VAR_5, VAR_6);
  VAR_5->delay_time = VAR_4[VAR_0].value;
 } else {
  FUNC_4();
  FUNC_1(VAR_5);
  FUNC_2(VAR_5);
 }
}
