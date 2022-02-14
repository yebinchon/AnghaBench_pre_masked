
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_inode {int dummy; } ;
struct gfs2_ea_location {struct gfs2_ea_header* el_prev; struct gfs2_ea_header* el_ea; struct buffer_head* el_bh; } ;
struct gfs2_ea_header {scalar_t__ ea_type; scalar_t__ ea_name_len; } ;
struct ea_find {scalar_t__ type; scalar_t__ namel; struct gfs2_ea_location* ef_el; int name; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct gfs2_ea_header*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct gfs2_inode *VAR_1, struct buffer_head *VAR_2,
       struct gfs2_ea_header *VAR_3, struct gfs2_ea_header *VAR_4,
       void *VAR_5)
{
 struct ea_find *VAR_6 = VAR_5;

 if (VAR_3->ea_type == VAR_0)
  return 0;

 if (VAR_3->ea_type == VAR_6->type) {
  if (VAR_3->ea_name_len == VAR_6->namel &&
      !FUNC_2(FUNC_0(VAR_3), VAR_6->name, VAR_3->ea_name_len)) {
   struct gfs2_ea_location *VAR_7 = VAR_6->ef_el;
   FUNC_1(VAR_2);
   VAR_7->el_bh = VAR_2;
   VAR_7->el_ea = VAR_3;
   VAR_7->el_prev = VAR_4;
   return 1;
  }
 }

 return 0;
}
