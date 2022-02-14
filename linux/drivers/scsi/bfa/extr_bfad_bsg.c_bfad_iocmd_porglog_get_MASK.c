
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bfad_s {int plog_buf; } ;
struct bfa_plog_s {int dummy; } ;
struct bfa_bsg_debug_s {int bufsz; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bfad_s*,int) ;
 int FUNC_1 (void*,int *,int) ;

int
FUNC_2(struct bfad_s *VAR_2, void *VAR_3)
{
 struct bfa_bsg_debug_s *VAR_4 = (struct bfa_bsg_debug_s *)VAR_3;
 void *VAR_5;

 if (VAR_4->bufsz < sizeof(struct bfa_plog_s)) {
  FUNC_0(VAR_2, sizeof(struct bfa_plog_s));
  VAR_4->status = VAR_0;
  goto out;
 }

 VAR_4->status = VAR_1;
 VAR_5 = (char *)VAR_4 + sizeof(struct bfa_bsg_debug_s);
 FUNC_1(VAR_5, (u8 *) &VAR_2->plog_buf, sizeof(struct bfa_plog_s));
out:
 return 0;
}
