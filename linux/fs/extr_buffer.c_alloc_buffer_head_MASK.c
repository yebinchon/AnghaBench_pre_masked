
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct buffer_head {int b_assoc_buffers; } ;
typedef int gfp_t ;
struct TYPE_2__ {int nr; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 struct buffer_head* FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;

struct buffer_head *FUNC_6(gfp_t VAR_2)
{
 struct buffer_head *VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (VAR_3) {
  FUNC_0(&VAR_3->b_assoc_buffers);
  FUNC_3();
  FUNC_1(VAR_0.nr);
  FUNC_5();
  FUNC_4();
 }
 return VAR_3;
}
