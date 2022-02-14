
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct b53_arl_entry {int port; int is_valid; int is_age; int is_static; int vid; int mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct b53_arl_entry*,int ,int) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static inline void FUNC_2(struct b53_arl_entry *VAR_5,
        u64 VAR_6, u32 VAR_7)
{
 FUNC_0(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->port = VAR_7 & VAR_1;
 VAR_5->is_valid = !!(VAR_7 & VAR_3);
 VAR_5->is_age = !!(VAR_7 & VAR_0);
 VAR_5->is_static = !!(VAR_7 & VAR_2);
 FUNC_1(VAR_6, VAR_5->mac);
 VAR_5->vid = VAR_6 >> VAR_4;
}
