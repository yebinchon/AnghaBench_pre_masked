
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int name; int len; } ;
struct dentry {TYPE_1__ d_name; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int ,int) ;
 int FUNC_1 (int ,int ) ;

int
FUNC_2(unsigned char *VAR_1, struct dentry *VAR_2)
{
 u32 VAR_3 = FUNC_1(VAR_2->d_name.len, VAR_0);

 *VAR_1++ = VAR_3;
 FUNC_0(VAR_1, VAR_2->d_name.name, VAR_3);
 return VAR_3;
}
