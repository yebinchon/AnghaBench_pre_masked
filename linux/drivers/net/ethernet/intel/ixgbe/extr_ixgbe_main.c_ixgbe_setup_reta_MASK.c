
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct ixgbe_adapter {int flags; int* rss_indir_tbl; TYPE_1__* ring_feature; } ;
struct TYPE_2__ {int indices; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct ixgbe_adapter*) ;
 int FUNC_1 (struct ixgbe_adapter*) ;
 int FUNC_2 (struct ixgbe_adapter*) ;
 int FUNC_3 (int*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct ixgbe_adapter *VAR_2)
{
 u32 VAR_3, VAR_4;
 u32 VAR_5 = FUNC_0(VAR_2);
 u16 VAR_6 = VAR_2->ring_feature[VAR_1].indices;





 if ((VAR_2->flags & VAR_0) && (VAR_6 < 4))
  VAR_6 = 4;


 FUNC_1(VAR_2);


 FUNC_3(VAR_2->rss_indir_tbl, 0, sizeof(VAR_2->rss_indir_tbl));

 for (VAR_3 = 0, VAR_4 = 0; VAR_3 < VAR_5; VAR_3++, VAR_4++) {
  if (VAR_4 == VAR_6)
   VAR_4 = 0;

  VAR_2->rss_indir_tbl[VAR_3] = VAR_4;
 }

 FUNC_2(VAR_2);
}
