
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int new_master; } ;
struct dlm_ctxt {TYPE_1__ reco; int name; int spinlock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct dlm_ctxt *VAR_0,
           u8 VAR_1)
{
 FUNC_0(&VAR_0->spinlock);
 FUNC_1(0, "%s: changing new_master from %u to %u\n",
      VAR_0->name, VAR_0->reco.new_master, VAR_1);
 VAR_0->reco.new_master = VAR_1;
}
