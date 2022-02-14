
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct mac_hw_stats {int dummy; } ;
struct mac_driver {TYPE_1__* mac_cb; } ;
struct TYPE_5__ {int offset; } ;
struct TYPE_4__ {struct mac_hw_stats hw_stats; } ;


 size_t FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct mac_hw_stats*,int ) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static void FUNC_2(void *VAR_1, u64 *VAR_2)
{
 u32 VAR_3;
 u64 *VAR_4 = VAR_2;
 struct mac_driver *VAR_5 = (struct mac_driver *)VAR_1;
 struct mac_hw_stats *VAR_6 = ((void*)0);

 VAR_6 = &VAR_5->mac_cb->hw_stats;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  VAR_4[VAR_3] = FUNC_1(VAR_6,
   VAR_0[VAR_3].offset);
 }
}
