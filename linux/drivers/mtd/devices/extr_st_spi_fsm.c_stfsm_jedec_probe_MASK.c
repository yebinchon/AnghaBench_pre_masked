
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct stfsm {int dev; } ;
struct flash_info {int jedec_id; int ext_id; scalar_t__ name; } ;


 int FUNC_0 (int ,char*,int,int*) ;
 int FUNC_1 (int ,char*,int) ;
 struct flash_info* VAR_0 ;
 int FUNC_2 (struct stfsm*,int*) ;

__attribute__((used)) static struct flash_info *FUNC_3(struct stfsm *VAR_1)
{
 struct flash_info *VAR_2;
 u16 VAR_3;
 u32 VAR_4;
 u8 VAR_5[5];

 FUNC_2(VAR_1, VAR_5);

 VAR_4 = VAR_5[0] << 16 | VAR_5[1] << 8 | VAR_5[2];





 VAR_3 = VAR_5[3] << 8 | VAR_5[4];

 FUNC_0(VAR_1->dev, "JEDEC =  0x%08x [%5ph]\n", VAR_4, VAR_5);

 for (VAR_2 = VAR_0; VAR_2->name; VAR_2++) {
  if (VAR_2->jedec_id == VAR_4) {
   if (VAR_2->ext_id && VAR_2->ext_id != VAR_3)
    continue;
   return VAR_2;
  }
 }
 FUNC_1(VAR_1->dev, "Unrecognized JEDEC id %06x\n", VAR_4);

 return ((void*)0);
}
