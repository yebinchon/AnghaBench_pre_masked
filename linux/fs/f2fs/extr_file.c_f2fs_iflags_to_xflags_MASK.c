
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int iflag; int xflag; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline u32 FUNC_1(u32 VAR_1)
{
 u32 VAR_2 = 0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++)
  if (VAR_1 & VAR_0[VAR_3].iflag)
   VAR_2 |= VAR_0[VAR_3].xflag;

 return VAR_2;
}
