
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int size; size_t mapping_sel; int * mapping; } ;
struct xenvif {TYPE_1__ hash; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;

u32 FUNC_1(struct xenvif *VAR_3, u32 VAR_4)
{
 if (VAR_4 > VAR_0)
  return VAR_1;

 VAR_3->hash.size = VAR_4;
 FUNC_0(VAR_3->hash.mapping[VAR_3->hash.mapping_sel], 0,
        sizeof(u32) * VAR_4);

 return VAR_2;
}
