
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_pgio_header {scalar_t__ error; int flags; } ;
struct nfs_direct_req {scalar_t__ max_count; scalar_t__ count; scalar_t__ error; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static void
FUNC_1(struct nfs_direct_req *VAR_2,
       const struct nfs_pgio_header *VAR_3,
       ssize_t VAR_4)
{
 if (!(FUNC_0(VAR_1, &VAR_3->flags) ||
       FUNC_0(VAR_0, &VAR_3->flags)))
  return;
 if (VAR_2->max_count >= VAR_4) {
  VAR_2->max_count = VAR_4;
  if (VAR_2->count > VAR_4)
   VAR_2->count = VAR_4;

  if (FUNC_0(VAR_1, &VAR_3->flags))
   VAR_2->error = VAR_3->error;
  else
   VAR_2->error = 0;
 }
}
