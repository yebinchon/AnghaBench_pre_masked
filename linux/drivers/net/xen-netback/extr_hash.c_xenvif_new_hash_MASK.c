
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int key; } ;
struct xenvif {TYPE_1__ hash; } ;


 int FUNC_0 (int ,int,int const*,unsigned int) ;
 int FUNC_1 (struct xenvif*,int const*,unsigned int,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static u32 FUNC_2(struct xenvif *VAR_1, const u8 *VAR_2,
      unsigned int VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_1->hash.key,
          sizeof(VAR_1->hash.key),
          VAR_2, VAR_3);

 if (VAR_0 != 0)
  FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);

 return VAR_4;
}
