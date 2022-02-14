
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct coda_dev {TYPE_1__* devtype; } ;
struct coda_codec {unsigned int max_w; unsigned int max_h; } ;
struct TYPE_2__ {int num_codecs; struct coda_codec* codecs; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct coda_dev *VAR_0,
        const struct coda_codec *VAR_1,
        int *VAR_2, int *VAR_3)
{
 const struct coda_codec *VAR_4 = VAR_0->devtype->codecs;
 int VAR_5 = VAR_0->devtype->num_codecs;
 unsigned int VAR_6, VAR_7;
 int VAR_8;

 if (VAR_1) {
  VAR_6 = VAR_1->max_w;
  VAR_7 = VAR_1->max_h;
 } else {
  for (VAR_8 = 0, VAR_6 = 0, VAR_7 = 0; VAR_8 < VAR_5; VAR_8++) {
   VAR_6 = FUNC_0(VAR_6, VAR_4[VAR_8].max_w);
   VAR_7 = FUNC_0(VAR_7, VAR_4[VAR_8].max_h);
  }
 }

 if (VAR_2)
  *VAR_2 = VAR_6;
 if (VAR_3)
  *VAR_3 = VAR_7;
}
