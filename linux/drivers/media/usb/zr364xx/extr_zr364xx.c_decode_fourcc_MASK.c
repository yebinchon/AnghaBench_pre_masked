
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u32 ;



__attribute__((used)) static char *FUNC_0(__u32 VAR_0, char *VAR_1)
{
 VAR_1[0] = VAR_0 & 0xff;
 VAR_1[1] = (VAR_0 >> 8) & 0xff;
 VAR_1[2] = (VAR_0 >> 16) & 0xff;
 VAR_1[3] = (VAR_0 >> 24) & 0xff;
 VAR_1[4] = '\0';
 return VAR_1;
}
