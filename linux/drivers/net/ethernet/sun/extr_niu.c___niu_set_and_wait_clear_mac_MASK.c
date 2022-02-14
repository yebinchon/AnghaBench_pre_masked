
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct niu {int dev; } ;


 int FUNC_0 (struct niu*,unsigned long,scalar_t__,int,int) ;
 int FUNC_1 (int ,char*,unsigned long long,char const*,unsigned long long) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct niu *VAR_0, unsigned long VAR_1,
     u64 VAR_2, int VAR_3, int VAR_4,
     const char *VAR_5)
{
 int VAR_6;

 FUNC_3(VAR_1, VAR_2);
 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_6)
  FUNC_1(VAR_0->dev, "bits (%llx) of register %s would not clear, val[%llx]\n",
      (unsigned long long)VAR_2, VAR_5,
      (unsigned long long)FUNC_2(VAR_1));
 return VAR_6;
}
