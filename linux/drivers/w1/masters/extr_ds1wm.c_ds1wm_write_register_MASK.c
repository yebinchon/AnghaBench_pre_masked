
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ds1wm_data {int bus_shift; int map; scalar_t__ is_hw_big_endian; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static inline void FUNC_5(struct ds1wm_data *VAR_0, u32 VAR_1,
     u8 VAR_2)
{
 if (VAR_0->is_hw_big_endian) {
  switch (VAR_0->bus_shift) {
  case 0:
   FUNC_4(VAR_2, VAR_0->map + (VAR_1 << 0));
   break;
  case 1:
   FUNC_1((u16)VAR_2, VAR_0->map + (VAR_1 << 1));
   break;
  case 2:
   FUNC_3((u32)VAR_2, VAR_0->map + (VAR_1 << 2));
   break;
  }
 } else {
  switch (VAR_0->bus_shift) {
  case 0:
   FUNC_4(VAR_2, VAR_0->map + (VAR_1 << 0));
   break;
  case 1:
   FUNC_0((u16)VAR_2, VAR_0->map + (VAR_1 << 1));
   break;
  case 2:
   FUNC_2((u32)VAR_2, VAR_0->map + (VAR_1 << 2));
   break;
  }
 }
}
