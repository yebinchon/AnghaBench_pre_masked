
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_light {int ready; int has_flash; int channels_count; int * name; int * channels; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct gb_light*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct gb_light *VAR_0)
{
 int VAR_1;

 VAR_0->ready = 0;

 if (VAR_0->has_flash)
  FUNC_1(VAR_0);
 VAR_0->has_flash = 0;

 for (VAR_1 = 0; VAR_1 < VAR_0->channels_count; VAR_1++)
  FUNC_0(&VAR_0->channels[VAR_1]);
 VAR_0->channels_count = 0;

 FUNC_2(VAR_0->channels);
 VAR_0->channels = ((void*)0);
 FUNC_2(VAR_0->name);
 VAR_0->name = ((void*)0);
}
