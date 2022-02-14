
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt {int rss_hash_cfg; int hwrm_spec_code; int flags; } ;


 scalar_t__ FUNC_0 (struct bnxt*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_1(struct bnxt *VAR_7)
{
 VAR_7->flags &= ~VAR_0;
 VAR_7->rss_hash_cfg = VAR_1 |
      VAR_3 |
      VAR_2 |
      VAR_4;
 if (FUNC_0(VAR_7) && VAR_7->hwrm_spec_code >= 0x10501) {
  VAR_7->flags |= VAR_0;
  VAR_7->rss_hash_cfg |= VAR_5 |
        VAR_6;
 }
}
