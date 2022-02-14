
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rawmidi_substream {int dummy; } ;
struct gmidi_in_port {scalar_t__ active; struct snd_rawmidi_substream* substream; } ;
struct f_midi {unsigned int in_ports; struct gmidi_in_port* in_ports_array; } ;


 int FUNC_0 (struct snd_rawmidi_substream*) ;

__attribute__((used)) static void FUNC_1(struct f_midi *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->in_ports; VAR_1++) {
  struct gmidi_in_port *VAR_2 = VAR_0->in_ports_array + VAR_1;
  struct snd_rawmidi_substream *VAR_3 = VAR_2->substream;

  if (VAR_2->active && VAR_3)
   FUNC_0(VAR_3);
 }
}
