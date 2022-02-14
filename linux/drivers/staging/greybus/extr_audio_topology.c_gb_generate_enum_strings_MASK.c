
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gbaudio_module_info {int dev; } ;
struct gb_audio_enumerated {char* names; int items; } ;
typedef char __u8 ;


 int VAR_0 ;
 char** FUNC_0 (int ,unsigned int,int,int ) ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static const char **FUNC_2(struct gbaudio_module_info *VAR_1,
          struct gb_audio_enumerated *VAR_2)
{
 const char **VAR_3;
 int VAR_4;
 unsigned int VAR_5;
 __u8 *VAR_6;

 VAR_5 = FUNC_1(VAR_2->items);
 VAR_3 = FUNC_0(VAR_1->dev, VAR_5, sizeof(char *), VAR_0);
 VAR_6 = VAR_2->names;

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  VAR_3[VAR_4] = (const char *)VAR_6;
  while (*VAR_6 != '\0')
   VAR_6++;
  VAR_6++;
 }

 return VAR_3;
}
