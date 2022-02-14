
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ umode_t ;
struct svc_rqst {int rq_vers; } ;
struct dentry {int dummy; } ;
typedef int __be32 ;
struct TYPE_2__ {scalar_t__ i_mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct dentry*) ;
 TYPE_1__* FUNC_2 (struct dentry*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static inline __be32
FUNC_3(struct svc_rqst *VAR_8, struct dentry *VAR_9,
  umode_t VAR_10)
{
 umode_t VAR_11 = FUNC_2(VAR_9)->i_mode & VAR_2;

 if (VAR_10 == 0)
  return VAR_3;
 if (VAR_11 == VAR_10) {
  if (VAR_11 == VAR_0 && !FUNC_1(VAR_9)) {
   FUNC_0(1);
   return VAR_6;
  }
  return VAR_3;
 }




 if (VAR_8->rq_vers == 4 && VAR_11 == VAR_1)
  return VAR_7;
 if (VAR_10 == VAR_0)
  return VAR_6;
 if (VAR_11 == VAR_0)
  return VAR_5;
 return VAR_4;
}
