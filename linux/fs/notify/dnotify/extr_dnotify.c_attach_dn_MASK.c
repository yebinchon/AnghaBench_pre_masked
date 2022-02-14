
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct dnotify_struct {scalar_t__ dn_owner; int dn_fd; struct dnotify_struct* dn_next; struct file* dn_filp; int dn_mask; } ;
struct dnotify_mark {struct dnotify_struct* dn; } ;
typedef scalar_t__ fl_owner_t ;
typedef int __u32 ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct dnotify_struct *VAR_1, struct dnotify_mark *VAR_2,
       fl_owner_t VAR_3, int VAR_4, struct file *VAR_5, __u32 VAR_6)
{
 struct dnotify_struct *VAR_7;

 VAR_7 = VAR_2->dn;
 while (VAR_7 != ((void*)0)) {

  if ((VAR_7->dn_owner == VAR_3) && (VAR_7->dn_filp == VAR_5)) {
   VAR_7->dn_fd = VAR_4;
   VAR_7->dn_mask |= VAR_6;
   return -VAR_0;
  }
  VAR_7 = VAR_7->dn_next;
 }

 VAR_1->dn_mask = VAR_6;
 VAR_1->dn_fd = VAR_4;
 VAR_1->dn_filp = VAR_5;
 VAR_1->dn_owner = VAR_3;
 VAR_1->dn_next = VAR_2->dn;
 VAR_2->dn = VAR_1;

 return 0;
}
