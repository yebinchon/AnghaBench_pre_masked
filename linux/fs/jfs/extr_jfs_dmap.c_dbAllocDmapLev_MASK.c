
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* stree; } ;
struct dmap {int * wmap; TYPE_1__ tree; int start; } ;
struct bmap {int dummy; } ;
typedef scalar_t__ s64 ;
typedef int dmtree_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bmap*,struct dmap*,scalar_t__,int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int *,int,int*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct bmap * VAR_5,
        struct dmap * VAR_6, int VAR_7, int VAR_8, s64 * VAR_9)
{
 s64 VAR_10;
 int VAR_11, VAR_12;


 FUNC_0(VAR_8 <= VAR_2);





 if (FUNC_3((dmtree_t *) & VAR_6->tree, VAR_8, &VAR_11))
  return -VAR_1;




 VAR_10 = FUNC_5(VAR_6->start) + (VAR_11 << VAR_3);





 if (VAR_6->tree.stree[VAR_11 + VAR_4] < VAR_0)
  VAR_10 += FUNC_2(FUNC_4(VAR_6->wmap[VAR_11]), VAR_8);


 if ((VAR_12 = FUNC_1(VAR_5, VAR_6, VAR_10, VAR_7)) == 0)
  *VAR_9 = VAR_10;

 return (VAR_12);
}
