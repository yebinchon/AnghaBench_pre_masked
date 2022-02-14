
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct super_block {int dummy; } ;
struct fs_info_t {scalar_t__** vol_utbl; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct bd_info_t {int sector_size; } ;
typedef scalar_t__ sector_t ;
typedef int s32 ;
struct TYPE_2__ {struct bd_info_t bd_info; struct fs_info_t fs_info; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct super_block*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 size_t FUNC_5 (scalar_t__) ;
 scalar_t__** FUNC_6 (int,int ) ;
 scalar_t__* FUNC_7 (scalar_t__,int,int ) ;
 int FUNC_8 (scalar_t__**,int ,int) ;
 int FUNC_9 (char*,scalar_t__,...) ;
 int FUNC_10 (struct super_block*,scalar_t__,struct buffer_head**,int) ;

__attribute__((used)) static s32 FUNC_11(struct super_block *VAR_7, sector_t VAR_8,
          u32 VAR_9, u32 VAR_10)
{
 int VAR_11, VAR_12 = VAR_0;
 u32 VAR_13;
 struct fs_info_t *VAR_14 = &(FUNC_0(VAR_7)->fs_info);
 struct bd_info_t *VAR_15 = &(FUNC_0(VAR_7)->bd_info);
 struct buffer_head *VAR_16 = ((void*)0);
 sector_t VAR_17 = VAR_9 + VAR_8;

 bool VAR_18 = 0;
 u32 VAR_19 = 0;
 u16 VAR_20 = 0;
 u16 **VAR_21;

 u32 VAR_22 = 0;

 VAR_21 = VAR_14->vol_utbl = FUNC_6(VAR_5 * sizeof(u16 *),
      VAR_3);
 if (!VAR_21)
  return VAR_1;
 FUNC_8(VAR_21, 0, VAR_5 * sizeof(u16 *));

 while (VAR_8 < VAR_17) {
  VAR_12 = FUNC_10(VAR_7, VAR_8, &VAR_16, 1);
  if (VAR_12 != VAR_2) {
   FUNC_9("sector read (0x%llX)fail\n",
     (unsigned long long)VAR_8);
   goto error;
  }
  VAR_8++;

  for (VAR_11 = 0; VAR_11 < VAR_15->sector_size && VAR_19 <= 0xFFFF; VAR_11 += 2) {
   VAR_20 = FUNC_1(((u8 *)VAR_16->b_data) + VAR_11);

   VAR_22 = ((VAR_22 & 1) ? 0x80000000 : 0) +
       (VAR_22 >> 1) + *(((u8 *)VAR_16->b_data) +
             VAR_11);
   VAR_22 = ((VAR_22 & 1) ? 0x80000000 : 0) +
       (VAR_22 >> 1) + *(((u8 *)VAR_16->b_data) +
             (VAR_11 + 1));

   if (VAR_18) {
    FUNC_9("skip from 0x%X ", VAR_19);
    VAR_19 += VAR_20;
    FUNC_9("to 0x%X (amount of 0x%X)\n",
      VAR_19, VAR_20);
    VAR_18 = 0;
   } else if (VAR_20 == VAR_19) {
    VAR_19++;
   } else if (VAR_20 == 0xFFFF) {
    VAR_18 = 1;
   } else {
    u16 VAR_23 = FUNC_4(VAR_19);

    if (!VAR_21[VAR_23]) {
     FUNC_9("alloc = 0x%X\n", VAR_23);
     VAR_21[VAR_23] = FUNC_7(VAR_6,
      sizeof(u16), VAR_3);
     if (!VAR_21[VAR_23]) {
      VAR_12 = VAR_1;
      goto error;
     }

     for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++)
      VAR_21[VAR_23][VAR_13] = (VAR_23 << VAR_4) | VAR_13;
    }

    VAR_21[VAR_23][FUNC_5(VAR_19)] = VAR_20;
    VAR_19++;
   }
  }
 }
 if (VAR_19 >= 0xFFFF && VAR_10 == VAR_22) {
  if (VAR_16)
   FUNC_2(VAR_16);
  return VAR_2;
 }
 VAR_12 = VAR_0;
error:
 if (VAR_16)
  FUNC_2(VAR_16);
 FUNC_3(VAR_7);
 return VAR_12;
}
