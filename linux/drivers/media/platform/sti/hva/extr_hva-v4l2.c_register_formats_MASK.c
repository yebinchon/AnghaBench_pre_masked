
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hva_dev {unsigned int nb_of_encoders; int nb_of_streamformats; int streamformats; TYPE_1__** encoders; int nb_of_pixelformats; int pixelformats; } ;
struct TYPE_2__ {int streamformat; int pixelformat; } ;


 int FUNC_0 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_1(struct hva_dev *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nb_of_encoders; VAR_1++) {
  FUNC_0(VAR_0->encoders[VAR_1]->pixelformat,
    VAR_0->pixelformats,
    &VAR_0->nb_of_pixelformats);

  FUNC_0(VAR_0->encoders[VAR_1]->streamformat,
    VAR_0->streamformats,
    &VAR_0->nb_of_streamformats);
 }
}
