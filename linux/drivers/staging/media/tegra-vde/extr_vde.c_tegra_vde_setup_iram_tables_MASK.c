
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct video_frame {int frame_num; int aux_addr; int flags; } ;
struct tegra_vde {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tegra_vde*,int,unsigned int,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct tegra_vde *VAR_1,
     struct video_frame *VAR_2,
     unsigned int VAR_3,
     unsigned int VAR_4)
{
 struct video_frame *VAR_5;
 u32 VAR_6, VAR_7;
 int VAR_8;
 unsigned int VAR_9, VAR_10;

 FUNC_1(VAR_2[0].frame_num);

 for (VAR_9 = 0; VAR_9 < 16; VAR_9++) {
  if (VAR_9 < VAR_3) {
   VAR_5 = &VAR_2[VAR_9 + 1];

   VAR_7 = VAR_5->aux_addr;

   VAR_6 = (VAR_9 + 1) << 26;
   VAR_6 |= !(VAR_5->flags & VAR_0) << 25;
   VAR_6 |= 1 << 24;
   VAR_6 |= VAR_5->frame_num;
  } else {
   VAR_7 = 0x6ADEAD00;
   VAR_6 = 0;
  }

  FUNC_0(VAR_1, 0, VAR_9, VAR_6, VAR_7);
  FUNC_0(VAR_1, 1, VAR_9, VAR_6, VAR_7);
  FUNC_0(VAR_1, 2, VAR_9, VAR_6, VAR_7);
  FUNC_0(VAR_1, 3, VAR_9, VAR_6, VAR_7);
 }

 if (!(VAR_2[0].flags & VAR_0))
  return;

 if (VAR_4 >= VAR_3)
  return;

 VAR_8 = VAR_3 - VAR_4;

 FUNC_2(VAR_8, VAR_4);

 for (VAR_9 = 0, VAR_10 = VAR_4; VAR_9 < VAR_8; VAR_9++, VAR_10++) {
  VAR_5 = &VAR_2[VAR_10 + 1];

  VAR_7 = VAR_5->aux_addr;

  VAR_6 = (VAR_10 + 1) << 26;
  VAR_6 |= !(VAR_5->flags & VAR_0) << 25;
  VAR_6 |= 1 << 24;
  VAR_6 |= VAR_5->frame_num;

  FUNC_0(VAR_1, 2, VAR_9, VAR_6, VAR_7);
 }

 for (VAR_10 = 0; VAR_9 < VAR_3; VAR_9++, VAR_10++) {
  VAR_5 = &VAR_2[VAR_10 + 1];

  VAR_7 = VAR_5->aux_addr;

  VAR_6 = (VAR_10 + 1) << 26;
  VAR_6 |= !(VAR_5->flags & VAR_0) << 25;
  VAR_6 |= 1 << 24;
  VAR_6 |= VAR_5->frame_num;

  FUNC_0(VAR_1, 2, VAR_9, VAR_6, VAR_7);
 }
}
