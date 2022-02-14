
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_audio {unsigned int index; int name; int capability; } ;
struct em28xx {unsigned int* amux_map; scalar_t__ has_msp34xx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*,unsigned int,int ) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int FUNC_2(struct em28xx *VAR_2,
       const char *VAR_3,
       struct v4l2_audio *VAR_4,
       unsigned int VAR_5)
{
 unsigned int VAR_6 = VAR_2->amux_map[VAR_5];
 if (VAR_2->has_msp34xx && VAR_6 != 130)
  VAR_6 = 134;

 switch (VAR_6) {
 case 129:
  FUNC_1(VAR_4->name, "Television", sizeof(VAR_4->name));
  break;
 case 134:
  FUNC_1(VAR_4->name, "Line In", sizeof(VAR_4->name));
  break;
 case 128:
  FUNC_1(VAR_4->name, "Television alt", sizeof(VAR_4->name));
  break;
 case 131:
  FUNC_1(VAR_4->name, "Phone", sizeof(VAR_4->name));
  break;
 case 133:
  FUNC_1(VAR_4->name, "Mic", sizeof(VAR_4->name));
  break;
 case 135:
  FUNC_1(VAR_4->name, "CD", sizeof(VAR_4->name));
  break;
 case 136:
  FUNC_1(VAR_4->name, "Aux", sizeof(VAR_4->name));
  break;
 case 132:
  FUNC_1(VAR_4->name, "PCM", sizeof(VAR_4->name));
  break;
 case 130:
 default:
  return -VAR_0;
 }
 VAR_4->index = VAR_5;
 VAR_4->capability = VAR_1;

 FUNC_0("%s: audio input index %d is '%s'\n",
   VAR_3, VAR_4->index, VAR_4->name);

 return 0;
}
