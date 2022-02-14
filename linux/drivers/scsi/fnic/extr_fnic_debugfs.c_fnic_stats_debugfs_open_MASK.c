
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stats_debug_info {int buf_size; int buffer_len; scalar_t__ debug_buffer; } ;
struct inode {struct fnic* i_private; } ;
struct fnic_stats {int dummy; } ;
struct fnic {struct fnic_stats fnic_stats; } ;
struct file {struct stats_debug_info* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct stats_debug_info*,struct fnic_stats*) ;
 int FUNC_1 (struct stats_debug_info*) ;
 struct stats_debug_info* FUNC_2 (int,int ) ;
 int FUNC_3 (void*,int ,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_3,
     struct file *VAR_4)
{
 struct fnic *VAR_5 = VAR_3->i_private;
 struct fnic_stats *VAR_6 = &VAR_5->fnic_stats;
 struct stats_debug_info *VAR_7;
 int VAR_8 = 2 * VAR_2;

 VAR_7 = FUNC_2(sizeof(struct stats_debug_info), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->debug_buffer = FUNC_4(VAR_8);
 if (!VAR_7->debug_buffer) {
  FUNC_1(VAR_7);
  return -VAR_0;
 }

 VAR_7->buf_size = VAR_8;
 FUNC_3((void *)VAR_7->debug_buffer, 0, VAR_8);
 VAR_7->buffer_len = FUNC_0(VAR_7, VAR_6);

 VAR_4->private_data = VAR_7;

 return 0;
}
