
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_map_blocks {int m_len; scalar_t__ m_lblk; int m_flags; } ;
struct mpage_da_data {int do_map; struct ext4_map_blocks map; } ;
struct buffer_head {int b_state; } ;
typedef scalar_t__ ext4_lblk_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;

__attribute__((used)) static bool FUNC_4(struct mpage_da_data *VAR_2, ext4_lblk_t VAR_3,
       struct buffer_head *VAR_4)
{
 struct ext4_map_blocks *VAR_5 = &VAR_2->map;


 if (!FUNC_1(VAR_4) || !FUNC_2(VAR_4) ||
     (!FUNC_0(VAR_4) && !FUNC_3(VAR_4))) {

  if (VAR_5->m_len == 0)
   return 1;
  return 0;
 }


 if (VAR_5->m_len == 0) {

  if (!VAR_2->do_map)
   return 0;
  VAR_5->m_lblk = VAR_3;
  VAR_5->m_len = 1;
  VAR_5->m_flags = VAR_4->b_state & VAR_0;
  return 1;
 }


 if (VAR_5->m_len >= VAR_1)
  return 0;


 if (VAR_3 == VAR_5->m_lblk + VAR_5->m_len &&
     (VAR_4->b_state & VAR_0) == VAR_5->m_flags) {
  VAR_5->m_len++;
  return 1;
 }
 return 0;
}
