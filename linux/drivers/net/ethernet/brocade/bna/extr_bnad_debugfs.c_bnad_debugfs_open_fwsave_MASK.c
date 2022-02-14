
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {struct bnad* i_private; } ;
struct file {struct bnad_debug_info* private_data; } ;
struct bnad_debug_info {int buffer_len; struct bnad_debug_info* debug_buffer; } ;
struct TYPE_3__ {int ioc; } ;
struct TYPE_4__ {TYPE_1__ ioceth; } ;
struct bnad {int netdev; int bna_lock; TYPE_2__ bna; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct bnad_debug_info*,int*) ;
 int FUNC_1 (struct bnad_debug_info*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_6(struct inode *VAR_5, struct file *VAR_6)
{
 struct bnad *VAR_7 = VAR_5->i_private;
 struct bnad_debug_info *VAR_8;
 unsigned long VAR_9;
 int VAR_10;

 VAR_8 = FUNC_2(sizeof(struct bnad_debug_info), VAR_4);
 if (!VAR_8)
  return -VAR_3;

 VAR_8->buffer_len = VAR_2;

 VAR_8->debug_buffer = FUNC_2(VAR_8->buffer_len, VAR_4);
 if (!VAR_8->debug_buffer) {
  FUNC_1(VAR_8);
  VAR_8 = ((void*)0);
  return -VAR_3;
 }

 FUNC_4(&VAR_7->bna_lock, VAR_9);
 VAR_10 = FUNC_0(&VAR_7->bna.ioceth.ioc,
   VAR_8->debug_buffer,
   &VAR_8->buffer_len);
 FUNC_5(&VAR_7->bna_lock, VAR_9);
 if (VAR_10 != VAR_1 && VAR_10 != VAR_0) {
  FUNC_1(VAR_8->debug_buffer);
  VAR_8->debug_buffer = ((void*)0);
  FUNC_1(VAR_8);
  VAR_8 = ((void*)0);
  FUNC_3(VAR_7->netdev, "failed to collect fwsave\n");
  return -VAR_3;
 }

 VAR_6->private_data = VAR_8;

 return 0;
}
