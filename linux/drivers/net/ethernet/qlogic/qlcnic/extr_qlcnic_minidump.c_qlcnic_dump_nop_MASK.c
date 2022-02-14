
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int flags; } ;
struct qlcnic_dump_entry {TYPE_1__ hdr; } ;
struct qlcnic_adapter {int dummy; } ;
typedef int __le32 ;


 int VAR_0 ;

__attribute__((used)) static u32 FUNC_0(struct qlcnic_adapter *VAR_1,
      struct qlcnic_dump_entry *VAR_2, __le32 *VAR_3)
{
 VAR_2->hdr.flags |= VAR_0;
 return 0;
}
