
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idmap {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,long*) ;
 scalar_t__ FUNC_1 (char const*,size_t,char const*,char*,int,struct idmap*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_2, size_t VAR_3, const char *VAR_4,
          __u32 *VAR_5, struct idmap *VAR_6)
{
 char VAR_7[VAR_1];
 long VAR_8;
 ssize_t VAR_9;
 int VAR_10 = 0;

 VAR_9 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_7, VAR_1, VAR_6);
 if (VAR_9 <= 0) {
  VAR_10 = -VAR_0;
 } else {
  VAR_10 = FUNC_0(VAR_7, 10, &VAR_8);
  if (!VAR_10)
   *VAR_5 = (__u32)VAR_8;
 }
 return VAR_10;
}
