
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ar_errors; scalar_t__ ar_debug; } ;
struct gfs2_sbd {scalar_t__ sd_last_warning; int sd_fsname; TYPE_1__ sd_args; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (struct gfs2_sbd*,char*,char*,char const*,char*,unsigned int) ;
 int FUNC_3 (struct gfs2_sbd*,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (char*,int ,char*,int ,char const*,char*,unsigned int) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;

int FUNC_6(struct gfs2_sbd *VAR_5, char *VAR_6,
         const char *VAR_7, char *VAR_8, unsigned int VAR_9)
{
 if (FUNC_5(VAR_4,
   VAR_5->sd_last_warning +
   FUNC_3(VAR_5, VAR_3) * VAR_2))
  return -2;

 if (VAR_5->sd_args.ar_errors == VAR_1)
  FUNC_2(VAR_5, "warning: assertion \"%s\" failed at function = %s, file = %s, line = %u\n",
   VAR_6, VAR_7, VAR_8, VAR_9);

 if (VAR_5->sd_args.ar_debug)
  FUNC_0();
 else
  FUNC_1();

 if (VAR_5->sd_args.ar_errors == VAR_0)
  FUNC_4("GFS2: fsid=%s: warning: assertion \"%s\" failed\n"
        "GFS2: fsid=%s:   function = %s, file = %s, line = %u\n",
        VAR_5->sd_fsname, VAR_6,
        VAR_5->sd_fsname, VAR_7, VAR_8, VAR_9);

 VAR_5->sd_last_warning = VAR_4;

 return -1;
}
