
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int fh_version; int fh_fsid_type; } ;
struct svc_fh {int fh_maxsize; TYPE_1__ fh_handle; struct svc_export* fh_export; } ;
struct svc_export {int ex_flags; scalar_t__ ex_uuid; } ;
struct TYPE_4__ {int s_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* FUNC_0 (struct svc_export*) ;
 int FUNC_1 (int,struct svc_export*) ;
 scalar_t__ FUNC_2 (struct svc_export*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct svc_fh *VAR_8, struct svc_export *VAR_9, struct svc_fh *VAR_10)
{
 u8 VAR_11;
 u8 VAR_12;
retry:
 VAR_11 = 1;
 if (VAR_10 && VAR_10->fh_export == VAR_9) {
  VAR_11 = VAR_10->fh_handle.fh_version;
  VAR_12 = VAR_10->fh_handle.fh_fsid_type;

  VAR_10 = ((void*)0);

  switch (VAR_11) {
  case 0xca:
   VAR_12 = VAR_0;
   break;
  case 1:
   break;
  default:
   goto retry;
  }







  if (!FUNC_1(VAR_12, VAR_9))
   goto retry;
 } else if (VAR_9->ex_flags & VAR_7) {
  VAR_12 = VAR_2;
 } else if (VAR_9->ex_uuid) {
  if (VAR_8->fh_maxsize >= 64) {
   if (FUNC_2(VAR_9))
    VAR_12 = VAR_3;
   else
    VAR_12 = VAR_4;
  } else {
   if (FUNC_2(VAR_9))
    VAR_12 = VAR_6;
   else
    VAR_12 = VAR_5;
  }
 } else if (!FUNC_3(FUNC_0(VAR_9)->s_dev))

  VAR_12 = VAR_1;
 else
  VAR_12 = VAR_0;
 VAR_8->fh_handle.fh_version = VAR_11;
 if (VAR_11)
  VAR_8->fh_handle.fh_fsid_type = VAR_12;
}
