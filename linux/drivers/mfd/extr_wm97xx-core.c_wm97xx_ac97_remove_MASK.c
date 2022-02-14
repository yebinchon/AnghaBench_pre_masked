
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm97xx_priv {int ac97; } ;
struct ac97_codec_device {int dummy; } ;


 struct wm97xx_priv* FUNC_0 (struct ac97_codec_device*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ac97_codec_device *VAR_0)
{
 struct wm97xx_priv *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->ac97);

 return 0;
}
