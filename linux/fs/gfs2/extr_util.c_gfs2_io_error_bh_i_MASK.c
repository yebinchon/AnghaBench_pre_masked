
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {int sd_flags; } ;
struct buffer_head {scalar_t__ b_blocknr; } ;


 int VAR_0 ;
 int FUNC_0 (struct gfs2_sbd*,char*,unsigned long long,char const*,char*,unsigned int) ;
 int FUNC_1 (struct gfs2_sbd*,int *) ;
 int FUNC_2 (int ,int *) ;

void FUNC_3(struct gfs2_sbd *VAR_1, struct buffer_head *VAR_2,
   const char *VAR_3, char *VAR_4, unsigned int VAR_5,
   bool VAR_6)
{
 if (!FUNC_2(VAR_0, &VAR_1->sd_flags))
  FUNC_0(VAR_1,
         "fatal: I/O error\n"
         "  block = %llu\n"
         "  function = %s, file = %s, line = %u\n",
         (unsigned long long)VAR_2->b_blocknr,
         VAR_3, VAR_4, VAR_5);
 if (VAR_6)
  FUNC_1(VAR_1, ((void*)0));
}
