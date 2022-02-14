
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_videomode {int flag; int vmode; int xres; int yres; int refresh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,scalar_t__,char*,char,int,int,char,int ) ;

__attribute__((used)) static int FUNC_1(char *VAR_6, unsigned int VAR_7,
         const struct fb_videomode *VAR_8)
{
 char VAR_9 = 'U';
 char VAR_10 = 'p';

 if (VAR_8->flag & VAR_0)
  VAR_9 = 'D';
 if (VAR_8->flag & VAR_2)
  VAR_9 = 'V';
 if (VAR_8->flag & VAR_1)
  VAR_9 = 'S';

 if (VAR_8->vmode & VAR_4)
  VAR_10 = 'i';
 if (VAR_8->vmode & VAR_3)
  VAR_10 = 'd';

 return FUNC_0(&VAR_6[VAR_7], VAR_5 - VAR_7, "%c:%dx%d%c-%d\n",
                 VAR_9, VAR_8->xres, VAR_8->yres, VAR_10, VAR_8->refresh);
}
