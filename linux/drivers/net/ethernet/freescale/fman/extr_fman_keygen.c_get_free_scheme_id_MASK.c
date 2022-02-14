
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct fman_keygen {TYPE_1__* schemes; } ;
struct TYPE_2__ {int used; } ;


 int VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static int FUNC_0(struct fman_keygen *VAR_2, u8 *VAR_3)
{
 u8 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  if (!VAR_2->schemes[VAR_4].used) {
   *VAR_3 = VAR_4;
   return 0;
  }

 return -VAR_0;
}
