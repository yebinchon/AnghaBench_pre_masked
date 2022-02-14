
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uchar ;
struct TYPE_4__ {int max_sdtr_index; } ;
typedef TYPE_1__ ASC_DVC_VAR ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static uchar
FUNC_1(ASC_DVC_VAR *VAR_1, uchar VAR_2, uchar VAR_3)
{
 uchar VAR_4;
 uchar VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_2);
 if (VAR_5 > VAR_1->max_sdtr_index)
  return 0xFF;
 VAR_4 = (VAR_5 << 4) | (VAR_3 & VAR_0);
 return VAR_4;
}
