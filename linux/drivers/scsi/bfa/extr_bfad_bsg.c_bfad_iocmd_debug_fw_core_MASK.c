
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_2__ {int ioc; } ;
struct bfad_s {int bfad_lock; TYPE_1__ bfa; } ;
struct bfa_bsg_debug_s {scalar_t__ bufsz; scalar_t__ offset; int status; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int *,void*,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (struct bfad_s*,scalar_t__) ;
 scalar_t__ FUNC_3 (unsigned int,int,scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int
FUNC_6(struct bfad_s *VAR_4, void *VAR_5,
   unsigned int VAR_6)
{
 struct bfa_bsg_debug_s *VAR_7 = (struct bfa_bsg_debug_s *)VAR_5;
 void *VAR_8;
 unsigned long VAR_9;
 u32 VAR_10;

 if (FUNC_3(VAR_6, sizeof(struct bfa_bsg_debug_s),
   VAR_0) != VAR_2) {
  VAR_7->status = VAR_3;
  return 0;
 }

 if (VAR_7->bufsz < VAR_0 ||
   !FUNC_0(VAR_7->bufsz, sizeof(u16)) ||
   !FUNC_0(VAR_7->offset, sizeof(u32))) {
  FUNC_2(VAR_4, VAR_0);
  VAR_7->status = VAR_1;
  goto out;
 }

 VAR_8 = (char *)VAR_7 + sizeof(struct bfa_bsg_debug_s);
 FUNC_4(&VAR_4->bfad_lock, VAR_9);
 VAR_10 = VAR_7->offset;
 VAR_7->status = FUNC_1(&VAR_4->bfa.ioc, VAR_8,
    &VAR_10, &VAR_7->bufsz);
 VAR_7->offset = VAR_10;
 FUNC_5(&VAR_4->bfad_lock, VAR_9);
out:
 return 0;
}
