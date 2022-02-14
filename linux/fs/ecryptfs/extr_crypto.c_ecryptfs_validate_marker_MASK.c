
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(char *VAR_3)
{
 u32 VAR_4, VAR_5;

 VAR_4 = FUNC_1(VAR_3);
 VAR_5 = FUNC_1(VAR_3 + 4);
 if ((VAR_4 ^ VAR_2) == VAR_5)
  return 0;
 FUNC_0(VAR_1, "m_1 = [0x%.8x]; m_2 = [0x%.8x]; "
   "MAGIC_ECRYPTFS_MARKER = [0x%.8x]\n", VAR_4, VAR_5,
   VAR_2);
 FUNC_0(VAR_1, "(m_1 ^ MAGIC_ECRYPTFS_MARKER) = "
   "[0x%.8x]\n", (VAR_4 ^ VAR_2));
 return -VAR_0;
}
