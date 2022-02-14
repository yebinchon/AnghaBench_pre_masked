
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct wl1251_partition {scalar_t__ size; scalar_t__ start; } ;
struct wl1251 {TYPE_1__* if_ops; scalar_t__ virtual_reg_addr; scalar_t__ virtual_mem_addr; scalar_t__ physical_reg_addr; scalar_t__ physical_mem_addr; } ;
typedef int partition ;
struct TYPE_2__ {int (* write ) (struct wl1251*,int ,struct wl1251_partition*,int) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wl1251*,int ,struct wl1251_partition*,int) ;
 int FUNC_1 (int ,char*,...) ;

void FUNC_2(struct wl1251 *VAR_3,
     u32 VAR_4, u32 VAR_5,
     u32 VAR_6, u32 VAR_7)
{
 struct wl1251_partition VAR_8[2];

 FUNC_1(VAR_0, "mem_start %08X mem_size %08X",
       VAR_4, VAR_5);
 FUNC_1(VAR_0, "reg_start %08X reg_size %08X",
       VAR_6, VAR_7);



 if ((VAR_5 + VAR_7) > VAR_1) {
  FUNC_1(VAR_0, "Total size exceeds maximum virtual"
        " address range.  Truncating partition[0].");
  VAR_5 = VAR_1 - VAR_7;
  FUNC_1(VAR_0, "mem_start %08X mem_size %08X",
        VAR_4, VAR_5);
  FUNC_1(VAR_0, "reg_start %08X reg_size %08X",
        VAR_6, VAR_7);
 }

 if ((VAR_4 < VAR_6) &&
     ((VAR_4 + VAR_5) > VAR_6)) {


  FUNC_1(VAR_0, "End of partition[0] is "
        "overlapping partition[1].  Adjusted.");
  VAR_5 = VAR_6 - VAR_4;
  FUNC_1(VAR_0, "mem_start %08X mem_size %08X",
        VAR_4, VAR_5);
  FUNC_1(VAR_0, "reg_start %08X reg_size %08X",
        VAR_6, VAR_7);
 } else if ((VAR_6 < VAR_4) &&
     ((VAR_6 + VAR_7) > VAR_4)) {


  FUNC_1(VAR_0, "End of partition[1] is"
        " overlapping partition[0].  Adjusted.");
  VAR_7 = VAR_4 - VAR_6;
  FUNC_1(VAR_0, "mem_start %08X mem_size %08X",
        VAR_4, VAR_5);
  FUNC_1(VAR_0, "reg_start %08X reg_size %08X",
        VAR_6, VAR_7);
 }

 VAR_8[0].start = VAR_4;
 VAR_8[0].size = VAR_5;
 VAR_8[1].start = VAR_6;
 VAR_8[1].size = VAR_7;

 VAR_3->physical_mem_addr = VAR_4;
 VAR_3->physical_reg_addr = VAR_6;

 VAR_3->virtual_mem_addr = 0;
 VAR_3->virtual_reg_addr = VAR_5;

 VAR_3->if_ops->write(VAR_3, VAR_2, VAR_8,
  sizeof(VAR_8));
}
