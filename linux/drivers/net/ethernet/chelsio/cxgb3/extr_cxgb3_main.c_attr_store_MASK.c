
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (char const*,int ,unsigned int*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 size_t FUNC_4 (struct net_device*,unsigned int) ;
 struct net_device* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_3,
     const char *VAR_4, size_t VAR_5,
     ssize_t(*VAR_6) (struct net_device *, unsigned int),
     unsigned int VAR_7, unsigned int VAR_8)
{
 ssize_t VAR_9;
 unsigned int VAR_10;

 if (!FUNC_0(VAR_0))
  return -VAR_2;

 VAR_9 = FUNC_1(VAR_4, 0, &VAR_10);
 if (VAR_9)
  return VAR_9;
 if (VAR_10 < VAR_7 || VAR_10 > VAR_8)
  return -VAR_1;

 FUNC_2();
 VAR_9 = (*VAR_6) (FUNC_5(VAR_3), VAR_10);
 if (!VAR_9)
  VAR_9 = VAR_5;
 FUNC_3();
 return VAR_9;
}
