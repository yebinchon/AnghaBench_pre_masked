
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct dentry {TYPE_1__ d_name; } ;


 unsigned char* FUNC_0 (int ) ;
 int FUNC_1 (unsigned char const*,unsigned char const*,unsigned int) ;

__attribute__((used)) static inline int FUNC_2(const struct dentry *VAR_0, const unsigned char *VAR_1, unsigned VAR_2)
{
 const unsigned char *VAR_3 = FUNC_0(VAR_0->d_name.name);

 return FUNC_1(VAR_3, VAR_1, VAR_2);
}
