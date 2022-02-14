
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,char const*,int,int,unsigned char const*) ;

__attribute__((used)) static inline void FUNC_1(struct device *VAR_0, const char *VAR_1,
      int VAR_2, const unsigned char *VAR_3)
{
 FUNC_0(VAR_0, "%s - length = %d, data = %*ph\n",
  VAR_1, VAR_2, VAR_2, VAR_3);
}
