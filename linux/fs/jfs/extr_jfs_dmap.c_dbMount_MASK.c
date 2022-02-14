
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct metapage {scalar_t__ data; } ;
struct inode {int i_sb; } ;
struct dbmap_disk {int dn_maxfreebud; int dn_agsize; int * dn_agfree; int dn_agl2size; int dn_agstart; int dn_agwidth; int dn_agheight; int dn_aglevel; int dn_agpref; int dn_maxag; int dn_maxlevel; int dn_numag; int dn_l2nbperpage; int dn_nfree; int dn_mapsize; } ;
struct bmap {int db_active; struct inode* db_ipbmap; int db_maxfreebud; void* db_agsize; void** db_agfree; void* db_agl2size; void* db_agstart; void* db_agwidth; void* db_agheight; void* db_aglevel; void* db_agpref; void* db_maxag; void* db_maxlevel; void* db_numag; void* db_l2nbperpage; void* db_nfree; void* db_mapsize; } ;
struct TYPE_2__ {int l2nbperpage; struct bmap* bmap; } ;


 int VAR_0 ;
 int FUNC_0 (struct bmap*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct bmap*) ;
 struct bmap* FUNC_3 (int,int ) ;
 void* FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int) ;
 struct metapage* FUNC_7 (struct inode*,int,int ,int ) ;
 int FUNC_8 (struct metapage*) ;

int FUNC_9(struct inode *VAR_6)
{
 struct bmap *VAR_7;
 struct dbmap_disk *VAR_8;
 struct metapage *VAR_9;
 int VAR_10;





 VAR_7 = FUNC_3(sizeof(struct bmap), VAR_3);
 if (VAR_7 == ((void*)0))
  return -VAR_2;


 VAR_9 = FUNC_7(VAR_6,
      VAR_0 << FUNC_1(VAR_6->i_sb)->l2nbperpage,
      VAR_5, 0);
 if (VAR_9 == ((void*)0)) {
  FUNC_2(VAR_7);
  return -VAR_1;
 }


 VAR_8 = (struct dbmap_disk *) VAR_9->data;
 VAR_7->db_mapsize = FUNC_5(VAR_8->dn_mapsize);
 VAR_7->db_nfree = FUNC_5(VAR_8->dn_nfree);
 VAR_7->db_l2nbperpage = FUNC_4(VAR_8->dn_l2nbperpage);
 VAR_7->db_numag = FUNC_4(VAR_8->dn_numag);
 VAR_7->db_maxlevel = FUNC_4(VAR_8->dn_maxlevel);
 VAR_7->db_maxag = FUNC_4(VAR_8->dn_maxag);
 VAR_7->db_agpref = FUNC_4(VAR_8->dn_agpref);
 VAR_7->db_aglevel = FUNC_4(VAR_8->dn_aglevel);
 VAR_7->db_agheight = FUNC_4(VAR_8->dn_agheight);
 VAR_7->db_agwidth = FUNC_4(VAR_8->dn_agwidth);
 VAR_7->db_agstart = FUNC_4(VAR_8->dn_agstart);
 VAR_7->db_agl2size = FUNC_4(VAR_8->dn_agl2size);
 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++)
  VAR_7->db_agfree[VAR_10] = FUNC_5(VAR_8->dn_agfree[VAR_10]);
 VAR_7->db_agsize = FUNC_5(VAR_8->dn_agsize);
 VAR_7->db_maxfreebud = VAR_8->dn_maxfreebud;


 FUNC_8(VAR_9);


 VAR_7->db_ipbmap = VAR_6;
 FUNC_1(VAR_6->i_sb)->bmap = VAR_7;

 FUNC_6(VAR_7->db_active, 0, sizeof(VAR_7->db_active));




 FUNC_0(VAR_7);

 return (0);
}
