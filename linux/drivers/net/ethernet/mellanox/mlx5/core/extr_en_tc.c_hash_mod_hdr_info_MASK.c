
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mod_hdr_key {int num_actions; int actions; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ) ;

__attribute__((used)) static inline u32 FUNC_1(struct mod_hdr_key *VAR_1)
{
 return FUNC_0(VAR_1->actions,
       VAR_1->num_actions * VAR_0, 0);
}
