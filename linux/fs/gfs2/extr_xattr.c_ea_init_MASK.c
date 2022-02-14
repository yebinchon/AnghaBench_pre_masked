
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_inode {int i_inode; } ;
struct gfs2_ea_request {int er_type; char const* er_name; size_t er_data_len; void* er_data; int er_name_len; } ;
struct TYPE_2__ {unsigned int sd_jbsize; } ;


 scalar_t__ FUNC_0 (size_t,unsigned int) ;
 unsigned int FUNC_1 (struct gfs2_ea_request*) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (struct gfs2_inode*,struct gfs2_ea_request*,unsigned int,int ,int *) ;
 int VAR_0 ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(struct gfs2_inode *VAR_1, int VAR_2, const char *VAR_3,
     const void *VAR_4, size_t VAR_5)
{
 struct gfs2_ea_request VAR_6;
 unsigned int VAR_7 = FUNC_2(&VAR_1->i_inode)->sd_jbsize;
 unsigned int VAR_8 = 1;

 VAR_6.er_type = VAR_2;
 VAR_6.er_name = VAR_3;
 VAR_6.er_name_len = FUNC_4(VAR_3);
 VAR_6.er_data = (void *)VAR_4;
 VAR_6.er_data_len = VAR_5;

 if (FUNC_1(&VAR_6) > VAR_7)
  VAR_8 += FUNC_0(VAR_6.er_data_len, VAR_7);

 return FUNC_3(VAR_1, &VAR_6, VAR_8, VAR_0, ((void*)0));
}
