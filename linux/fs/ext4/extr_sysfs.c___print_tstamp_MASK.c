
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time64_t ;
typedef int ssize_t ;
typedef scalar_t__ __u8 ;
typedef int __le32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,char*,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_2(char *VAR_1, __le32 VAR_2, __u8 VAR_3)
{
 return FUNC_1(VAR_1, VAR_0, "%lld",
   ((time64_t)VAR_3 << 32) + FUNC_0(VAR_2));
}
