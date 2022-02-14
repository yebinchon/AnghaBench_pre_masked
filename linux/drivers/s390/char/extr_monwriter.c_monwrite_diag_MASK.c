
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct monwrite_hdr {int datalen; int mod_level; int release; int version; int record_num; int applid; } ;
struct appldata_product_id {int mod_lvl; int release_nr; int version_nr; int record_nr; int prod_fn; int prod_nr; } ;
struct appldata_parameter_list {int mod_lvl; int release_nr; int version_nr; int record_nr; int prod_fn; int prod_nr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct appldata_product_id*,struct appldata_product_id*,int,void*,int ) ;
 int FUNC_1 (struct appldata_product_id*) ;
 struct appldata_product_id* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static int FUNC_5(struct monwrite_hdr *VAR_4, char *VAR_5, int VAR_6)
{
 struct appldata_parameter_list *VAR_7;
 struct appldata_product_id *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_3);
 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_3);
 VAR_9 = -VAR_1;
 if (!VAR_8 || !VAR_7)
  goto out;
 FUNC_3(VAR_8->prod_nr, "LNXAPPL", 7);
 VAR_8->prod_fn = VAR_4->applid;
 VAR_8->record_nr = VAR_4->record_num;
 VAR_8->version_nr = VAR_4->version;
 VAR_8->release_nr = VAR_4->release;
 VAR_8->mod_lvl = VAR_4->mod_level;
 VAR_9 = FUNC_0(VAR_7, VAR_8, VAR_6,
     (void *) VAR_5, VAR_4->datalen);
 if (VAR_9 <= 0)
  goto out;
 FUNC_4("Writing monitor data failed with rc=%i\n", VAR_9);
 VAR_9 = (VAR_9 == 5) ? -VAR_2 : -VAR_0;
out:
 FUNC_1(VAR_8);
 FUNC_1(VAR_7);
 return VAR_9;
}
