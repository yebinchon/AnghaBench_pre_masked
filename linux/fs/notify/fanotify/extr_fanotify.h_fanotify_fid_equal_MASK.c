
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* val; } ;
struct fanotify_fid {TYPE_1__ fsid; } ;


 int FUNC_0 (struct fanotify_fid*,unsigned int) ;
 int FUNC_1 (int ,int ,unsigned int) ;

__attribute__((used)) static inline bool FUNC_2(struct fanotify_fid *VAR_0,
          struct fanotify_fid *VAR_1,
          unsigned int VAR_2)
{
 return VAR_0->fsid.val[0] == VAR_1->fsid.val[0] &&
  VAR_0->fsid.val[1] == VAR_1->fsid.val[1] &&
  !FUNC_1(FUNC_0(VAR_0, VAR_2),
   FUNC_0(VAR_1, VAR_2), VAR_2);
}
