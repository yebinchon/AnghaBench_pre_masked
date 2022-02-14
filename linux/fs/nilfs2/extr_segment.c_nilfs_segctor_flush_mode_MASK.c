
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_sc_info {int sc_flush_request; scalar_t__ sc_mjcp_freq; scalar_t__ sc_lseg_stime; int sc_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct nilfs_sc_info *VAR_7)
{
 if (!FUNC_0(VAR_2, &VAR_7->sc_flags) ||
     FUNC_1(VAR_6, VAR_7->sc_lseg_stime + VAR_7->sc_mjcp_freq)) {
  if (!(VAR_7->sc_flush_request & ~VAR_1))
   return VAR_4;
  else if (!(VAR_7->sc_flush_request & ~VAR_0))
   return VAR_3;
 }
 return VAR_5;
}
