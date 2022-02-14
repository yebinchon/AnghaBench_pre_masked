
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s5k4ecgx {TYPE_1__* gpio; int supplies; } ;
struct TYPE_2__ {int level; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct s5k4ecgx*,size_t,int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct s5k4ecgx *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_3->supplies);
 if (VAR_4)
  return VAR_4;
 FUNC_2(30, 50);


 if (FUNC_1(VAR_3, VAR_2, VAR_3->gpio[VAR_2].level))
  FUNC_2(30, 50);

 if (FUNC_1(VAR_3, VAR_0, VAR_3->gpio[VAR_0].level))
  FUNC_2(30, 50);

 return 0;
}
