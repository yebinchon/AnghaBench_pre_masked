
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct niu {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,unsigned long long) ;
 int FUNC_1 (struct niu*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct niu *VAR_2)
{
 u64 VAR_3 = FUNC_2(VAR_1);

 FUNC_0(VAR_2->dev, "Core device error, stat[%llx]\n",
     (unsigned long long)VAR_3);

 FUNC_1(VAR_2, VAR_3);

 return -VAR_0;
}
