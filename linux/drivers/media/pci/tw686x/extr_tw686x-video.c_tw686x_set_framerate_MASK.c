
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw686x_video_channel {size_t ch; int video_standard; int fps; int dev; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 unsigned int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_4(struct tw686x_video_channel *VAR_2,
     unsigned int VAR_3)
{
 unsigned int VAR_4;

 VAR_4 = FUNC_2(VAR_3, FUNC_0(VAR_2->video_standard));
 FUNC_1(VAR_2->dev, VAR_0[VAR_2->ch], VAR_1[VAR_4]);
 VAR_2->fps = FUNC_3(VAR_4, FUNC_0(VAR_2->video_standard));
}
