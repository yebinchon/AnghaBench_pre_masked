
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bttv {int has_radio_tuner; int audio_input; } ;


 int VAR_0 ;
 int FUNC_0 (struct bttv*,int ) ;
 int FUNC_1 (struct bttv*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct bttv *VAR_3)
{

 if (!VAR_3->has_radio_tuner) {
  VAR_3->has_radio_tuner = 1;
  FUNC_1(VAR_3, VAR_2, VAR_1);
  VAR_3->audio_input = VAR_0;
  FUNC_0(VAR_3, VAR_3->audio_input);
 }
}
