
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hvfb_par {int update; int fb_ready; int dwork; int hvfb_panic_nb; } ;
struct hv_device {int channel; } ;
struct fb_info {struct hvfb_par* par; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fb_info*) ;
 struct fb_info* FUNC_3 (struct hv_device*) ;
 int FUNC_4 (struct hv_device*,int *) ;
 int FUNC_5 (struct fb_info*) ;
 int VAR_0 ;
 int FUNC_6 (struct fb_info*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct hv_device *VAR_1)
{
 struct fb_info *VAR_2 = FUNC_3(VAR_1);
 struct hvfb_par *VAR_3 = VAR_2->par;

 FUNC_0(&VAR_0,
      &VAR_3->hvfb_panic_nb);

 VAR_3->update = 0;
 VAR_3->fb_ready = 0;

 FUNC_6(VAR_2);
 FUNC_1(&VAR_3->dwork);

 FUNC_7(VAR_1->channel);
 FUNC_4(VAR_1, ((void*)0));

 FUNC_5(VAR_2);
 FUNC_2(VAR_2);

 return 0;
}
