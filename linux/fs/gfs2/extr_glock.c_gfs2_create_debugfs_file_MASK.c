
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {int debugfs_dir; int sd_table_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int,int ,struct gfs2_sbd*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_2(struct gfs2_sbd *VAR_6)
{
 VAR_6->debugfs_dir = FUNC_0(VAR_6->sd_table_name, VAR_4);

 FUNC_1("glocks", VAR_0 | VAR_1, VAR_6->debugfs_dir, VAR_6,
       &VAR_2);

 FUNC_1("glstats", VAR_0 | VAR_1, VAR_6->debugfs_dir, VAR_6,
       &VAR_3);

 FUNC_1("sbstats", VAR_0 | VAR_1, VAR_6->debugfs_dir, VAR_6,
       &VAR_5);
}
