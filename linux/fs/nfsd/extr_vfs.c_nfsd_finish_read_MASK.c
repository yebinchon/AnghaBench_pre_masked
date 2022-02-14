
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct svc_rqst {int dummy; } ;
struct svc_fh {int dummy; } ;
struct file {int dummy; } ;
typedef unsigned long ssize_t ;
typedef int loff_t ;
typedef int __be32 ;
struct TYPE_2__ {unsigned long io_read; } ;


 int FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*,int ,unsigned long,unsigned long) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct svc_rqst*,struct svc_fh*,int ,unsigned long) ;
 int FUNC_4 (struct svc_rqst*,struct svc_fh*,int ,unsigned long) ;

__attribute__((used)) static __be32 FUNC_5(struct svc_rqst *VAR_1, struct svc_fh *VAR_2,
          struct file *VAR_3, loff_t VAR_4,
          unsigned long *VAR_5, u32 *VAR_6, ssize_t VAR_7)
{
 if (VAR_7 >= 0) {
  VAR_0.io_read += VAR_7;
  *VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_7, *VAR_5);
  *VAR_5 = VAR_7;
  FUNC_0(VAR_3);
  FUNC_4(VAR_1, VAR_2, VAR_4, *VAR_5);
  return 0;
 } else {
  FUNC_3(VAR_1, VAR_2, VAR_4, VAR_7);
  return FUNC_2(VAR_7);
 }
}
