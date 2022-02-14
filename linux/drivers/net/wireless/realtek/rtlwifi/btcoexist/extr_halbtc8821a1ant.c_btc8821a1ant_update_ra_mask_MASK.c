
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct btc_coexist {int (* btc_set ) (struct btc_coexist*,int ,scalar_t__*) ;} ;
struct TYPE_2__ {scalar_t__ cur_ra_mask; scalar_t__ pre_ra_mask; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct btc_coexist*,int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_1(struct btc_coexist *VAR_2,
     bool VAR_3, u32 VAR_4)
{
 VAR_1->cur_ra_mask = VAR_4;

 if (VAR_3 ||
     (VAR_1->pre_ra_mask != VAR_1->cur_ra_mask)) {
  VAR_2->btc_set(VAR_2, VAR_0,
       &VAR_1->cur_ra_mask);
 }
 VAR_1->pre_ra_mask = VAR_1->cur_ra_mask;
}
