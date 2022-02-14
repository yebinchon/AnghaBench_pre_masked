
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct matrox_pll_cache {unsigned int valid; TYPE_1__* data; } ;
struct matrox_fb_info {int dummy; } ;
struct TYPE_3__ {unsigned int mnp_key; unsigned int mnp_value; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct matrox_fb_info *VAR_2,
      struct matrox_pll_cache *VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5;

 VAR_4 &= VAR_0;
 for (VAR_5 = 0; VAR_5 < VAR_3->valid; VAR_5++) {
  if (VAR_3->data[VAR_5].mnp_key == VAR_4) {
   unsigned int VAR_6;

   VAR_6 = VAR_3->data[VAR_5].mnp_value;
   if (VAR_5) {
    FUNC_0(VAR_3->data + 1, VAR_3->data, VAR_5 * sizeof(*VAR_3->data));
    VAR_3->data[0].mnp_key = VAR_4;
    VAR_3->data[0].mnp_value = VAR_6;
   }
   return VAR_6;
  }
 }
 return VAR_1;
}
