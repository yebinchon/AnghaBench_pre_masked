
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct super_block {int dummy; } ;
struct fs_info_t {int** vol_utbl; } ;
typedef int s32 ;
struct TYPE_2__ {struct fs_info_t fs_info; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct super_block*) ;
 int FUNC_3 (int) ;
 size_t FUNC_4 (int) ;
 int** FUNC_5 (int,int ) ;
 int* FUNC_6 (int,int,int ) ;
 int FUNC_7 (int**,int ,int) ;
 int FUNC_8 (char*,int,...) ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static s32 FUNC_9(struct super_block *VAR_9)
{
 int VAR_10, VAR_11 = VAR_0;
 u32 VAR_12;
 struct fs_info_t *VAR_13 = &(FUNC_0(VAR_9)->fs_info);

 bool VAR_14 = 0;
 u32 VAR_15 = 0;
 u16 VAR_16 = 0;
 u16 **VAR_17;

 VAR_17 = VAR_13->vol_utbl = FUNC_5(VAR_6 * sizeof(u16 *),
      VAR_3);
 if (!VAR_17)
  return VAR_1;
 FUNC_7(VAR_17, 0, VAR_6 * sizeof(u16 *));

 for (VAR_10 = 0; VAR_15 <= 0xFFFF && VAR_10 < VAR_5 * 2; VAR_10 += 2) {
  VAR_16 = FUNC_1(VAR_8 + VAR_10);
  if (VAR_14) {
   FUNC_8("skip from 0x%X ", VAR_15);
   VAR_15 += VAR_16;
   FUNC_8("to 0x%X (amount of 0x%X)\n", VAR_15, VAR_16);
   VAR_14 = 0;
  } else if (VAR_16 == VAR_15) {
   VAR_15++;
  } else if (VAR_16 == 0xFFFF) {
   VAR_14 = 1;
  } else {
   u16 VAR_18 = FUNC_3(VAR_15);

   if (!VAR_17[VAR_18]) {
    FUNC_8("alloc = 0x%X\n", VAR_18);
    VAR_17[VAR_18] = FUNC_6(VAR_7,
         sizeof(u16),
         VAR_3);
    if (!VAR_17[VAR_18]) {
     VAR_11 = VAR_1;
     goto error;
    }

    for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++)
     VAR_17[VAR_18][VAR_12] = (VAR_18 << VAR_4) | VAR_12;
   }

   VAR_17[VAR_18][FUNC_4(VAR_15)] = VAR_16;
   VAR_15++;
  }
 }

 if (VAR_15 >= 0xFFFF)
  return VAR_2;

error:

 FUNC_2(VAR_9);
 return VAR_11;
}
