
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct z_erofs_maprecorder {unsigned long lcn; int type; unsigned int* delta; unsigned long clusterofs; TYPE_1__* inode; struct erofs_map_blocks* map; } ;
struct erofs_map_blocks {unsigned long m_la; int m_flags; } ;
struct erofs_inode {unsigned int z_logical_clusterbits; int nid; } ;
struct TYPE_2__ {int i_sb; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct erofs_inode* FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;



 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (struct z_erofs_maprecorder*,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct z_erofs_maprecorder *VAR_3,
          unsigned int VAR_4)
{
 struct erofs_inode *const VAR_5 = FUNC_1(VAR_3->inode);
 struct erofs_map_blocks *const VAR_6 = VAR_3->map;
 const unsigned int VAR_7 = VAR_5->z_logical_clusterbits;
 unsigned long VAR_8 = VAR_3->lcn;
 int VAR_9;

 if (VAR_8 < VAR_4) {
  FUNC_2(VAR_3->inode->i_sb,
     "bogus lookback distance @ nid %llu", VAR_5->nid);
  FUNC_0(1);
  return -VAR_0;
 }


 VAR_8 -= VAR_4;
 VAR_9 = FUNC_3(VAR_3, VAR_8);
 if (VAR_9)
  return VAR_9;

 switch (VAR_3->type) {
 case 129:
  if (!VAR_3->delta[0]) {
   FUNC_2(VAR_3->inode->i_sb,
      "invalid lookback distance 0 @ nid %llu",
      VAR_5->nid);
   FUNC_0(1);
   return -VAR_0;
  }
  return FUNC_4(VAR_3, VAR_3->delta[0]);
 case 128:
  VAR_6->m_flags &= ~VAR_2;

 case 130:
  VAR_6->m_la = (VAR_8 << VAR_7) | VAR_3->clusterofs;
  break;
 default:
  FUNC_2(VAR_3->inode->i_sb,
     "unknown type %u @ lcn %lu of nid %llu",
     VAR_3->type, VAR_8, VAR_5->nid);
  FUNC_0(1);
  return -VAR_1;
 }
 return 0;
}
