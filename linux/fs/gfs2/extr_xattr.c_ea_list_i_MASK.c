
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_inode {int dummy; } ;
struct gfs2_ea_request {unsigned int er_data_len; scalar_t__* er_data; } ;
struct gfs2_ea_header {int ea_type; unsigned int ea_name_len; } ;
struct ea_list {unsigned int ei_size; struct gfs2_ea_request* ei_er; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 char* FUNC_1 (struct gfs2_ea_header*) ;


 int VAR_1 ;

 int FUNC_2 (scalar_t__*,char*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct gfs2_inode *VAR_2, struct buffer_head *VAR_3,
       struct gfs2_ea_header *VAR_4, struct gfs2_ea_header *VAR_5,
       void *VAR_6)
{
 struct ea_list *VAR_7 = VAR_6;
 struct gfs2_ea_request *VAR_8 = VAR_7->ei_er;
 unsigned int VAR_9;
 char *VAR_10;
 unsigned int VAR_11;

 if (VAR_4->ea_type == VAR_1)
  return 0;

 switch (VAR_4->ea_type) {
 case 128:
  VAR_10 = "user.";
  VAR_11 = 5;
  break;
 case 129:
  VAR_10 = "system.";
  VAR_11 = 7;
  break;
 case 130:
  VAR_10 = "security.";
  VAR_11 = 9;
  break;
 default:
  FUNC_0();
 }

 VAR_9 = VAR_11 + VAR_4->ea_name_len + 1;
 if (VAR_8->er_data_len) {
  if (VAR_7->ei_size + VAR_9 > VAR_8->er_data_len)
   return -VAR_0;

  FUNC_2(VAR_8->er_data + VAR_7->ei_size, VAR_10, VAR_11);
  FUNC_2(VAR_8->er_data + VAR_7->ei_size + VAR_11, FUNC_1(VAR_4),
         VAR_4->ea_name_len);
  VAR_8->er_data[VAR_7->ei_size + VAR_9 - 1] = 0;
 }

 VAR_7->ei_size += VAR_9;

 return 0;
}
