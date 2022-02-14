
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct allegro_dev {TYPE_1__* plat_dev; int v4l2_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,char const*,int *,int ,struct allegro_dev*,int ) ;
 int FUNC_1 (int,int ,int *,char*,char const*) ;

__attribute__((used)) static int FUNC_2(struct allegro_dev *VAR_4)
{
 const char *VAR_5 = "al5e_b.fw";

 FUNC_1(1, VAR_3, &VAR_4->v4l2_dev,
   "requesting firmware '%s'\n", VAR_5);
 return FUNC_0(VAR_1, 1, VAR_5,
           &VAR_4->plat_dev->dev, VAR_0, VAR_4,
           VAR_2);
}
