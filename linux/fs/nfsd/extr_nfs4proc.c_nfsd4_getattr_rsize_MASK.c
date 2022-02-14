
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct svc_rqst {int dummy; } ;
struct TYPE_3__ {int* ga_bmval; } ;
struct TYPE_4__ {TYPE_1__ getattr; } ;
struct nfsd4_op {TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct svc_rqst*) ;

__attribute__((used)) static inline u32 FUNC_2(struct svc_rqst *VAR_9,
          struct nfsd4_op *VAR_10)
{
 u32 *VAR_11 = VAR_10->u.getattr.ga_bmval;
 u32 VAR_12 = VAR_11[0], VAR_13 = VAR_11[1], VAR_14 = VAR_11[2];
 u32 VAR_15 = 0;

 if (VAR_12 & VAR_0)
  return FUNC_1(VAR_9);
 if (VAR_12 & VAR_2)
  return FUNC_1(VAR_9);

 if (VAR_13 & VAR_3) {
  VAR_15 += VAR_6 + 4;
  VAR_13 &= ~VAR_3;
 }
 if (VAR_13 & VAR_4) {
  VAR_15 += VAR_6 + 4;
  VAR_13 &= ~VAR_4;
 }
 if (VAR_12 & VAR_1) {
  VAR_15 += VAR_7 + 4;
  VAR_12 &= ~VAR_1;
 }
 if (VAR_14 & VAR_5) {
  VAR_15 += VAR_8 + 12;
  VAR_14 &= ~VAR_5;
 }




 VAR_15 += 16 * (FUNC_0(VAR_12) + FUNC_0(VAR_13) + FUNC_0(VAR_14));

 VAR_15 += 20;
 return VAR_15;
}
