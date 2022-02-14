
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7134_dev {int * radio_dev; int * vbi_dev; int * video_dev; } ;


 int FUNC_0 (struct saa7134_dev*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct saa7134_dev *VAR_0)
{
 FUNC_0(VAR_0);

 if (VAR_0->video_dev) {
  if (FUNC_2(VAR_0->video_dev))
   FUNC_3(VAR_0->video_dev);
  else
   FUNC_1(VAR_0->video_dev);
  VAR_0->video_dev = ((void*)0);
 }
 if (VAR_0->vbi_dev) {
  if (FUNC_2(VAR_0->vbi_dev))
   FUNC_3(VAR_0->vbi_dev);
  else
   FUNC_1(VAR_0->vbi_dev);
  VAR_0->vbi_dev = ((void*)0);
 }
 if (VAR_0->radio_dev) {
  if (FUNC_2(VAR_0->radio_dev))
   FUNC_3(VAR_0->radio_dev);
  else
   FUNC_1(VAR_0->radio_dev);
  VAR_0->radio_dev = ((void*)0);
 }
}
