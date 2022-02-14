
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
typedef int dmtree_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct bmap*,int,scalar_t__,int ,int ) ;
 int FUNC_1 (struct bmap*,struct dmap*,int,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct bmap*,struct dmap*,int,int) ;

__attribute__((used)) static int FUNC_4(struct bmap * VAR_4, struct dmap * VAR_5, s64 VAR_6,
        int VAR_7)
{
 s8 VAR_8;
 int VAR_9 = 0, VAR_10;




 VAR_8 = VAR_5->tree.stree[VAR_3];


 VAR_9 = FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7);


 if (VAR_9 || (VAR_5->tree.stree[VAR_3] == VAR_8))
  return (VAR_9);





 if ((VAR_9 = FUNC_0(VAR_4, VAR_6, VAR_5->tree.stree[VAR_3], 0, 0))) {
  VAR_10 = (VAR_6 & (VAR_0 - 1)) >> VAR_1;






  if (VAR_5->tree.stree[VAR_10] == VAR_2)
   FUNC_2((dmtree_t *) & VAR_5->tree, VAR_10);

  FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7);
 }

 return (VAR_9);
}
