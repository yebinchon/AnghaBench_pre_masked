
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct s5p_jpeg_ctx {TYPE_2__* jpeg; } ;
struct TYPE_4__ {TYPE_1__* variant; } ;
struct TYPE_3__ {scalar_t__ hw3250_compat; } ;


 int FUNC_0 (int*,unsigned int,unsigned int,unsigned int,int*,unsigned int,unsigned int,unsigned int,int ) ;

__attribute__((used)) static void FUNC_1(struct s5p_jpeg_ctx *VAR_0,
       u32 *VAR_1, unsigned int VAR_2, unsigned int VAR_3,
       unsigned int VAR_4,
       u32 *VAR_5, unsigned int VAR_6, unsigned int VAR_7,
       unsigned int VAR_8)
{
 int VAR_9, VAR_10, VAR_11, VAR_12;

 VAR_9 = *VAR_1;
 VAR_10 = *VAR_5;

 VAR_11 = 1 << VAR_4;
 VAR_12 = 1 << VAR_8;

 if (VAR_0->jpeg->variant->hw3250_compat) {







  if (VAR_11 == 4 && ((VAR_9 & 3) == 1)) {
   VAR_3 = VAR_9;
   VAR_7 = VAR_10;
  }
 }

 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, 0);

 if (*VAR_1 < VAR_9 && (*VAR_1 + VAR_11) < VAR_3)
  *VAR_1 += VAR_11;
 if (*VAR_5 < VAR_10 && (*VAR_5 + VAR_12) < VAR_7)
  *VAR_5 += VAR_12;
}
