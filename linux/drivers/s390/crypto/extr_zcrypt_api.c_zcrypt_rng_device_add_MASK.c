
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ quality; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_5(void)
{
 int VAR_8 = 0;

 FUNC_3(&VAR_7);
 if (VAR_6 == 0) {
  VAR_3 = (u32 *) FUNC_1(VAR_1);
  if (!VAR_3) {
   VAR_8 = -VAR_0;
   goto out;
  }
  VAR_4 = 0;
  if (!VAR_2)
   VAR_5.quality = 0;
  VAR_8 = FUNC_2(&VAR_5);
  if (VAR_8)
   goto out_free;
  VAR_6 = 1;
 } else
  VAR_6++;
 FUNC_4(&VAR_7);
 return 0;

out_free:
 FUNC_0((unsigned long) VAR_3);
out:
 FUNC_4(&VAR_7);
 return VAR_8;
}
