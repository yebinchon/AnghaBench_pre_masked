
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ivtv_card {struct snd_card* sc; int v4l2_dev; } ;
struct snd_card {int longname; int shortname; int driver; } ;
struct ivtv {int instance; char* card_name; } ;


 int FUNC_0 (int ,int,char*,int,...) ;
 int FUNC_1 (int ,char*,int) ;
 struct ivtv* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_ivtv_card *VAR_0)
{
 struct ivtv *VAR_1 = FUNC_2(VAR_0->v4l2_dev);
 struct snd_card *VAR_2 = VAR_0->sc;


 FUNC_1(VAR_2->driver, "CX2341[56]", sizeof(VAR_2->driver));


 FUNC_0(VAR_2->shortname, sizeof(VAR_2->shortname), "IVTV-%d",
   VAR_1->instance);


 FUNC_0(VAR_2->longname, sizeof(VAR_2->longname),
   "CX2341[56] #%d %s TV/FM Radio/Line-In Capture",
   VAR_1->instance, VAR_1->card_name);

 return 0;
}
