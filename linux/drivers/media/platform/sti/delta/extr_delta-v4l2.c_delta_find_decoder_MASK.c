
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct delta_dev {unsigned int nb_of_decoders; struct delta_dec** decoders; } ;
struct delta_dec {scalar_t__ pixelformat; scalar_t__ streamformat; } ;
struct delta_ctx {struct delta_dev* dev; } ;



__attribute__((used)) static const struct delta_dec *FUNC_0(struct delta_ctx *VAR_0,
        u32 VAR_1,
        u32 VAR_2)
{
 struct delta_dev *VAR_3 = VAR_0->dev;
 const struct delta_dec *VAR_4;
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3->nb_of_decoders; VAR_5++) {
  VAR_4 = VAR_3->decoders[VAR_5];
  if ((VAR_4->pixelformat == VAR_2) &&
      (VAR_4->streamformat == VAR_1))
   return VAR_4;
 }

 return ((void*)0);
}
