
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_cobalt_card {struct snd_card* sc; struct cobalt_stream* s; } ;
struct snd_card {int longname; int shortname; int driver; } ;
struct cobalt_stream {int video_channel; struct cobalt* cobalt; } ;
struct cobalt {int instance; } ;


 int FUNC_0 (int ,int,char*,int,int) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int FUNC_2(struct snd_cobalt_card *VAR_0)
{
 struct cobalt_stream *VAR_1 = VAR_0->s;
 struct cobalt *VAR_2 = VAR_1->cobalt;
 struct snd_card *VAR_3 = VAR_0->sc;


 FUNC_1(VAR_3->driver, "cobalt", sizeof(VAR_3->driver));


 FUNC_0(VAR_3->shortname, sizeof(VAR_3->shortname), "cobalt-%d-%d",
   VAR_2->instance, VAR_1->video_channel);


 FUNC_0(VAR_3->longname, sizeof(VAR_3->longname),
   "Cobalt %d HDMI %d",
   VAR_2->instance, VAR_1->video_channel);

 return 0;
}
