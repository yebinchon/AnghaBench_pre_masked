
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct inode {int i_sb; } ;
typedef int hash ;
struct TYPE_2__ {int uuid_hash; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;

__attribute__((used)) static u32 FUNC_1(struct inode *VAR_1,
     const char *VAR_2,
     int VAR_3)
{

 u32 VAR_4 = FUNC_0(VAR_1->i_sb)->uuid_hash;
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_4 = (VAR_4 << VAR_0) ^
         (VAR_4 >> (8*sizeof(VAR_4) - VAR_0)) ^
         *VAR_2++;
 }

 return VAR_4;
}
