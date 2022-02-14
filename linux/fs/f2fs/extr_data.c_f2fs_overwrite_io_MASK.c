
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct f2fs_map_blocks {scalar_t__ m_lblk; int m_may_create; scalar_t__ m_len; int m_seg_type; int * m_next_extent; int * m_next_pgofs; } ;
typedef scalar_t__ loff_t ;
typedef scalar_t__ block_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct inode*,struct f2fs_map_blocks*,int ,int ) ;
 scalar_t__ FUNC_3 (struct inode*) ;

bool FUNC_4(struct inode *VAR_2, loff_t VAR_3, size_t VAR_4)
{
 struct f2fs_map_blocks VAR_5;
 block_t VAR_6;
 int VAR_7;

 if (VAR_3 + VAR_4 > FUNC_3(VAR_2))
  return 0;

 VAR_5.m_lblk = FUNC_1(VAR_3);
 VAR_5.m_next_pgofs = ((void*)0);
 VAR_5.m_next_extent = ((void*)0);
 VAR_5.m_seg_type = VAR_1;
 VAR_5.m_may_create = 0;
 VAR_6 = FUNC_0(VAR_3 + VAR_4);

 while (VAR_5.m_lblk < VAR_6) {
  VAR_5.m_len = VAR_6 - VAR_5.m_lblk;
  VAR_7 = FUNC_2(VAR_2, &VAR_5, 0, VAR_0);
  if (VAR_7 || VAR_5.m_len == 0)
   return 0;
  VAR_5.m_lblk += VAR_5.m_len;
 }
 return 1;
}
