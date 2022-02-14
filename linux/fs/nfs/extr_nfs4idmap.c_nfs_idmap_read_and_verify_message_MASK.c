
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int dummy; } ;
struct idmap_msg {scalar_t__ im_type; int im_conv; char* im_name; int im_id; } ;
typedef int id_str ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (struct key*,struct key*,char*,size_t) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*,char*) ;
 size_t FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct idmap_msg *VAR_3,
  struct idmap_msg *VAR_4,
  struct key *VAR_5, struct key *VAR_6)
{
 char VAR_7[VAR_2];
 size_t VAR_8;
 int VAR_9 = -VAR_1;


 if (VAR_4->im_type != VAR_3->im_type || VAR_4->im_conv != VAR_3->im_conv)
  goto out;
 switch (VAR_3->im_conv) {
 case 128:
  if (FUNC_2(VAR_4->im_name, VAR_3->im_name) != 0)
   break;

  VAR_8 = 1 + FUNC_1(VAR_3->im_id, VAR_7,
          sizeof(VAR_7));
  VAR_9 = FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8);
  break;
 case 129:
  if (VAR_4->im_id != VAR_3->im_id)
   break;
  VAR_8 = FUNC_3(VAR_3->im_name);
  VAR_9 = FUNC_0(VAR_5, VAR_6, VAR_3->im_name, VAR_8);
  break;
 default:
  VAR_9 = -VAR_0;
 }
out:
 return VAR_9;
}
