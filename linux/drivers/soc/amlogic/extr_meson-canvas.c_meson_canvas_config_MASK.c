
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct meson_canvas {int lock; int dev; int * used; int supports_endianness; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct meson_canvas*,int ) ;
 int FUNC_1 (struct meson_canvas*,int ,size_t) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct meson_canvas *VAR_12, u8 VAR_13,
   u32 VAR_14, u32 VAR_15, u32 VAR_16,
   unsigned int VAR_17,
   unsigned int VAR_18,
   unsigned int VAR_19)
{
 unsigned long VAR_20;

 if (VAR_19 && !VAR_12->supports_endianness) {
  FUNC_2(VAR_12->dev,
   "Endianness is not supported on this SoC\n");
  return -VAR_11;
 }

 FUNC_3(&VAR_12->lock, VAR_20);
 if (!VAR_12->used[VAR_13]) {
  FUNC_2(VAR_12->dev,
   "Trying to setup non allocated canvas %u\n",
   VAR_13);
  FUNC_4(&VAR_12->lock, VAR_20);
  return -VAR_11;
 }

 FUNC_1(VAR_12, VAR_10,
       ((VAR_14 + 7) >> 3) |
       (((VAR_15 + 7) >> 3) << VAR_5));

 FUNC_1(VAR_12, VAR_9,
       ((((VAR_15 + 7) >> 3) >> VAR_6) <<
      VAR_4) |
       (VAR_16 << VAR_2) |
       (VAR_17 << VAR_7) |
       (VAR_18 << VAR_0) |
       (VAR_19 << VAR_1));

 FUNC_1(VAR_12, VAR_8,
       VAR_3 | VAR_13);


 FUNC_0(VAR_12, VAR_9);
 FUNC_4(&VAR_12->lock, VAR_20);

 return 0;
}
