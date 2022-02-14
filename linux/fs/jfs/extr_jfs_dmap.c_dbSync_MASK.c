
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct metapage {scalar_t__ data; } ;
struct inode {int i_mapping; int i_sb; } ;
struct dbmap_disk {int dn_maxfreebud; void* dn_agsize; void** dn_agfree; void* dn_agl2size; void* dn_agstart; void* dn_agwidth; void* dn_agheight; void* dn_aglevel; void* dn_agpref; void* dn_maxag; void* dn_maxlevel; void* dn_numag; void* dn_l2nbperpage; void* dn_nfree; void* dn_mapsize; } ;
struct bmap {int db_maxfreebud; int db_agsize; int * db_agfree; int db_agl2size; int db_agstart; int db_agwidth; int db_agheight; int db_aglevel; int db_agpref; int db_maxag; int db_maxlevel; int db_numag; int db_l2nbperpage; int db_nfree; int db_mapsize; } ;
struct TYPE_2__ {int l2nbperpage; struct bmap* bmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 struct metapage* FUNC_6 (struct inode*,int,int ,int ) ;
 int FUNC_7 (struct metapage*) ;

int FUNC_8(struct inode *VAR_4)
{
 struct dbmap_disk *VAR_5;
 struct bmap *VAR_6 = FUNC_0(VAR_4->i_sb)->bmap;
 struct metapage *VAR_7;
 int VAR_8;





 VAR_7 = FUNC_6(VAR_4,
      VAR_0 << FUNC_0(VAR_4->i_sb)->l2nbperpage,
      VAR_3, 0);
 if (VAR_7 == ((void*)0)) {
  FUNC_5("dbSync: read_metapage failed!");
  return -VAR_1;
 }

 VAR_5 = (struct dbmap_disk *) VAR_7->data;
 VAR_5->dn_mapsize = FUNC_2(VAR_6->db_mapsize);
 VAR_5->dn_nfree = FUNC_2(VAR_6->db_nfree);
 VAR_5->dn_l2nbperpage = FUNC_1(VAR_6->db_l2nbperpage);
 VAR_5->dn_numag = FUNC_1(VAR_6->db_numag);
 VAR_5->dn_maxlevel = FUNC_1(VAR_6->db_maxlevel);
 VAR_5->dn_maxag = FUNC_1(VAR_6->db_maxag);
 VAR_5->dn_agpref = FUNC_1(VAR_6->db_agpref);
 VAR_5->dn_aglevel = FUNC_1(VAR_6->db_aglevel);
 VAR_5->dn_agheight = FUNC_1(VAR_6->db_agheight);
 VAR_5->dn_agwidth = FUNC_1(VAR_6->db_agwidth);
 VAR_5->dn_agstart = FUNC_1(VAR_6->db_agstart);
 VAR_5->dn_agl2size = FUNC_1(VAR_6->db_agl2size);
 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
  VAR_5->dn_agfree[VAR_8] = FUNC_2(VAR_6->db_agfree[VAR_8]);
 VAR_5->dn_agsize = FUNC_2(VAR_6->db_agsize);
 VAR_5->dn_maxfreebud = VAR_6->db_maxfreebud;


 FUNC_7(VAR_7);




 FUNC_4(VAR_4->i_mapping);

 FUNC_3(VAR_4, 0);

 return (0);
}
