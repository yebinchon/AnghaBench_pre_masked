
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dcon_priv {int ignore_fb_events; TYPE_1__* client; int fbinfo; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *,char*,char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static bool FUNC_6(struct dcon_priv *VAR_2, bool VAR_3)
{
 int VAR_4;

 FUNC_0();
 FUNC_4(VAR_2->fbinfo);

 VAR_2->ignore_fb_events = 1;
 VAR_4 = FUNC_3(VAR_2->fbinfo,
         VAR_3 ? VAR_0 : VAR_1);
 VAR_2->ignore_fb_events = 0;
 FUNC_5(VAR_2->fbinfo);
 FUNC_1();

 if (VAR_4) {
  FUNC_2(&VAR_2->client->dev, "couldn't %sblank framebuffer\n",
   VAR_3 ? "" : "un");
  return 0;
 }
 return 1;
}
