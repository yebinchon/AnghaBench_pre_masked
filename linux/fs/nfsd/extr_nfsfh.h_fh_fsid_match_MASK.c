
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knfsd_fh {scalar_t__ fh_fsid_type; int fh_fsid; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static inline bool FUNC_2(struct knfsd_fh *VAR_0, struct knfsd_fh *VAR_1)
{
 if (VAR_0->fh_fsid_type != VAR_1->fh_fsid_type)
  return 0;
 if (FUNC_1(VAR_0->fh_fsid, VAR_1->fh_fsid, FUNC_0(VAR_0->fh_fsid_type)) != 0)
  return 0;
 return 1;
}
