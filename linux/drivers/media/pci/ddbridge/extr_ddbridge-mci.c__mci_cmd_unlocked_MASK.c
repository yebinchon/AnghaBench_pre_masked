
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mci {int nr; TYPE_1__* base; } ;
struct ddb_link {int dummy; } ;
struct TYPE_2__ {int dev; int completion; struct ddb_link* link; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct ddb_link*,scalar_t__) ;
 int FUNC_1 (struct ddb_link*,int,scalar_t__) ;
 int FUNC_2 (int ,char*,int ) ;
 unsigned long FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(struct mci *VAR_8,
        u32 *VAR_9, u32 VAR_10,
        u32 *VAR_11, u32 VAR_12)
{
 struct ddb_link *VAR_13 = VAR_8->base->link;
 u32 VAR_14, VAR_15;
 unsigned long VAR_16;

 VAR_15 = FUNC_0(VAR_13, VAR_3);
 if (VAR_15 & (VAR_5 | VAR_6))
  return -VAR_0;
 if (VAR_9 && VAR_10)
  for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++)
   FUNC_1(VAR_13, VAR_9[VAR_14], VAR_2 + VAR_14 * 4);
 VAR_15 |= (VAR_6 | VAR_4);
 FUNC_1(VAR_13, VAR_15, VAR_3);

 VAR_16 = FUNC_3(&VAR_8->base->completion, VAR_1);
 if (VAR_16 == 0) {
  FUNC_2(VAR_8->base->dev, "MCI-%d: MCI timeout\n", VAR_8->nr);
  return -VAR_0;
 }
 if (VAR_11 && VAR_12)
  for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14++)
   VAR_11[VAR_14] = FUNC_0(VAR_13, VAR_7 + VAR_14 * 4);
 return 0;
}
