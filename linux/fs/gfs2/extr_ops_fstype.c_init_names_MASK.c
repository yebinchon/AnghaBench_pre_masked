
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* sb_lockproto; char* sb_locktable; } ;
struct TYPE_4__ {char* ar_lockproto; char* ar_locktable; } ;
struct gfs2_sbd {int sd_fsb2bb_shift; char* sd_proto_name; char* sd_table_name; TYPE_3__* sd_vfs; TYPE_2__ sd_sb; TYPE_1__ sd_args; } ;
struct TYPE_6__ {char* s_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gfs2_sbd*,int,int) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct gfs2_sbd *VAR_2, int VAR_3)
{
 char *VAR_4, *VAR_5;
 int VAR_6 = 0;

 VAR_4 = VAR_2->sd_args.ar_lockproto;
 VAR_5 = VAR_2->sd_args.ar_locktable;



 if (!VAR_4[0] || !VAR_5[0]) {
  VAR_6 = FUNC_0(VAR_2, VAR_1 >> VAR_2->sd_fsb2bb_shift, VAR_3);
  if (VAR_6)
   return VAR_6;

  if (!VAR_4[0])
   VAR_4 = VAR_2->sd_sb.sb_lockproto;
  if (!VAR_5[0])
   VAR_5 = VAR_2->sd_sb.sb_locktable;
 }

 if (!VAR_5[0])
  VAR_5 = VAR_2->sd_vfs->s_id;

 FUNC_2(VAR_2->sd_proto_name, VAR_4, VAR_0);
 FUNC_2(VAR_2->sd_table_name, VAR_5, VAR_0);

 VAR_5 = VAR_2->sd_table_name;
 while ((VAR_5 = FUNC_1(VAR_5, '/')))
  *VAR_5 = '_';

 return VAR_6;
}
