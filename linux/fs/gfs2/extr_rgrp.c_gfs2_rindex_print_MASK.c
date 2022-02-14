
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {int dummy; } ;
struct gfs2_rgrpd {unsigned long long rd_length; unsigned long long rd_data; unsigned long long rd_bitbytes; scalar_t__ rd_data0; scalar_t__ rd_addr; struct gfs2_sbd* rd_sbd; } ;


 int FUNC_0 (struct gfs2_sbd*,char*,unsigned long long) ;

__attribute__((used)) static void FUNC_1(const struct gfs2_rgrpd *VAR_0)
{
 struct gfs2_sbd *VAR_1 = VAR_0->rd_sbd;

 FUNC_0(VAR_1, "ri_addr = %llu\n", (unsigned long long)VAR_0->rd_addr);
 FUNC_0(VAR_1, "ri_length = %u\n", VAR_0->rd_length);
 FUNC_0(VAR_1, "ri_data0 = %llu\n", (unsigned long long)VAR_0->rd_data0);
 FUNC_0(VAR_1, "ri_data = %u\n", VAR_0->rd_data);
 FUNC_0(VAR_1, "ri_bitbytes = %u\n", VAR_0->rd_bitbytes);
}
