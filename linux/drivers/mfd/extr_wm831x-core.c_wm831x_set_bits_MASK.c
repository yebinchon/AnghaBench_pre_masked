
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x {int io_lock; int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,unsigned short,unsigned short,unsigned short) ;
 int FUNC_3 (struct wm831x*,unsigned short) ;

int FUNC_4(struct wm831x *VAR_1, unsigned short VAR_2,
      unsigned short VAR_3, unsigned short VAR_4)
{
 int VAR_5;

 FUNC_0(&VAR_1->io_lock);

 if (!FUNC_3(VAR_1, VAR_2))
  VAR_5 = FUNC_2(VAR_1->regmap, VAR_2, VAR_3, VAR_4);
 else
  VAR_5 = -VAR_0;

 FUNC_1(&VAR_1->io_lock);

 return VAR_5;
}
