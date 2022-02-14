
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysv_sb_info {scalar_t__ s_bytesex; } ;
typedef int __le16 ;
typedef int __fs16 ;
typedef int __be16 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static inline __fs16 FUNC_2(struct sysv_sb_info *VAR_1, __fs16 *VAR_2, int VAR_3)
{
 if (VAR_1->s_bytesex != VAR_0)
  FUNC_1((__le16 *)VAR_2, VAR_3);
 else
  FUNC_0((__be16 *)VAR_2, VAR_3);
 return *VAR_2;
}
