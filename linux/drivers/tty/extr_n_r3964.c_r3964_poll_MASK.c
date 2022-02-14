
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int read_wait; struct r3964_info* disc_data; } ;
struct r3964_message {int dummy; } ;
struct r3964_info {int lock; } ;
struct r3964_client_info {struct r3964_message* first_msg; } ;
struct poll_table_struct {int dummy; } ;
struct file {int dummy; } ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 struct r3964_client_info* FUNC_1 (struct r3964_info*,int ) ;
 int FUNC_2 (struct file*,int *,struct poll_table_struct*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static __poll_t FUNC_6(struct tty_struct *VAR_5, struct file *VAR_6,
   struct poll_table_struct *VAR_7)
{
 struct r3964_info *VAR_8 = VAR_5->disc_data;
 struct r3964_client_info *VAR_9;
 struct r3964_message *VAR_10 = ((void*)0);
 unsigned long VAR_11;
 __poll_t VAR_12 = VAR_2;

 FUNC_0("POLL");

 VAR_9 = FUNC_1(VAR_8, FUNC_5(VAR_4));
 if (VAR_9) {
  FUNC_2(VAR_6, &VAR_5->read_wait, VAR_7);
  FUNC_3(&VAR_8->lock, VAR_11);
  VAR_10 = VAR_9->first_msg;
  FUNC_4(&VAR_8->lock, VAR_11);
  if (VAR_10)
   VAR_12 |= VAR_1 | VAR_3;
 } else {
  VAR_12 = -VAR_0;
 }
 return VAR_12;
}
