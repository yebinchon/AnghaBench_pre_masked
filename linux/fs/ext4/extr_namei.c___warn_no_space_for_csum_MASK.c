
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;


 int FUNC_0 (struct inode*,char const*,unsigned int,char*) ;

__attribute__((used)) static void FUNC_1(struct inode *VAR_0, const char *VAR_1,
         unsigned int VAR_2)
{
 FUNC_0(VAR_0, VAR_1, VAR_2,
  "No space for directory leaf checksum. Please run e2fsck -D.");
}
