
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int journal_t ;
struct TYPE_3__ {scalar_t__ s_checksum_type; } ;
typedef TYPE_1__ journal_superblock_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(journal_t *VAR_1, journal_superblock_t *VAR_2)
{
 if (!FUNC_0(VAR_1))
  return 1;

 return VAR_2->s_checksum_type == VAR_0;
}
