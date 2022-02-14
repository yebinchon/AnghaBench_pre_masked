
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct xfs_mount {int m_sb; } ;
struct xfs_agf {int agf_flcount; int agf_fllast; int agf_flfirst; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct xfs_mount*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool
FUNC_3(
 struct xfs_mount *VAR_0,
 struct xfs_agf *VAR_1)
{
 uint32_t VAR_2 = FUNC_0(VAR_1->agf_flfirst);
 uint32_t VAR_3 = FUNC_0(VAR_1->agf_fllast);
 uint32_t VAR_4 = FUNC_0(VAR_1->agf_flcount);
 int VAR_5 = FUNC_1(VAR_0);
 int VAR_6;


 if (!FUNC_2(&VAR_0->m_sb))
  return 0;






 if (VAR_2 >= VAR_5 || VAR_3 >= VAR_5)
  return 1;
 if (VAR_4 > VAR_5)
  return 1;





 if (VAR_4 && VAR_3 >= VAR_2)
  VAR_6 = VAR_3 - VAR_2 + 1;
 else if (VAR_4)
  VAR_6 = VAR_5 - VAR_2 + VAR_3 + 1;
 else
  VAR_6 = 0;

 return VAR_6 != VAR_4;
}
