
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct file* file; } ;
struct splice_desc {size_t len; size_t total_len; unsigned int flags; int pos; int * opos; TYPE_1__ u; } ;
struct file {int f_mode; int f_flags; } ;
typedef int loff_t ;


 long VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 long FUNC_0 (int ,struct file*,int *,size_t) ;
 long FUNC_1 (struct file*,struct splice_desc*,int ) ;
 scalar_t__ FUNC_2 (int) ;

long FUNC_3(struct file *VAR_6, loff_t *VAR_7, struct file *VAR_8,
        loff_t *VAR_9, size_t VAR_10, unsigned int VAR_11)
{
 struct splice_desc VAR_12 = {
  .len = VAR_10,
  .total_len = VAR_10,
  .flags = VAR_11,
  .pos = *VAR_7,
  .u.file = VAR_8,
  .opos = VAR_9,
 };
 long VAR_13;

 if (FUNC_2(!(VAR_8->f_mode & VAR_2)))
  return -VAR_0;

 if (FUNC_2(VAR_8->f_flags & VAR_3))
  return -VAR_1;

 VAR_13 = FUNC_0(VAR_4, VAR_8, VAR_9, VAR_10);
 if (FUNC_2(VAR_13 < 0))
  return VAR_13;

 VAR_13 = FUNC_1(VAR_6, &VAR_12, VAR_5);
 if (VAR_13 > 0)
  *VAR_7 = VAR_12.pos;

 return VAR_13;
}
