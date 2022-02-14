
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wsm_mib_beacon_filter_table {int num; } ;
struct wsm_beacon_filter_table_entry {int dummy; } ;
struct cw1200_common {int dummy; } ;
typedef int __le32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cw1200_common*,int ,struct wsm_mib_beacon_filter_table*,size_t) ;

__attribute__((used)) static inline int FUNC_2(struct cw1200_common *VAR_1,
           struct wsm_mib_beacon_filter_table *VAR_2)
{
 size_t VAR_3 = FUNC_0(VAR_2->num) *
       sizeof(struct wsm_beacon_filter_table_entry) +
       sizeof(__le32);

 return FUNC_1(VAR_1, VAR_0, VAR_2, VAR_3);
}
