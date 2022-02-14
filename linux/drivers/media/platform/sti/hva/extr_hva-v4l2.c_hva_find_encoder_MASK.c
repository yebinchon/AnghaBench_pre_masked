
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct hva_enc {scalar_t__ pixelformat; scalar_t__ streamformat; } ;
struct hva_dev {unsigned int nb_of_encoders; struct hva_enc** encoders; } ;
struct hva_ctx {int dummy; } ;


 struct hva_dev* FUNC_0 (struct hva_ctx*) ;

__attribute__((used)) static const struct hva_enc *FUNC_1(struct hva_ctx *VAR_0,
           u32 VAR_1,
           u32 VAR_2)
{
 struct hva_dev *VAR_3 = FUNC_0(VAR_0);
 const struct hva_enc *VAR_4;
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3->nb_of_encoders; VAR_5++) {
  VAR_4 = VAR_3->encoders[VAR_5];
  if ((VAR_4->pixelformat == VAR_1) &&
      (VAR_4->streamformat == VAR_2))
   return VAR_4;
 }

 return ((void*)0);
}
