
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct synth_settings {int serial_number; int* rom_version; int eob; int reverb; int articulation; int free_ram; int ext_dict_status; int ext_dict_loaded; int expression; int tone; int volume; int speed; int pitch; int formant_freq; int punc_level; int mode; } ;
struct spk_synth {int dummy; } ;


 int FUNC_0 (struct spk_synth*,char*) ;
 char FUNC_1 () ;

__attribute__((used)) static struct synth_settings *FUNC_2(struct spk_synth *VAR_0)
{
 u_char *VAR_1;
 static char VAR_2[sizeof(struct synth_settings) + 1];
 int VAR_3, VAR_4;
 static struct synth_settings VAR_5;

 FUNC_0(VAR_0, "\x18\x01?");
 for (VAR_3 = 0, VAR_4 = 0; VAR_4 < 50; VAR_4++) {
  VAR_2[VAR_3] = FUNC_1();
  if (VAR_3 > 2 && VAR_2[VAR_3] == 0x7f)
   break;
  if (VAR_3 < sizeof(struct synth_settings))
   VAR_3++;
 }
 VAR_1 = VAR_2;

 VAR_5.serial_number = VAR_1[0] + VAR_1[1] * 256;
 VAR_1 += 2;
 for (VAR_4 = 0; *VAR_1 != '\r'; VAR_1++) {
  VAR_5.rom_version[VAR_4] = *VAR_1;
  if (VAR_4 < sizeof(VAR_5.rom_version) - 1)
   VAR_4++;
 }
 VAR_5.rom_version[VAR_4] = 0;
 VAR_1++;
 VAR_5.mode = *VAR_1++;
 VAR_5.punc_level = *VAR_1++;
 VAR_5.formant_freq = *VAR_1++;
 VAR_5.pitch = *VAR_1++;
 VAR_5.speed = *VAR_1++;
 VAR_5.volume = *VAR_1++;
 VAR_5.tone = *VAR_1++;
 VAR_5.expression = *VAR_1++;
 VAR_5.ext_dict_loaded = *VAR_1++;
 VAR_5.ext_dict_status = *VAR_1++;
 VAR_5.free_ram = *VAR_1++;
 VAR_5.articulation = *VAR_1++;
 VAR_5.reverb = *VAR_1++;
 VAR_5.eob = *VAR_1++;
 return &VAR_5;
}
