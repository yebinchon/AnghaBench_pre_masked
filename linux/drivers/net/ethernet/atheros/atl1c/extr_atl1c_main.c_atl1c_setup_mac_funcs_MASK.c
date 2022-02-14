
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atl1c_hw {int ctrl_flags; scalar_t__ nic_type; int link_cap_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct atl1c_hw*,int ,int *) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (struct atl1c_hw*) ;

__attribute__((used)) static int FUNC_2(struct atl1c_hw *VAR_10)
{
 u32 VAR_11;

 FUNC_1(VAR_10);
 FUNC_0(VAR_10, VAR_6, &VAR_11);

 VAR_10->ctrl_flags = VAR_3 |
    VAR_5;
 VAR_10->ctrl_flags |= VAR_1 |
     VAR_2;
 VAR_10->ctrl_flags |= VAR_0;

 if (VAR_10->nic_type == VAR_7 ||
     VAR_10->nic_type == VAR_8 ||
     VAR_10->nic_type == VAR_9)
  VAR_10->link_cap_flags |= VAR_4;
 return 0;
}
