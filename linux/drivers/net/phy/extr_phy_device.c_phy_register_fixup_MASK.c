
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct phy_fixup {int (* run ) (struct phy_device*) ;int list; void* phy_uid_mask; void* phy_uid; int bus_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct phy_fixup* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,char const*,int) ;

int FUNC_5(const char *VAR_4, u32 VAR_5, u32 VAR_6,
         int (*VAR_7)(struct phy_device *))
{
 struct phy_fixup *VAR_8 = FUNC_0(sizeof(*VAR_8), VAR_1);

 if (!VAR_8)
  return -VAR_0;

 FUNC_4(VAR_8->bus_id, VAR_4, sizeof(VAR_8->bus_id));
 VAR_8->phy_uid = VAR_5;
 VAR_8->phy_uid_mask = VAR_6;
 VAR_8->run = VAR_7;

 FUNC_2(&VAR_3);
 FUNC_1(&VAR_8->list, &VAR_2);
 FUNC_3(&VAR_3);

 return 0;
}
