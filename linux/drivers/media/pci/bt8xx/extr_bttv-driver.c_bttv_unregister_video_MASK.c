
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bttv {int radio_dev; int vbi_dev; int video_dev; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct bttv *VAR_0)
{
 FUNC_0(&VAR_0->video_dev);
 FUNC_0(&VAR_0->vbi_dev);
 FUNC_0(&VAR_0->radio_dev);
}
