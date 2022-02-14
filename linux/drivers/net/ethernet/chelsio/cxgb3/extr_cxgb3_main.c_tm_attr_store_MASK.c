
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_info {struct adapter* adapter; } ;
struct device {int dummy; } ;
struct adapter {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (char const*,int ,unsigned int*) ;
 struct port_info* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 size_t FUNC_5 (struct adapter*,unsigned int,int) ;
 int FUNC_6 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_3,
        const char *VAR_4, size_t VAR_5, int VAR_6)
{
 struct port_info *VAR_7 = FUNC_2(FUNC_6(VAR_3));
 struct adapter *VAR_8 = VAR_7->adapter;
 unsigned int VAR_9;
 ssize_t VAR_10;

 if (!FUNC_0(VAR_0))
  return -VAR_2;

 VAR_10 = FUNC_1(VAR_4, 0, &VAR_9);
 if (VAR_10)
  return VAR_10;
 if (VAR_9 > 10000000)
  return -VAR_1;

 FUNC_3();
 VAR_10 = FUNC_5(VAR_8, VAR_9, VAR_6);
 if (!VAR_10)
  VAR_10 = VAR_5;
 FUNC_4();
 return VAR_10;
}
