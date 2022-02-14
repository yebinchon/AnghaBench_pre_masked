
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_3__ {char* desc; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (char*,int,char*) ;

__attribute__((used)) static void FUNC_2(u32 VAR_3, u8 *VAR_4)
{
 char *VAR_5 = (char *)VAR_4;
 u32 VAR_6;

 if (VAR_3 != VAR_1)
  return;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); VAR_6++) {
  FUNC_1(VAR_5, VAR_0, VAR_2[VAR_6].desc);
  VAR_5 = VAR_5 + VAR_0;
 }
}
