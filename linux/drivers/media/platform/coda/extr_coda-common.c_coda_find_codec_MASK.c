
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct coda_dev {TYPE_1__* devtype; } ;
struct coda_codec {int src_fourcc; int dst_fourcc; } ;
struct TYPE_2__ {int num_codecs; struct coda_codec* codecs; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static const struct coda_codec *FUNC_1(struct coda_dev *VAR_0,
      int VAR_1, int VAR_2)
{
 const struct coda_codec *VAR_3 = VAR_0->devtype->codecs;
 int VAR_4 = VAR_0->devtype->num_codecs;
 int VAR_5;

 VAR_1 = FUNC_0(VAR_1);
 VAR_2 = FUNC_0(VAR_2);
 if (VAR_1 == VAR_2)
  return ((void*)0);

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  if (VAR_3[VAR_5].src_fourcc == VAR_1 &&
      VAR_3[VAR_5].dst_fourcc == VAR_2)
   break;
 }

 if (VAR_5 == VAR_4)
  return ((void*)0);

 return &VAR_3[VAR_5];
}
