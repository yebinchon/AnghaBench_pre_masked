
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
struct xfs_mount {int m_sb; } ;


 unsigned char VAR_0 ;
 size_t VAR_1 ;
 unsigned char* VAR_2 ;
 int FUNC_0 (int *) ;

unsigned char
FUNC_1(
 struct xfs_mount *VAR_3,
 uint8_t VAR_4)
{
 if (!FUNC_0(&VAR_3->m_sb))
  return VAR_0;

 if (VAR_4 >= VAR_1)
  return VAR_0;

 return VAR_2[VAR_4];
}
