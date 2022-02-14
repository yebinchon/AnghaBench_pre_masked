
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_audio_infoframe {char* channels; char* channel_allocation; char* level_shift_value; scalar_t__ downmix_inhibit; int coding_type_ext; int sample_frequency; int sample_size; int coding_type; } ;
struct hdmi_any_infoframe {int dummy; } ;
struct device {int dummy; } ;


 char* FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (char const*,struct device*,struct hdmi_any_infoframe const*) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static void FUNC_6(const char *VAR_0,
         struct device *VAR_1,
         const struct hdmi_audio_infoframe *VAR_2)
{
 FUNC_4(VAR_0, VAR_1,
      (const struct hdmi_any_infoframe *)VAR_2);

 if (VAR_2->channels)
  FUNC_5("    channels: %u\n", VAR_2->channels - 1);
 else
  FUNC_5("    channels: Refer to stream header\n");
 FUNC_5("    coding type: %s\n",
   FUNC_1(VAR_2->coding_type));
 FUNC_5("    sample size: %s\n",
   FUNC_3(VAR_2->sample_size));
 FUNC_5("    sample frequency: %s\n",
   FUNC_2(VAR_2->sample_frequency));
 FUNC_5("    coding type ext: %s\n",
   FUNC_0(VAR_2->coding_type_ext));
 FUNC_5("    channel allocation: 0x%x\n",
   VAR_2->channel_allocation);
 FUNC_5("    level shift value: %u dB\n",
   VAR_2->level_shift_value);
 FUNC_5("    downmix inhibit: %s\n",
   VAR_2->downmix_inhibit ? "Yes" : "No");
}
