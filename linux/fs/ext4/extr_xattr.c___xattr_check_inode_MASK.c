
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct inode {int dummy; } ;
struct ext4_xattr_ibody_header {scalar_t__ h_magic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ext4_xattr_ibody_header*) ;
 int FUNC_1 (struct inode*,char const*,unsigned int,int ,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,void*,int ) ;

__attribute__((used)) static int
FUNC_4(struct inode *VAR_2, struct ext4_xattr_ibody_header *VAR_3,
    void *VAR_4, const char *VAR_5, unsigned int VAR_6)
{
 int VAR_7 = -VAR_0;

 if (VAR_4 - (void *)VAR_3 < sizeof(*VAR_3) + sizeof(u32) ||
     (VAR_3->h_magic != FUNC_2(VAR_1)))
  goto errout;
 VAR_7 = FUNC_3(FUNC_0(VAR_3), VAR_4, FUNC_0(VAR_3));
errout:
 if (VAR_7)
  FUNC_1(VAR_2, VAR_5, VAR_6, 0,
       "corrupted in-inode xattr");
 return VAR_7;
}
