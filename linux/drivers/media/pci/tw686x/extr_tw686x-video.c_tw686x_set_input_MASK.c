
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tw686x_video_channel {unsigned int input; size_t ch; int dev; } ;


 int * VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct tw686x_video_channel *VAR_1, unsigned int VAR_2)
{
 u32 VAR_3;

 VAR_1->input = VAR_2;

 VAR_3 = FUNC_0(VAR_1->dev, VAR_0[VAR_1->ch]);
 VAR_3 &= ~(0x3 << 30);
 VAR_3 |= VAR_2 << 30;
 FUNC_1(VAR_1->dev, VAR_0[VAR_1->ch], VAR_3);
}
