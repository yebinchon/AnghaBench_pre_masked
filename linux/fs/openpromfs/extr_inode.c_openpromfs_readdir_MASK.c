
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct property {char* name; struct property* next; int unique_id; } ;
struct TYPE_3__ {struct device_node* node; } ;
struct op_inode_info {TYPE_1__ u; } ;
struct inode {int i_ino; } ;
struct file {int dummy; } ;
struct dir_context {int pos; } ;
struct device_node {struct property* properties; struct device_node* sibling; int unique_id; int full_name; struct device_node* child; TYPE_2__* parent; } ;
struct TYPE_4__ {int unique_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct op_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct dir_context*,char*,int,int ,int ) ;
 struct inode* FUNC_2 (struct file*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_4, struct dir_context *VAR_5)
{
 struct inode *VAR_6 = FUNC_2(VAR_4);
 struct op_inode_info *VAR_7 = FUNC_0(VAR_6);
 struct device_node *VAR_8 = VAR_7->u.node;
 struct device_node *VAR_9;
 struct property *VAR_10;
 int VAR_11;

 FUNC_4(&VAR_3);

 if (VAR_5->pos == 0) {
  if (!FUNC_1(VAR_5, ".", 1, VAR_6->i_ino, VAR_0))
   goto out;
  VAR_5->pos = 1;
 }
 if (VAR_5->pos == 1) {
  if (!FUNC_1(VAR_5, "..", 2,
       (VAR_8->parent == ((void*)0) ?
        VAR_2 :
        VAR_8->parent->unique_id), VAR_0))
   goto out;
  VAR_5->pos = 2;
 }
 VAR_11 = VAR_5->pos - 2;


 VAR_9 = VAR_8->child;
 while (VAR_11 && VAR_9) {
  VAR_9 = VAR_9->sibling;
  VAR_11--;
 }
 while (VAR_9) {
  if (!FUNC_1(VAR_5,
       FUNC_3(VAR_9->full_name),
       FUNC_6(FUNC_3(VAR_9->full_name)),
       VAR_9->unique_id, VAR_0))
   goto out;

  VAR_5->pos++;
  VAR_9 = VAR_9->sibling;
 }


 VAR_10 = VAR_8->properties;
 while (VAR_11 && VAR_10) {
  VAR_10 = VAR_10->next;
  VAR_11--;
 }
 while (VAR_10) {
  if (!FUNC_1(VAR_5, VAR_10->name, FUNC_6(VAR_10->name),
       VAR_10->unique_id, VAR_1))
   goto out;

  VAR_5->pos++;
  VAR_10 = VAR_10->next;
 }

out:
 FUNC_5(&VAR_3);
 return 0;
}
