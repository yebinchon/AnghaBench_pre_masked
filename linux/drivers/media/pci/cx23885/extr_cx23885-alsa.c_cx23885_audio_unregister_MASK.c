
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx23885_dev {struct cx23885_audio_dev* audio_dev; } ;
struct cx23885_audio_dev {int card; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct cx23885_dev *VAR_0)
{
 struct cx23885_audio_dev *VAR_1 = VAR_0->audio_dev;

 FUNC_0(VAR_1->card);
}
