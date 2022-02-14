
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct ch_filter_specification {int dummy; } ;
struct TYPE_3__ {scalar_t__ field; int offset; scalar_t__ size; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__*,int*,scalar_t__) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_2(struct ch_filter_specification *VAR_1, u32 VAR_2, u32 VAR_3,
     u8 VAR_4)
{
 u32 VAR_5 = VAR_2 & ~VAR_3;
 u32 VAR_6 = 0;
 u8 VAR_7 = 1;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_0); VAR_8++) {
  if (VAR_0[VAR_8].field == VAR_4) {
   VAR_6 = VAR_0[VAR_8].offset;
   VAR_7 = VAR_0[VAR_8].size;
   break;
  }
 }
 FUNC_1((u8 *)VAR_1 + VAR_6, &VAR_5, VAR_7);
}
