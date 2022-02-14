
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ds1wm_data {int bus_shift; int map; TYPE_1__* pdev; scalar_t__ is_hw_big_endian; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static inline u8 FUNC_6(struct ds1wm_data *VAR_0, u32 VAR_1)
{
 u32 VAR_2 = 0;

 if (VAR_0->is_hw_big_endian) {
  switch (VAR_0->bus_shift) {
  case 0:
   VAR_2 = FUNC_5(VAR_0->map + (VAR_1 << 0));
   break;
  case 1:
   VAR_2 = FUNC_2(VAR_0->map + (VAR_1 << 1));
   break;
  case 2:
   VAR_2 = FUNC_4(VAR_0->map + (VAR_1 << 2));
   break;
  }
 } else {
  switch (VAR_0->bus_shift) {
  case 0:
   VAR_2 = FUNC_5(VAR_0->map + (VAR_1 << 0));
   break;
  case 1:
   VAR_2 = FUNC_1(VAR_0->map + (VAR_1 << 1));
   break;
  case 2:
   VAR_2 = FUNC_3(VAR_0->map + (VAR_1 << 2));
   break;
  }
 }
 FUNC_0(&VAR_0->pdev->dev,
  "ds1wm_read_register reg: %d, 32 bit val:%x\n", VAR_1, VAR_2);
 return (u8)VAR_2;
}
