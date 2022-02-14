
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct inode {scalar_t__ i_private; } ;
struct file {TYPE_1__* private_data; } ;
struct TYPE_7__ {int buffer_len; void* buffer; } ;
typedef TYPE_1__ fnic_dbgfs_t ;
struct TYPE_8__ {scalar_t__ fnic_trace; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int,int) ;
 TYPE_6__* VAR_3 ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int,int ) ;
 int FUNC_5 (void*,int ,int) ;
 int VAR_5 ;
 void* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_6,
      struct file *VAR_7)
{
 fnic_dbgfs_t *VAR_8;
 u8 *VAR_9;
 VAR_9 = (u8 *)VAR_6->i_private;
 VAR_8 = FUNC_4(sizeof(fnic_dbgfs_t), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 if (*VAR_9 == VAR_3->fnic_trace) {
  VAR_8->buffer = FUNC_6(FUNC_0(3, VAR_5,
          VAR_2));
  if (!VAR_8->buffer) {
   FUNC_3(VAR_8);
   return -VAR_0;
  }
  FUNC_5((void *)VAR_8->buffer, 0,
  3 * (VAR_5 * VAR_2));
  VAR_8->buffer_len = FUNC_2(VAR_8);
 } else {
  VAR_8->buffer =
   FUNC_6(FUNC_0(3, VAR_4,
         VAR_2));
  if (!VAR_8->buffer) {
   FUNC_3(VAR_8);
   return -VAR_0;
  }
  FUNC_5((void *)VAR_8->buffer, 0,
   3 * (VAR_4 * VAR_2));
  VAR_8->buffer_len =
   FUNC_1(VAR_8, *VAR_9);
 }
 VAR_7->private_data = VAR_8;

 return 0;
}
