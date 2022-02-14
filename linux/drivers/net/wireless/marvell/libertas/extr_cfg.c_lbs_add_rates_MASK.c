
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int bitrate; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_1(u8 *VAR_1)
{
 size_t VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  u8 VAR_3 = VAR_0[VAR_2].bitrate / 5;
  if (VAR_3 == 0x02 || VAR_3 == 0x04 ||
      VAR_3 == 0x0b || VAR_3 == 0x16)
   VAR_3 |= 0x80;
  VAR_1[VAR_2] = VAR_3;
 }
 return FUNC_0(VAR_0);
}
