
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct rtl8366_mib_counter {int length; scalar_t__ offset; } ;
struct realtek_smi {int map; } ;
typedef int port ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int,int*) ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct realtek_smi *VAR_7,
         int VAR_8,
         struct rtl8366_mib_counter *VAR_9,
         u64 *VAR_10)
{
 u32 VAR_11, VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_11 = VAR_2 +
  VAR_3 * (VAR_8) +
  VAR_9->offset;




 VAR_13 = FUNC_1(VAR_7->map, VAR_11, 0);
 if (VAR_13)
  return VAR_13;


 VAR_13 = FUNC_0(VAR_7->map, VAR_5, &VAR_12);
 if (VAR_13)
  return -VAR_1;

 if (VAR_12 & VAR_4)
  return -VAR_0;

 if (VAR_12 & VAR_6)
  return -VAR_1;


 *VAR_10 = 0;
 for (VAR_14 = VAR_9->length; VAR_14 > 0; VAR_14--) {
  VAR_13 = FUNC_0(VAR_7->map, VAR_11 + (VAR_14 - 1), &VAR_12);
  if (VAR_13)
   return VAR_13;
  *VAR_10 = (*VAR_10 << 16) | (VAR_12 & 0xFFFF);
 }
 return 0;
}
