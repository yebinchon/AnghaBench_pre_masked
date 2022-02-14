
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svc_fh ;
struct net {int dummy; } ;
typedef int stateid_t ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct net*) ;

__attribute__((used)) static inline __be32
FUNC_3(struct net *VAR_6, svc_fh *VAR_7, stateid_t *VAR_8, int VAR_9)
{
 if (FUNC_0(VAR_8) && (VAR_9 & VAR_2))
  return VAR_4;
 else if (FUNC_2(VAR_6)) {


  return VAR_5;
 } else if (VAR_9 & VAR_3)
  return FUNC_1(VAR_7,
    VAR_1);
 else
  return FUNC_1(VAR_7,
    VAR_0);
}
