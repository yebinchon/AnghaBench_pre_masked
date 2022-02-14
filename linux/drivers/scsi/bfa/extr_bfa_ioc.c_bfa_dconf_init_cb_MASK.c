
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bfa_s {int iocfc; } ;
struct bfa_dconf_mod_s {TYPE_2__* dconf; } ;
typedef scalar_t__ bfa_status_t ;
typedef int bfa_dconf_read_data_valid ;
struct TYPE_3__ {scalar_t__ signature; scalar_t__ version; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;


 struct bfa_dconf_mod_s* FUNC_0 (struct bfa_s*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct bfa_dconf_mod_s*,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_6, bfa_status_t VAR_7)
{
 struct bfa_s *VAR_8 = VAR_6;
 struct bfa_dconf_mod_s *VAR_9 = FUNC_0(VAR_8);

 if (VAR_7 == VAR_1) {
  bfa_dconf_read_data_valid(VAR_10) = VAR_2;
  if (VAR_9->dconf->hdr.signature != VAR_3)
   VAR_9->dconf->hdr.signature = VAR_3;
  if (VAR_9->dconf->hdr.version != VAR_4)
   VAR_9->dconf->hdr.version = VAR_4;
 }
 FUNC_2(VAR_9, VAR_0);
 FUNC_1(&VAR_8->iocfc, VAR_5);
}
