
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {char* sd_fsname; } ;
struct gfs2_rgrpd {scalar_t__ rd_addr; int rd_gl; struct gfs2_sbd* rd_sbd; } ;


 int FUNC_0 (struct gfs2_sbd*,char*,unsigned long long,char const*,char*,unsigned int) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (char*,char*,char*) ;

int FUNC_3(struct gfs2_rgrpd *VAR_0, int VAR_1,
    const char *VAR_2, char *VAR_3, unsigned int VAR_4)
{
 struct gfs2_sbd *VAR_5 = VAR_0->rd_sbd;
 char VAR_6[sizeof(VAR_5->sd_fsname) + 7];
 int VAR_7;

 FUNC_2(VAR_6, "fsid=%s: ", VAR_5->sd_fsname);
 FUNC_1(((void*)0), VAR_0->rd_gl, VAR_6);
 VAR_7 = FUNC_0(VAR_5,
         "fatal: filesystem consistency error\n"
         "  RG = %llu\n"
         "  function = %s, file = %s, line = %u\n",
         (unsigned long long)VAR_0->rd_addr,
         VAR_2, VAR_3, VAR_4);
 return VAR_7;
}
