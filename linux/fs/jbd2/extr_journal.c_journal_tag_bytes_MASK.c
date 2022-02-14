
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int journal_t ;
typedef int journal_block_tag_t ;
typedef int journal_block_tag3_t ;
typedef int __u32 ;
typedef int __u16 ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

size_t FUNC_3(journal_t *VAR_0)
{
 size_t VAR_1;

 if (FUNC_2(VAR_0))
  return sizeof(journal_block_tag3_t);

 VAR_1 = sizeof(journal_block_tag_t);

 if (FUNC_1(VAR_0))
  VAR_1 += sizeof(__u16);

 if (FUNC_0(VAR_0))
  return VAR_1;
 else
  return VAR_1 - sizeof(__u32);
}
