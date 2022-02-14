
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {char* sd_fsname; } ;
struct gfs2_rgrpd {int rd_flags; int rd_gl; scalar_t__ rd_addr; struct gfs2_sbd* rd_sbd; } ;


 int VAR_0 ;
 int FUNC_0 (struct gfs2_sbd*,char*,...) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (char*,char*,char*) ;

__attribute__((used)) static void FUNC_3(struct gfs2_rgrpd *VAR_1)
{
 struct gfs2_sbd *VAR_2 = VAR_1->rd_sbd;
 char VAR_3[sizeof(VAR_2->sd_fsname) + 7];

 FUNC_0(VAR_2, "rgrp %llu has an error, marking it readonly until umount\n",
  (unsigned long long)VAR_1->rd_addr);
 FUNC_0(VAR_2, "umount on all nodes and run fsck.gfs2 to fix the error\n");
 FUNC_2(VAR_3, "fsid=%s: ", VAR_2->sd_fsname);
 FUNC_1(((void*)0), VAR_1->rd_gl, VAR_3);
 VAR_1->rd_flags |= VAR_0;
}
