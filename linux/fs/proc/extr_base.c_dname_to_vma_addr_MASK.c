
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; } ;
struct dentry {TYPE_1__ d_name; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (char const*,int,unsigned long long*) ;

__attribute__((used)) static int FUNC_1(struct dentry *VAR_2,
        unsigned long *VAR_3, unsigned long *VAR_4)
{
 const char *VAR_5 = VAR_2->d_name.name;
 unsigned long long VAR_6, VAR_7;
 unsigned int VAR_8;

 if (VAR_5[0] == '0' && VAR_5[1] != '-')
  return -VAR_0;
 VAR_8 = FUNC_0(VAR_5, 16, &VAR_6);
 if (VAR_8 & VAR_1)
  return -VAR_0;
 if (VAR_6 != (unsigned long)VAR_6)
  return -VAR_0;
 VAR_5 += VAR_8;

 if (*VAR_5 != '-')
  return -VAR_0;
 VAR_5++;

 if (VAR_5[0] == '0' && VAR_5[1])
  return -VAR_0;
 VAR_8 = FUNC_0(VAR_5, 16, &VAR_7);
 if (VAR_8 & VAR_1)
  return -VAR_0;
 if (VAR_7 != (unsigned long)VAR_7)
  return -VAR_0;
 VAR_5 += VAR_8;

 if (*VAR_5 != '\0')
  return -VAR_0;

 *VAR_3 = VAR_6;
 *VAR_4 = VAR_7;

 return 0;
}
