
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct inode {scalar_t__ i_generation; } ;
struct TYPE_2__ {int nodeid; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_1, u32 *VAR_2, int *VAR_3,
      struct inode *VAR_4)
{
 int VAR_5 = VAR_4 ? 6 : 3;
 u64 VAR_6;
 u32 VAR_7;

 if (*VAR_3 < VAR_5) {
  *VAR_3 = VAR_5;
  return VAR_0;
 }

 VAR_6 = FUNC_0(VAR_1)->nodeid;
 VAR_7 = VAR_1->i_generation;

 VAR_2[0] = (u32)(VAR_6 >> 32);
 VAR_2[1] = (u32)(VAR_6 & 0xffffffff);
 VAR_2[2] = VAR_7;

 if (VAR_4) {
  VAR_6 = FUNC_0(VAR_4)->nodeid;
  VAR_7 = VAR_4->i_generation;

  VAR_2[3] = (u32)(VAR_6 >> 32);
  VAR_2[4] = (u32)(VAR_6 & 0xffffffff);
  VAR_2[5] = VAR_7;
 }

 *VAR_3 = VAR_5;
 return VAR_4 ? 0x82 : 0x81;
}
