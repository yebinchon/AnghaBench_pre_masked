
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int journal_t ;
struct TYPE_3__ {int s_checksum; } ;
typedef TYPE_1__ journal_superblock_t ;
typedef int __u32 ;
typedef int __be32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,char*,int) ;

__attribute__((used)) static __be32 FUNC_2(journal_t *VAR_0, journal_superblock_t *VAR_1)
{
 __u32 VAR_2;
 __be32 VAR_3;

 VAR_3 = VAR_1->s_checksum;
 VAR_1->s_checksum = 0;
 VAR_2 = FUNC_1(VAR_0, ~0, (char *)VAR_1, sizeof(journal_superblock_t));
 VAR_1->s_checksum = VAR_3;

 return FUNC_0(VAR_2);
}
