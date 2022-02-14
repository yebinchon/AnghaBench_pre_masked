
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nd_region {int btt_ida; int dev; int id; } ;
struct nd_namespace_common {int claim; int dev; } ;
struct device {int groups; int * type; int * parent; } ;
struct nd_btt {scalar_t__ id; unsigned long lbasize; int ndns; struct device dev; int * uuid; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,struct nd_namespace_common*,int *) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,int ,scalar_t__) ;
 int FUNC_4 (struct device*) ;
 scalar_t__ FUNC_5 (int *,int ,int ,int ) ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (struct nd_btt*) ;
 int * FUNC_8 (int *,int,int ) ;
 struct nd_btt* FUNC_9 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_10 (struct device*) ;

__attribute__((used)) static struct device *FUNC_11(struct nd_region *VAR_3,
  unsigned long VAR_4, u8 *VAR_5,
  struct nd_namespace_common *VAR_6)
{
 struct nd_btt *VAR_7;
 struct device *VAR_8;

 VAR_7 = FUNC_9(sizeof(*VAR_7), VAR_0);
 if (!VAR_7)
  return ((void*)0);

 VAR_7->id = FUNC_5(&VAR_3->btt_ida, 0, 0, VAR_0);
 if (VAR_7->id < 0)
  goto out_nd_btt;

 VAR_7->lbasize = VAR_4;
 if (VAR_5) {
  VAR_5 = FUNC_8(VAR_5, 16, VAR_0);
  if (!VAR_5)
   goto out_put_id;
 }
 VAR_7->uuid = VAR_5;
 VAR_8 = &VAR_7->dev;
 FUNC_3(VAR_8, "btt%d.%d", VAR_3->id, VAR_7->id);
 VAR_8->parent = &VAR_3->dev;
 VAR_8->type = &VAR_2;
 VAR_8->groups = VAR_1;
 FUNC_4(&VAR_7->dev);
 if (VAR_6 && !FUNC_0(&VAR_7->dev, VAR_6, &VAR_7->ndns)) {
  FUNC_1(&VAR_6->dev, "failed, already claimed by %s\n",
    FUNC_2(VAR_6->claim));
  FUNC_10(VAR_8);
  return ((void*)0);
 }
 return VAR_8;

out_put_id:
 FUNC_6(&VAR_3->btt_ida, VAR_7->id);

out_nd_btt:
 FUNC_7(VAR_7);
 return ((void*)0);
}
