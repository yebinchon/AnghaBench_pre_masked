
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_namespace_common {int dummy; } ;
struct nd_btt {int dev; int uuid; int lbasize; } ;
struct btt_sb {int uuid; int external_lbasize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nd_btt*,struct nd_namespace_common*,struct btt_sb*) ;
 scalar_t__ FUNC_4 (struct nd_namespace_common*) ;

__attribute__((used)) static int FUNC_5(struct nd_btt *VAR_5,
  struct nd_namespace_common *VAR_6, struct btt_sb *VAR_7)
{
 int VAR_8;

 if (!VAR_7 || !VAR_6 || !VAR_5)
  return -VAR_0;

 if (FUNC_4(VAR_6) < VAR_4)
  return -VAR_2;

 VAR_8 = FUNC_3(VAR_5, VAR_6, VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_5->lbasize = FUNC_2(VAR_7->external_lbasize);
 VAR_5->uuid = FUNC_1(VAR_7->uuid, 16, VAR_3);
 if (!VAR_5->uuid)
  return -VAR_1;

 FUNC_0(&VAR_5->dev);

 return 0;
}
