
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int bitrate; int hw_value; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_2(int VAR_3)
{
 int VAR_4;
 u8 VAR_5 = 0;

 if (FUNC_1(VAR_3))
  VAR_5 = VAR_1 << 6;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); VAR_4++) {
  if (VAR_2[VAR_4].bitrate == VAR_3)
   return VAR_5 | VAR_2[VAR_4].hw_value;
 }

 return -VAR_0;
}
