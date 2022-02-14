
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct CodaFid {int dummy; } ;
struct TYPE_2__ {struct CodaFid c_fid; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;

__attribute__((used)) static __inline__ struct CodaFid *FUNC_1(struct inode *VAR_0)
{
 return &(FUNC_0(VAR_0)->c_fid);
}
