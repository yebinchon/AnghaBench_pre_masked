
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usb_ep {struct f_midi* driver_data; } ;
struct snd_rawmidi_substream {int dummy; } ;
struct f_midi {int out_triggered; struct snd_rawmidi_substream** out_substream; } ;


 int FUNC_0 (struct snd_rawmidi_substream*,int *,int) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static void FUNC_2(struct usb_ep *VAR_0, int VAR_1,
        uint8_t *VAR_2, int VAR_3)
{
 struct f_midi *VAR_4 = VAR_0->driver_data;
 struct snd_rawmidi_substream *VAR_5 = VAR_4->out_substream[VAR_1];

 if (!VAR_5)

  return;

 if (!FUNC_1(VAR_1, &VAR_4->out_triggered))
  return;

 FUNC_0(VAR_5, VAR_2, VAR_3);
}
