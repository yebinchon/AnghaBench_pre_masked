
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* stree; } ;
struct dmap {TYPE_1__ tree; } ;
struct bmap {int dummy; } ;
typedef scalar_t__ s8 ;
typedef int s64 ;


 size_t VAR_0 ;
 int FUNC_0 (struct bmap*,int ,scalar_t__,int,int ) ;
 int FUNC_1 (struct bmap*,struct dmap*,int ,int) ;
 int FUNC_2 (struct bmap*,struct dmap*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct bmap * VAR_1, struct dmap * VAR_2, s64 VAR_3,
         int VAR_4)
{
 s8 VAR_5;
 int VAR_6;




 VAR_5 = VAR_2->tree.stree[VAR_0];


 FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);


 if (VAR_2->tree.stree[VAR_0] == VAR_5)
  return (0);





 if ((VAR_6 = FUNC_0(VAR_1, VAR_3, VAR_2->tree.stree[VAR_0], 1, 0)))
  FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);

 return (VAR_6);
}
