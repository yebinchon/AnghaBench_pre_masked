
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssd1307fb_par {int client; } ;
struct fb_info {struct ssd1307fb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(int VAR_3, struct fb_info *VAR_4)
{
 struct ssd1307fb_par *VAR_5 = VAR_4->par;

 if (VAR_3 != VAR_0)
  return FUNC_0(VAR_5->client, VAR_1);
 else
  return FUNC_0(VAR_5->client, VAR_2);
}
