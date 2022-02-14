
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xdr_stream {int dummy; } ;
struct file_lock {void* fl_end; void* fl_start; int fl_type; int fl_flags; scalar_t__ fl_pid; } ;
struct nlm_lock {int oh; void* svid; struct file_lock fl; } ;
struct nlm_res {struct nlm_lock lock; } ;
typedef scalar_t__ s32 ;
typedef scalar_t__ pid_t ;
typedef void* loff_t ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* FUNC_0 (int *) ;
 int FUNC_1 (struct xdr_stream*,int *) ;
 int FUNC_2 (struct file_lock*) ;
 int FUNC_3 (struct nlm_lock*,int ,int) ;
 scalar_t__ FUNC_4 (int) ;
 int * FUNC_5 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_6(struct xdr_stream *VAR_5, struct nlm_res *VAR_6)
{
 struct nlm_lock *VAR_7 = &VAR_6->lock;
 struct file_lock *VAR_8 = &VAR_7->fl;
 u32 VAR_9, VAR_10, VAR_11;
 int VAR_12;
 __be32 *VAR_13;
 s32 VAR_14;

 FUNC_3(VAR_7, 0, sizeof(*VAR_7));
 FUNC_2(VAR_8);

 VAR_13 = FUNC_5(VAR_5, 4 + 4);
 if (FUNC_4(VAR_13 == ((void*)0)))
  goto out_overflow;
 VAR_9 = FUNC_0(VAR_13++);
 VAR_7->svid = FUNC_0(VAR_13);
 VAR_8->fl_pid = (pid_t)VAR_7->svid;

 VAR_12 = FUNC_1(VAR_5, &VAR_7->oh);
 if (FUNC_4(VAR_12))
  goto out;

 VAR_13 = FUNC_5(VAR_5, 4 + 4);
 if (FUNC_4(VAR_13 == ((void*)0)))
  goto out_overflow;

 VAR_8->fl_flags = VAR_1;
 VAR_8->fl_type = VAR_9 != 0 ? VAR_3 : VAR_2;
 VAR_10 = FUNC_0(VAR_13++);
 VAR_11 = FUNC_0(VAR_13);
 VAR_14 = VAR_10 + VAR_11 - 1;

 VAR_8->fl_start = (loff_t)VAR_10;
 if (VAR_11 == 0 || VAR_14 < 0)
  VAR_8->fl_end = VAR_4;
 else
  VAR_8->fl_end = (loff_t)VAR_14;
 VAR_12 = 0;
out:
 return VAR_12;
out_overflow:
 return -VAR_0;
}
