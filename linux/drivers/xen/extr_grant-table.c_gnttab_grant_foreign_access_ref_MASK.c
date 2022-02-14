
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int grant_ref_t ;
typedef int domid_t ;
struct TYPE_2__ {int (* update_entry ) (int ,int ,unsigned long,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ,int ,unsigned long,int) ;

void FUNC_1(grant_ref_t VAR_3, domid_t VAR_4,
         unsigned long VAR_5, int VAR_6)
{
 VAR_2->update_entry(VAR_3, VAR_4, VAR_5,
      VAR_0 | (VAR_6 ? VAR_1 : 0));
}
