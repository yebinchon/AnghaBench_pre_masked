
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
struct lm_lockstruct {int ls_first; int ls_jid; struct lm_lockops const* ls_ops; } ;
struct lm_lockops {int (* lm_mount ) (struct gfs2_sbd*,char const*) ;int * lm_tokens; } ;
struct gfs2_args {int ar_localflocks; char* ar_hostdata; } ;
struct gfs2_sbd {char* sd_proto_name; char* sd_table_name; int sd_locking_init; int sd_flags; struct gfs2_args sd_args; struct lm_lockstruct sd_lockstruct; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct gfs2_sbd*,char*,...) ;
 struct lm_lockops VAR_4 ;
 int FUNC_2 (int *,int*) ;
 int FUNC_3 (char*,int ,int *) ;
 struct lm_lockops VAR_5 ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char*,char const*) ;
 char* FUNC_6 (char**,char*) ;
 int FUNC_7 (struct gfs2_sbd*,char const*) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct gfs2_sbd *VAR_6, int VAR_7)
{
 const struct lm_lockops *VAR_8;
 struct lm_lockstruct *VAR_9 = &VAR_6->sd_lockstruct;
 struct gfs2_args *VAR_10 = &VAR_6->sd_args;
 const char *VAR_11 = VAR_6->sd_proto_name;
 const char *VAR_12 = VAR_6->sd_table_name;
 char *VAR_13, *VAR_14;
 int VAR_15;

 if (!FUNC_5("lock_nolock", VAR_11)) {
  VAR_8 = &VAR_5;
  VAR_6->sd_args.ar_localflocks = 1;




 } else {
  FUNC_4("can't find protocol %s\n", VAR_11);
  return -VAR_1;
 }

 FUNC_1(VAR_6, "Trying to join cluster \"%s\", \"%s\"\n", VAR_11, VAR_12);

 VAR_9->ls_ops = VAR_8;
 VAR_9->ls_first = 1;

 for (VAR_14 = VAR_10->ar_hostdata; (VAR_13 = FUNC_6(&VAR_14, ":")); ) {
  substring_t VAR_16[VAR_2];
  int VAR_17, VAR_18;

  if (!VAR_13 || !*VAR_13)
   continue;

  VAR_17 = FUNC_3(VAR_13, *VAR_8->lm_tokens, VAR_16);
  switch (VAR_17) {
  case 129:
   VAR_15 = FUNC_2(&VAR_16[0], &VAR_18);
   if (VAR_15 || VAR_18 < 0)
    goto hostdata_error;
   if (FUNC_8(VAR_3, &VAR_6->sd_flags))
    VAR_9->ls_jid = VAR_18;
   break;
  case 130:
  case 128:

   break;
  case 131:
   VAR_15 = FUNC_2(&VAR_16[0], &VAR_18);
   if (VAR_15 || (VAR_18 != 0 && VAR_18 != 1))
    goto hostdata_error;
   VAR_9->ls_first = VAR_18;
   break;
  case 132:
  default:
hostdata_error:
   FUNC_1(VAR_6, "unknown hostdata (%s)\n", VAR_13);
   return -VAR_0;
  }
 }

 if (VAR_8->lm_mount == ((void*)0)) {
  FUNC_1(VAR_6, "Now mounting FS...\n");
  FUNC_0(&VAR_6->sd_locking_init);
  return 0;
 }
 VAR_15 = VAR_8->lm_mount(VAR_6, VAR_12);
 if (VAR_15 == 0)
  FUNC_1(VAR_6, "Joined cluster. Now mounting FS...\n");
 FUNC_0(&VAR_6->sd_locking_init);
 return VAR_15;
}
